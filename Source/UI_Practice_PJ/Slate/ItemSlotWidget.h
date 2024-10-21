// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

struct FInventoryItem;

/**
 * 
 */
class SItemSlotWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SItemSlotWidget) {}
	SLATE_ARGUMENT(FInventoryItem*, Item)
	SLATE_END_ARGS()

	FInventoryItem* Item;

	void Construct(const FArguments& InArgs);
	const FSlateBrush* GetItemIcon() const;
	FText GetItemCount() const;
};
