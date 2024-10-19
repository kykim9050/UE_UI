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
				.Text(LOCTEXT("ScrolFirstHorFirst", "ScrolFirstHorFirst"))
				.Justification(ETextJustify::Center)
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Center)
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(LOCTEXT("ScrolFirstHorSecond", "ScrolFirstHorSecond"))
				.Justification(ETextJustify::Center)
				
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Right)
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(LOCTEXT("ScrolFirstHorThird", "ScrolFirstHorThird"))
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
				.Text(LOCTEXT("ScrolSecondHorFirst", "ScrolSecondHorFirst"))
				.Justification(ETextJustify::Center)
			]
			+SHorizontalBox::Slot()
			.FillWidth(1)
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(LOCTEXT("ScrolSecondHorSecond", "ScrolSecondHorSecond"))
				.Justification(ETextJustify::Center)
			]
			+SHorizontalBox::Slot()
			.FillWidth(3)
			[
				SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(LOCTEXT("ScrolSecondHorThird", "ScrolSecondHorThird"))
				.Justification(ETextJustify::Center)
			]
		]
	];
}

#undef LOCTEXT_NAMESPACE