// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/MyHUD.h"
#include "Slate/MyWidget.h"

void AMyHUD::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine && GEngine->GameViewport)
	{
		TimeWidget = SNew(SMyWidget);
		GEngine->GameViewport->AddViewportWidgetContent(TimeWidget.ToSharedRef());
	}
}
