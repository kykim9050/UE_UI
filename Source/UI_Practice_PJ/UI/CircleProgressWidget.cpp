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
	
	// ������ �ڽ��� �ʺ�, ���� ���� ����
	CPWSizeBox->WidthOverride = _Width;
	CPWSizeBox->HeightOverride = _Height;
}

void UCircleProgressWidget::SetGraphImageRes(const FName _Name)
{
	UKKYGameInstance* Inst = UKKYGlobalFunction::GetMainGameInstance(GetWorld());

	// Image Widget�� Brush�� ���ҽ��� �Է��ϱ� ���ؼ��� UObject* ������ ���ڸ� ����־�� ��.
	UObject* Obj = Inst->GetMaterialDataObject(_Name);

	// �귯�� ���ҽ��� Widget Image�� ����
	CPWImage->SetBrushResourceObject(Obj);
}

void UCircleProgressWidget::CircleProgressWidgetSetting(const FString& _SizeBoxName, float _BoxWidth, float _BoxHeight, const FString& _ImageName, const FString& _ImgResName)
{
	// ������ ���̺��� �̸� ������ �� �ֵ��� �����.
	CPWSizeBox = WidgetComponentInit<USizeBox>(FName(_SizeBoxName));
	SetBoxSize(_BoxWidth, _BoxHeight);

	// ������ ���̺��� �̸� ������ �� �ֵ��� �����.
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

	// ������ ���õǴ� �Լ���
	// void UMaterialInstanceDynamic::SetScalarParameterValue(FName ParameterName, float Value)
}
