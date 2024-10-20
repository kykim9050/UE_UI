// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/SWrapBoxWidget.h"

#define LOCTEXT_NAMESPACE "WrapBox"

void SWrapBoxWidget::Construct(const FArguments& _Args)
{
	bCanSupportFocus = true;

	OwningHUD = _Args._OwningHUD;

	FSlateFontInfo TitleTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
	TitleTextStyle.Size = 100.0f;

	ChildSlot
	[
		SNew(SWrapBox)
			.Orientation(EOrientation::Orient_Horizontal)
			.PreferredSize(10.0f)
			+ SWrapBox::Slot()
			.Padding(5)
			.VAlign(VAlign_Top)
			[
				SNew(STextBlock)
					.Font(TitleTextStyle)
					.Text(LOCTEXT("WBFirst", "I'm WrapBoxFirst I'm WrapBoxFirst I'm WrapBoxFirst I'm WrapBoxFirst I'm WrapBoxFirst I'm WrapBoxFirst"))
					.Justification(ETextJustify::Center)
			]
			+ SWrapBox::Slot()
			.Padding(5)
			.VAlign(VAlign_Bottom)
			[
				SNew(STextBlock)
					.Font(TitleTextStyle)
					.Text(LOCTEXT("WBSecond", "I'm WrapBoxSecond"))
					.Justification(ETextJustify::Center)
			]
			+ SWrapBox::Slot()
			.Padding(FMargin(20, 5, 0, 5))
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
					.Font(TitleTextStyle)
					.Text(LOCTEXT("WBThird", "I'm WrapBoxThird"))
					.Justification(ETextJustify::Center)
			]
			+ SWrapBox::Slot()
			.Padding(0)
			.VAlign(VAlign_Fill)
			[
				SNew(STextBlock)
					.Font(TitleTextStyle)
					.Text(LOCTEXT("WBForth", "I'm WrapBoxForth"))
					.Justification(ETextJustify::Center)
			]
	];
}
