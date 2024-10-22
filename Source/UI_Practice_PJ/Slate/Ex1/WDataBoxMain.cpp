// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/Ex1/WDataBoxMain.h"


void SDataBoxMain::Construct(const FArguments& InArgs)
{

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
