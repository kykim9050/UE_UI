// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UI/KKYUserWidgetBase.h"
#include "CircleProgressWidget.generated.h"

/**
 * 
 */
UCLASS()
class UI_PRACTICE_PJ_API UCircleProgressWidget : public UKKYUserWidgetBase
{
	GENERATED_BODY()
	
public:
	UCircleProgressWidget();

	UFUNCTION()
	void SetBoxSize(float _Width, float _Height);

	UFUNCTION()
	void SetGraphImageRes();

protected:
	void NativePreConstruct() override;

private:

private:
	UPROPERTY()
	class USizeBox* CPWSizeBox = nullptr;

	UPROPERTY()
	class UImage* CPWImage = nullptr;
};
