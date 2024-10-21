// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UWMain.generated.h"

class UCanvasPanel;
class UWInventoryMainBar;

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class UI_PRACTICE_PJ_API UUWMain : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "UWMain", meta = (BindWidget))
	UCanvasPanel* RootWidget;
	UPROPERTY(BlueprintReadOnly, Category = "UWMain", meta = (BindWidget))
	UWInventoryMainBar* InventoryMainBar;
};
