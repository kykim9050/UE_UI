// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/SUniformGridPanelsWidget.h"

#define LOCTEXT_NAMESPACE "UniformGridPanels"

void SUniformGridPanelsWidget::Construct(const FArguments& _Args)
{
	bCanSupportFocus = true;

	OwningHUD = _Args._OwningHUD;

	FSlateFontInfo TitleTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
	TitleTextStyle.Size = 100.0f;

	ChildSlot
	[
		SNew(SUniformGridPanel)
		.SlotPadding( FMargin(5.0f))
		+SUniformGridPanel::Slot(0,0)
		.HAlign(HAlign_Center)
		[
			SNew(STextBlock)
			.Font(TitleTextStyle)
			.Text(LOCTEXT("UGPFirst", "UGPFirst"))
			.Justification(ETextJustify::Center)
		]
		+SUniformGridPanel::Slot(0,1)
		.HAlign(HAlign_Center)
		[
			SNew(STextBlock)
			.Font(TitleTextStyle)
			.Text(LOCTEXT("UGPSecond", "UGPSecond"))
			.Justification(ETextJustify::Center)
		]
		+SUniformGridPanel::Slot(0,2)
		.HAlign(HAlign_Center)
		[
			SNew(STextBlock)
			.Font(TitleTextStyle)
			.Text(LOCTEXT("UGPThird", "UGPThird"))
			.Justification(ETextJustify::Center)
		]
		+SUniformGridPanel::Slot(1,0)
		[
			SNew(STextBlock)
			.Font(TitleTextStyle)
			.Text(LOCTEXT("UGPForth", "UGPForth"))
			.Justification(ETextJustify::Center)
		]
		+SUniformGridPanel::Slot(1,1)
		[
			SNew(STextBlock)
			.Font(TitleTextStyle)
			.Text(LOCTEXT("UGPFifth", "UGPFifth"))
			.Justification(ETextJustify::Center)
		]
		+SUniformGridPanel::Slot(2,2)
		[
			SNew(STextBlock)
			.Font(TitleTextStyle)
			.Text(LOCTEXT("UGPSixth", "UGPSixth"))
			.Justification(ETextJustify::Center)
		]
	];
}
