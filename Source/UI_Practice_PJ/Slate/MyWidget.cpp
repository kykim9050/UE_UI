// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/MyWidget.h"

void SMyWidget::Construct(const FArguments& InArgs)
{
	ChildSlot
	.HAlign(HAlign_Center)
	.VAlign(VAlign_Center)
	[
		SNew(SBorder)
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.BorderImage(FCoreStyle::Get().GetBrush("WhiteBrush"))
		[
			SNew(STextBlock)
			.Text(this, &SMyWidget::GetTime)
			.ColorAndOpacity(FLinearColor::Black)
		]
	];
}

FText SMyWidget::GetTime() const
{
	FDateTime CurrentTime = FDateTime::Now();
	return FText::FromString(CurrentTime.ToString(TEXT("%H:%M:%S")));
}

