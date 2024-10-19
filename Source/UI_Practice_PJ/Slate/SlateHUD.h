// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "SlateHUD.generated.h"

/**
 * 
 */
UCLASS()
class UI_PRACTICE_PJ_API ASlateHUD : public AHUD
{
	GENERATED_BODY()

public:
	
protected:
	void BeginPlay() override;

	TSharedPtr<class SBaseWidget> MainWidget;
	TSharedPtr<class SWidget> WidgetContainer;

private:

};
