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
	/// <summary>
	/// ���� ������Ʈ �ʱ�ȭ (�ش� ���� �ȿ� ������Ʈ�� �����Ѵٸ� �ּҰ� ��ȯ)
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="_WidgetName"></param>
	/// <returns></returns>
	template<typename T>
	T* WidgetComponentInit(const FName& _WidgetName)
	{
		T* WidgetComp = Cast<T>(GetWidgetFromName(_WidgetName));

		if (nullptr == WidgetComp)
		{
			UE_LOG(LogType, Fatal, TEXT("if (nullptr == WidgetComp)"));
			return nullptr;
		}

		return WidgetComp;
	}

private:

};
