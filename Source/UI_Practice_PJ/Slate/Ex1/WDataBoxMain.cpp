// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/Ex1/WDataBoxMain.h"


void SDataBoxMain::Construct(const FArguments& InArgs)
{
	ChildSlot
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Fill)
	[
		SNew(SOverlay)
		+ SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SImage)
			.Image(FCoreStyle::Get().GetBrush("BlackBrush"))
		]
		+ SOverlay::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Padding(10.0f)
		[
			SNew(SVerticalBox)
			+ SVerticalBox::Slot()
			.HAlign(HAlign_Left)
			.VAlign(VAlign_Center)
			.Padding(0.0f, 5.f)
			[
				SNew(STextBlock)
				.Text(this, &SDataBoxMain::GetDataTitle)
				.ColorAndOpacity(FSlateColor(FLinearColor::White))
				.Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Regular.ttf"), 24))
			]
			+SVerticalBox::Slot()
			.VAlign(VAlign_Center)
			.FillHeight(0.25f)
			.Padding(0.0f, 5.f)
			[
				SNew(SSeparator)
				.Orientation(Orient_Horizontal)
				.ColorAndOpacity(FSlateColor(FLinearColor::White))
				.Thickness(3.0f)
			]
			+SVerticalBox::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			[
				SNew(SBox)
				.MinDesiredWidth(400.f)
				.MinDesiredHeight(400.f)
				[
					SNew(SOverlay)
					+SOverlay::Slot()
					.HAlign(HAlign_Fill)
					.VAlign(VAlign_Fill)
					.Padding(0.f, 5.f)
					[
						SNew(SImage)
						.Image(FCoreStyle::Get().GetBrush("WhiteBrush"))
					]
				]
			]
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
