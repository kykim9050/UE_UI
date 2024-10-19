// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SBaseWidget.h"

/**
 * 
 */
class STestMainWidget : public SBaseWidget
{	
public:
	SLATE_BEGIN_ARGS(STestMainWidget) {}

	SLATE_ARGUMENT(TWeakObjectPtr<class ASlateHUD>, OwningHUD)

	SLATE_END_ARGS()

	virtual void Construct(const FArguments& _Args);

	TWeakObjectPtr<class ASlateHUD> OwningHUD;

protected:

private:
};
