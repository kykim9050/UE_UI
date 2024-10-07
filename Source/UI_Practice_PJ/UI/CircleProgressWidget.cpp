// Fill out your copyright notice in the Description page of Project Settings.
#include "UI/CircleProgressWidget.h"

#include "Components/SizeBox.h"
#include "Components/Image.h"

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
	
	CPWSizeBox->WidthOverride = _Width;
	CPWSizeBox->HeightOverride = _Height;
}

void UCircleProgressWidget::SetGraphImageRes()
{
	// 세팅할 오브젝트를 넣어주어야 하는데,,, 이것을 데이터 테이블에서 만들고 GameInstance에서 가져오는 방식으로 만들자.
	//CPWImage->Brush.SetResourceObject();
}