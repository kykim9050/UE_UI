// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/STestMainWidget.h"

#define LOCTEXT_NAMESPACE "MainMenu"

void STestMainWidget::Construct(const FArguments& _Args)
{
	bCanSupportFocus = true;

	OwningHUD = _Args._OwningHUD;

	const FText TitleText = LOCTEXT("GameTitle", "Slate UI Challenge");

	FSlateFontInfo TitleTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
	TitleTextStyle.Size = 60.0f;

	ChildSlot
		[
			SNew(STextBlock)
				.Font(TitleTextStyle)
				.Text(TitleText)
				.Justification(ETextJustify::Center)
		];
}

#undef LOCTEXT_NAMESPACE