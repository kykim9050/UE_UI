// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/SSlotAttributeWidget.h"

#define LOCTEXT_NAMESPACE "SlotAttribute"

void SSlotAttributeWidget::Construct(const FArguments& _Args)
{
	bCanSupportFocus = true;

	OwningHUD = _Args._OwningHUD;

	const FText TitleText = LOCTEXT("Title", "Slate UI Challenge");
	FSlateFontInfo TitleTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
	TitleTextStyle.Size = 60.0f;

	ChildSlot
	[
		SNew(SScrollBox)
		+SScrollBox::Slot()
		.Padding(10, 5)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Left)
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(TitleText)
				.Justification(ETextJustify::Center)
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Center)
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(TitleText)
				.Justification(ETextJustify::Center)
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Right)
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(TitleText)
				.Justification(ETextJustify::Center)
			]
		]
		+SScrollBox::Slot()
		.Padding(10, 5)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.FillWidth(2)
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(TitleText)
				.Justification(ETextJustify::Center)
			]
			+SHorizontalBox::Slot()
			.FillWidth(1)
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(TitleText)
				.Justification(ETextJustify::Center)
			]
			+SHorizontalBox::Slot()
			.FillWidth(3)
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(TitleText)
				.Justification(ETextJustify::Right)
			]
		]
	];
}

#undef LOCTEXT_NAMESPACE