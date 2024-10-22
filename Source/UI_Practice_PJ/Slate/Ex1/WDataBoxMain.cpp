// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/Ex1/WDataBoxMain.h"


void SDataBoxMain::Construct(const FArguments& InArgs)
{
	ChildSlot
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Fill)
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
			SNew(STextBlock)
			.Text(this, &SDataBoxMain::GetDataTitle)
			.ColorAndOpacity(FSlateColor(FLinearColor::White))
			.Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Regular.ttf"), 24))
		]
	];
}

FText SDataBoxMain::GetDataTitle() const
{
	return FText::FromString(DataTitle);
}

void UWDataBoxMain::ReleaseSlateResources(bool bReleaseChildren)
{
	DataBoxMainWidget.Reset();
}

const FText UWDataBoxMain::GetPaletteCategory()
{
	return FText::FromString("DataBox");
}

TSharedRef<SWidget> UWDataBoxMain::RebuildWidget()
{
	DataBoxMainWidget = SNew(SDataBoxMain);
	return DataBoxMainWidget.ToSharedRef();
}
