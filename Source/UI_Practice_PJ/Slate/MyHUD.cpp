// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/MyHUD.h"

#include "Slate/UWMain.h"

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	MainWidget = CreateWidget<UUWMain>(GetWorld(), MainWidgetClass);

	if (MainWidget)
	{
		MainWidget->AddToViewport();
	}
}
