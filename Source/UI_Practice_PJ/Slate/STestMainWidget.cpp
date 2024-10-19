// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/STestMainWidget.h"

void STestMainWidget::Construct(const FArguments& _Args)
{
	bCanSupportFocus = true;

	OwningHUD = _Args._OwningHUD;
}
