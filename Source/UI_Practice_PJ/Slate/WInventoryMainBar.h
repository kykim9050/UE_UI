// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "WInventoryMainBar.generated.h"

class SInventoryMainBar : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SInventoryMainBar) {}
	SLATE_ARGUMENT(TWeakObjectPtr<class UInventoryComponent>, Inventory)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	TWeakObjectPtr<class UInventoryComponent> Inventory;
	TArray<TSharedPtr<class SItemSlotWidget>> MainInventoryItemsWidgets;
};

UCLASS(Blueprintable, BlueprintType)
class UWInventoryMainBar : public UWidget
{
	GENERATED_BODY()
public:
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = true), Category = "InventoryMainBar")
	class UInventoryComponent* InventoryComponent;

	virtual const FText GetPaletteCategory() override;
protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;
	TSharedPtr<SInventoryMainBar> InventoryMainBarWidget;
};
