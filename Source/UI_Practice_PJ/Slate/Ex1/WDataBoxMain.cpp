// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/Ex1/WDataBoxMain.h"
#include "Editor/EditorStyle/Public/EditorStyleSet.h"
#include "Editor/EditorStyle/Public/EditorStyle.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SDataBoxMain::Construct(const FArguments& InArgs)
{
	TAttribute<int32> SecondData = InArgs._Cnt;
	int32 SecondDataVal = SecondData.Get();

	TSharedRef<SSeparator> Sep = SNew(SSeparator);
	Sep->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));

	//SetCnt();

	ChildSlot
	.HAlign(HAlign_Fill)
	.VAlign(VAlign_Fill)
	[
		SNew(SOverlay)
		+SOverlay::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		[
			SNew(SBorder)
			//.BorderImage(FCoreStyle::Get().GetBrush("ToolPanel.GroupBorder"))
			.BorderImage(FAppStyle::GetBrush("Debug.Border"))
			//.BorderBackgroundColor(FLinearColor::White)
		]
		+ SOverlay::Slot()
		.HAlign(HAlign_Center)
		.VAlign(VAlign_Center)
		.Padding(10.0f)
		[
			SNew(SScrollBox)
			+ SScrollBox::Slot()
			.HAlign(HAlign_Left)
			.VAlign(VAlign_Center)
			.Padding(5.f)
			[
				SNew(STextBlock)
				.Text(this, &SDataBoxMain::GetDataTitle)
				.Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Regular.ttf"), 24))
				.ColorAndOpacity(FSlateColor(FColor(0x80,0x80,0x80,0xFF)))
				//.Font(FAppStyle::GetFontStyle("GenericFilters.TextStyle"))
			]
			+ SScrollBox::Slot()
			.VAlign(VAlign_Center)
			.Padding(5.f)
			[
				SAssignNew(Sep, SSeparator)
				.Orientation(Orient_Horizontal)
				//.ColorAndOpacity(FColor(0xFF, 0xFF, 0xFF, 0xFF))
				.Thickness(4.0f)
			]
			+ SScrollBox::Slot()
			.HAlign(HAlign_Center)
			.VAlign(VAlign_Center)
			.Padding(5.f)
			[
				SNew(SBox)
				.MinDesiredWidth(400.f)
				.MinDesiredHeight(400.f)
				.HAlign(HAlign_Fill)
				.VAlign(VAlign_Fill)
				[
					SNew(STextBlock)
					.Text(FText::FromString(FString::FromInt(SecondDataVal)))
					.Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/Roboto-Regular.ttf"), 24))
				]
			]
		]
	];
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION

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
