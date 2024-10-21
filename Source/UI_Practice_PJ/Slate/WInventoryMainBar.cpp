// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/WInventoryMainBar.h"
#include "Slate/Inventory/InventoryComponent.h"
#include "Slate/ItemSlotWidget.h"

void SInventoryMainBar::Construct(const FArguments& InArgs)
{
	Inventory = InArgs._Inventory;

	TSharedPtr<SGridPanel> GridPanel;

	ChildSlot
	.HAlign(HAlign_Left)
	.VAlign(VAlign_Center)
	[
		SAssignNew(GridPanel, SGridPanel)
	];

	int SlotsCountX = Inventory.IsValid() ? Inventory->InventorySizeX : 3;
	int SlotsCountY = Inventory.IsValid() ? Inventory->InventorySizeY : 3;
	int32 Counter = 0;

	for (int32 x = 0; x < SlotsCountX; ++x)
	{
		for (int32 y = 0; y < SlotsCountY; ++y)
		{
			TSharedPtr<SItemSlotWidget> NewWidget;
			GridPanel->AddSlot(y, x)
			.Padding(10.f)
			[
				SAssignNew(NewWidget, SItemSlotWidget)
				.Item(Inventory.IsValid() ? &Inventory->GetItems()[Counter] : nullptr)
			];
			MainInventoryItemsWidgets.Add(NewWidget);
			++Counter;
		}
	}
}

void UWInventoryMainBar::ReleaseSlateResources(bool bReleaseChildren)
{
	InventoryMainBarWidget.Reset();
}

const FText UWInventoryMainBar::GetPaletteCategory()
{
	return FText::FromString("Inventory");
}

TSharedRef<SWidget> UWInventoryMainBar::RebuildWidget()
{
	APlayerController* Controller = GetOwningPlayer();

	if (Controller)
	{
		APawn* Pawn = Controller->GetPawn();
		if (Pawn)
		{
			InventoryComponent = Pawn->FindComponentByClass<UInventoryComponent>();
		}
	}

	InventoryMainBarWidget = SNew(SInventoryMainBar).Inventory(InventoryComponent);
	return InventoryMainBarWidget.ToSharedRef();
}
