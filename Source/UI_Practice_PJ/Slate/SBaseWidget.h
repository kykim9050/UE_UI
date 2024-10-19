// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "SlateBasics.h"
#include "SlateExtras.h"

/**
 * 
 */
class SBaseWidget : public SCompoundWidget
{
public:

protected:
	virtual bool SupportsKeyboardFocus() const override { return true; };

private:
};
