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

	// ������ ���̺��� �̸� ������ �� �ֵ��� �����.
	CPWSizeBox = WidgetComponentInit<USizeBox>(TEXT("CP_SizeBox"));
	SetBoxSize(300.0f, 300.0f);

	// ������ ���̺��� �̸� ������ �� �ֵ��� �����.
	CPWImage = WidgetComponentInit<UImage>(TEXT("CP_Image"));
	SetGraphImageRes();
}

void UCircleProgressWidget::SetBoxSize(float _Width, float _Height)
{
	if (nullptr == CPWSizeBox)
	{
		return;
	}
	
	CPWSizeBox->WidthOverride = _Width;
	CPWSizeBox->HeightOverride = _Height;
}

void UCircleProgressWidget::SetGraphImageRes()
{
	UKKYGameInstance* Inst = UKKYGlobalFunction::GetMainGameInstance(GetWorld());

	const UObject* Obj = Inst->GetMaterialDataObject(TEXT("RoundProgressBar"));
	//CPWImage->Brush.SetResourceObject(Obj);
}