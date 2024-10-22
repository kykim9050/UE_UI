// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/MyHUD.h"

#include "Slate/UWMain.h"
#include "Slate/Ex1/UWMainBase.h"

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	MainWidget = CreateWidget<UUWMainBase>(GetWorld(), MainWidgetClass);

	if (MainWidget)
	{
		MainWidget->AddToViewport();
	}
}
