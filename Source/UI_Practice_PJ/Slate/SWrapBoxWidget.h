// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "SBaseWidget.h"

/**
 * 
 */
class SWrapBoxWidget : public SBaseWidget
{
	SLATE_BEGIN_ARGS(SWrapBoxWidget) {}

	SLATE_ARGUMENT(TWeakObjectPtr<class ASlateHUD>, OwningHUD)

	SLATE_END_ARGS()

public:
	virtual void Construct(const FArguments& _Args);
	void OnCheckBoxChanged(ECheckBoxState _CheckBoxState);

	ECheckBoxState CurBoxState = ECheckBoxState::Unchecked;
};
