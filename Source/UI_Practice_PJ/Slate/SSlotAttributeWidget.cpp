// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/SSlotAttributeWidget.h"

#define LOCTEXT_NAMESPACE "SlotAttribute"

void SSlotAttributeWidget::Construct(const FArguments& _Args)
{
	bCanSupportFocus = true;

	OwningHUD = _Args._OwningHUD;

	const FText TitleText = LOCTEXT("GameTitle", "Slate UI Challenge");


}

#undef LOCTEXT_NAMESPACE