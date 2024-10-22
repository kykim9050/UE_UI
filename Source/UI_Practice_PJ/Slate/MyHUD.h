// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

class UUWMain;
class UUWMainBase;

/**
 * 
 */
UCLASS()
class UI_PRACTICE_PJ_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = "Widgets")
	TSubclassOf<UUserWidget> MainWidgetClass;

protected:
	virtual void BeginPlay() override;
	//UUWMain* MainWidget;
	UUWMainBase* MainWidget = nullptr;
};
