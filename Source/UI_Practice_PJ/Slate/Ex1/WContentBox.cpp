// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/Ex1/WContentBox.h"


BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SContentBox::Construct(const FArguments& InArgs)
{
	NWidget = InArgs._NWidget.Widget;

	TSharedRef<SVerticalBox> ContentBox = SNew(SVerticalBox);

	if (NWidget.IsValid() && NWidget != SNullWidget::NullWidget)
	{
		ContentBox->AddSlot()
			[
				NWidget.ToSharedRef()
			];
	}

	ChildSlot
	[
		ContentBox
	];
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

void UWContentBox::ReleaseSlateResources(bool bReleaseChildren)
{
	ContentBoxWidget.Reset();
}

const FText UWContentBox::GetPaletteCategory()
{
	return FText::FromString("DataBox");
}

TSharedRef<SWidget> UWContentBox::RebuildWidget()
{
	ContentBoxWidget = SNew(SContentBox);
	return ContentBoxWidget.ToSharedRef();
}

