// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/SlateHUD.h"
#include "Slate/STestMainWidget.h"
#include "Slate/SSlotAttributeWidget.h"


void ASlateHUD::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine && GEngine->GameViewport)
	{
		MainWidget = SNew(SSlotAttributeWidget).OwningHUD(this);
		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(WidgetContainer, SWeakWidget).PossiblyNullContent(MainWidget.ToSharedRef()));
	}

}
