// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "KKYGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UI_PRACTICE_PJ_API UKKYGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	const struct FMaterialDataRow* GetMaterialDataRow(const FName _Name);
	const UObject* GetMaterialDataObject(const FName _Name);

protected:

private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	class UDataTable* MaterialDataRow = nullptr;
};
