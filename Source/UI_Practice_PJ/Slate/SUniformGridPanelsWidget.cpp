// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/SUniformGridPanelsWidget.h"

#define LOCTEXT_NAMESPACE "UniformGridPanels"

void SUniformGridPanelsWidget::Construct(const FArguments& _Args)
{
	bCanSupportFocus = true;

	OwningHUD = _Args._OwningHUD;

	//const FText TitleText = LOCTEXT("Title", "Slate UI Challenge");
	//FSlateFontInfo TitleTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
	//TitleTextStyle.Size = 60.0f;



}
