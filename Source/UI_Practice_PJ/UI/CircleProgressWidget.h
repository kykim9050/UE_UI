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
	UFUNCTION()
	void SetBoxSize(float _Width, float _Height);

	UCircleProgressWidget();

protected:
	void NativePreConstruct() override;

private:

private:
	UPROPERTY()
	class USizeBox* SizeBox = nullptr;
};
