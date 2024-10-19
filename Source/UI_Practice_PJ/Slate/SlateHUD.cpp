// Fill out your copyright notice in the Description page of Project Settings.


#include "Slate/SlateHUD.h"
#include "Slate/STestMainWidget.h"
//#include "Widgets/SWeakWidget.h"
//#include "Engine/Engine.h"

void ASlateHUD::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine && GEngine->GameViewport)
	{
		//Widget = SNew(STestMainWidget).OwningHUD(this);
	//	GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(WidgetContainer, SWeakWidget).PossiblyNullContent(Widget.ToSharedRef()));
	}

}
