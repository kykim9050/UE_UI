// Fill out your copyright notice in the Description page of Project Settings.
#include "UI/CircleProgressWidget.h"

#include "Components/SizeBox.h"
#include "Components/Image.h"
#include "Global/KKYGlobalFunction.h"
#include "Global/KKYGameInstance.h"

#include "Kismet/KismetMaterialLibrary.h"

UCircleProgressWidget::UCircleProgressWidget()
{
	
}

void UCircleProgressWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	//CircleProgressWidgetSetting(TEXT("CP_SizeBox"), 500.0f, 500.0f, TEXT("CP_Image"), TEXT("RoundProgressBar"));
}

void UCircleProgressWidget::SetBoxSize(float _Width, float _Height)
{
	if (nullptr == CPWSizeBox)
	{
		return;
	}
	
	// 사이즈 박스의 너비, 높이 값을 지정
	CPWSizeBox->WidthOverride = _Width;
	CPWSizeBox->HeightOverride = _Height;
}

void UCircleProgressWidget::SetGraphImageRes(const FName _Name)
{
	UKKYGameInstance* Inst = UKKYGlobalFunction::GetMainGameInstance(GetWorld());

	// Image Widget의 Brush에 리소스를 입력하기 위해서는 UObject* 형으로 인자를 집어넣어야 함.
	UObject* Obj = Inst->GetMaterialDataObject(_Name);

	// 브러시 리소스를 Widget Image에 전달
	CPWImage->SetBrushResourceObject(Obj);
}

void UCircleProgressWidget::CircleProgressWidgetSetting(const FString& _SizeBoxName, float _BoxWidth, float _BoxHeight, const FString& _ImageName, const FString& _ImgResName)
{
	// 데이터 테이블에서 이름 가져올 수 있도록 만들기.
	CPWSizeBox = WidgetComponentInit<USizeBox>(FName(_SizeBoxName));
	SetBoxSize(_BoxWidth, _BoxHeight);

	// 데이터 테이블에서 이름 가져올 수 있도록 만들기.
	CPWImage = WidgetComponentInit<UImage>(FName(_ImageName));
	SetGraphImageRes(FName(_ImgResName));

	PercentValSynchronization(FName(_ImgResName));
}

void UCircleProgressWidget::PercentValSynchronization(const FName _Name)
{
	UKKYGameInstance* Inst = UKKYGlobalFunction::GetMainGameInstance(GetWorld());
	
	if (nullptr == MaterialInstDynamic)
	{
		MaterialInstDynamic = UKismetMaterialLibrary::CreateDynamicMaterialInstance(GetWorld(), Inst->GetMaterialDataInst(_Name));
	}

	CPWImage->SetBrushFromMaterial(MaterialInstDynamic);
}

void UCircleProgressWidget::SetPercent(float _Value)
{
	Percent = _Value;

	// 실제로 세팅되는 함수는
	// void UMaterialInstanceDynamic::SetScalarParameterValue(FName ParameterName, float Value)
}
