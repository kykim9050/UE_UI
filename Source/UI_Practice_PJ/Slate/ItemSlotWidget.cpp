// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/ItemSlotWidget.h"
#include "Slate/Inventory/InventoryComponent.h"

void SItemSlotWidget::Construct(const FArguments& InArgs)
{
	Item = InArgs._Item;

	ChildSlot
	[
		SNew(SBox)
		.WidthOverride(FOptionalSize(110.f))
		.HeightOverride(FOptionalSize(110.f))
		[
			SNew(SOverlay)
			+SOverlay::Slot()
			.HAlign(HAlign_Fill)
			.VAlign(VAlign_Fill)
			[
				SNew(SImage)
				.Image(FCoreStyle::Get().GetBrush("BlackBrush"))
			]
			+SOverlay::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(SBox)
				.WidthOverride(FOptionalSize(100.f))
				.HeightOverride(FOptionalSize(100.f))
				[
					SNew(SOverlay)
					+SOverlay::Slot()
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					[
						SNew(SImage)
						.Image(FCoreStyle::Get().GetBrush("WhiteBrush"))
					]
					+SOverlay::Slot()
					.HAlign(HAlign_Center)
					.VAlign(VAlign_Center)
					[
						SNew(SImage)
						.Image(this, &SItemSlotWidget::GetItemIcon)
					]
					+SOverlay::Slot()
					.HAlign(HAlign_Right)
					.VAlign(VAlign_Bottom)
					[
						SNew(STextBlock)
						.Text(this, &SItemSlotWidget::GetItemCount)
						.ColorAndOpacity(FSlateColor(FLinearColor::Black))
						.Font(FSlateFontInfo(FPaths::EngineContentDir()/TEXT("Slate/Fonts/Roboto-Regular.ttf"), 24))
					]
				]
			]
		]
	];
}

const FSlateBrush* SItemSlotWidget::GetItemIcon() const
{
	if (Item && Item->ItemClass)
	{
		return &Item->ItemClass.GetDefaultObject()->ItemIcon;
	}

	return FCoreStyle::Get().GetBrush("WhiteBrush");
}

FText SItemSlotWidget::GetItemCount() const
{
	if (Item && Item->ItemClass)
	{
		return FText::FromString(FString::FromInt(Item->Count));
	}

	return FText::FromString("");
}
