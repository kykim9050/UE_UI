// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KKYGlobalFunction.generated.h"

/**
 * 
 */
UCLASS()
class UI_PRACTICE_PJ_API UKKYGlobalFunction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	static class UKKYGameInstance* GetMainGameInstance(const UWorld* _WorldContextObject);

protected:

private:

};
