// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "SBaseWidget.h"

/**
 * 
 */
class SUniformGridPanelsWidget : public SBaseWidget
{
public:
	SLATE_BEGIN_ARGS(SUniformGridPanelsWidget) {}

	SLATE_ARGUMENT(TWeakObjectPtr<class ASlateHUD>, OwningHUD)

	SLATE_END_ARGS()

	virtual void Construct(const FArguments& _Args);
};
