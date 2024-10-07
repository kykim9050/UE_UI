// Fill out your copyright notice in the Description page of Project Settings.
#include "UI/CircleProgressWidget.h"
#include "Components/SizeBox.h"


UCircleProgressWidget::UCircleProgressWidget()
{
	
}

void UCircleProgressWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	SizeBoxInit();

	SetBoxSize(300.0f, 300.0f);
}

void UCircleProgressWidget::SizeBoxInit()
{
	SizeBox = Cast<USizeBox>(GetWidgetFromName(TEXT("CP_SizeBox")));

	if (nullptr == SizeBox)
	{
		UE_LOG(LogType, Fatal, TEXT("if (nullptr == SizeBox)"));
		return;
	}
}

void UCircleProgressWidget::SetBoxSize(float _Width, float _Height)
{
	if (nullptr == SizeBox)
	{
		return;
	}
	
	SizeBox->WidthOverride = _Width;
	SizeBox->HeightOverride = _Height;
}