// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KKYUserWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class UI_PRACTICE_PJ_API UKKYUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()
	
public:

protected:
	template<typename ClassType>
	ClassType* WidgetComponentInit(const FName& _WidgetName)
	{
		ClassType* CurWidget = Cast<ClassType>(GetWidgetFromName(_WidgetName));

		if (nullptr == CurWidget)
		{
			UE_LOG(LogType, Fatal, TEXT("if (nullptr == CurWidget)"));
			return nullptr;
		}

		return CurWidget;
	}

private:

};
