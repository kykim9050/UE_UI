// Fill out your copyright notice in the Description page of Project Settings.
#include "UI/CircleProgressWidget.h"

#include "Components/SizeBox.h"
#include "Components/Image.h"
#include "Global/KKYGlobalFunction.h"
#include "Global/KKYGameInstance.h"


UCircleProgressWidget::UCircleProgressWidget()
{
	
}

void UCircleProgressWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	// 데이터 테이블에서 이름 가져올 수 있도록 만들기.
	CPWSizeBox = WidgetComponentInit<USizeBox>(TEXT("CP_SizeBox"));
	SetBoxSize(300.0f, 300.0f);

	// 데이터 테이블에서 이름 가져올 수 있도록 만들기.
	CPWImage = WidgetComponentInit<UImage>(TEXT("CP_Image"));
	SetGraphImageRes();
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

void UCircleProgressWidget::SetGraphImageRes()
{
	UKKYGameInstance* Inst = UKKYGlobalFunction::GetMainGameInstance(GetWorld());

	// Image Widget의 Brush에 리소스를 입력하기 위해서는 UObject* 형으로 인자를 집어넣어야 함.
	UObject* Obj = Inst->GetMaterialDataObject(TEXT("RoundProgressBar"));

	// 브러시 리소스를 Widget Image에 전달
	CPWImage->SetBrushResourceObject(Obj);
}