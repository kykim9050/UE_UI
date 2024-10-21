// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/Inventory/InventoryComponent.h"

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	for (int32 i = Items.Num(); i < InventorySizeX * InventorySizeY; ++i)
	{
		Items.Add(FInventoryItem());
	}
}
