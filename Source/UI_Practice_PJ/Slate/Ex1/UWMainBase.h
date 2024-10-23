// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UWMainBase.generated.h"

class UCanvasPanel;
class UWDataBoxMain;
class UWContentBox;
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class UI_PRACTICE_PJ_API UUWMainBase : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "UWMainEx1", meta = (BindWidget))
	UCanvasPanel* RootWidget = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "UWMainEx1", meta = (BindWidget))
	UWDataBoxMain* DataBoxMain = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = "UWMainEx1", meta = (BindWidget))
	UWContentBox* ContentBox = nullptr;
};
