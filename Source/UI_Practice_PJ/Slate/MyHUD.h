// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */
UCLASS()
class UI_PRACTICE_PJ_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
protected:
	TSharedPtr<class SMyWidget> TimeWidget = nullptr;
	
	virtual void BeginPlay() override;
};
