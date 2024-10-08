// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MaterialDataRow.generated.h"

/**
 * 
 */
USTRUCT()
struct FMaterialDataRow : public FTableRowBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	class UMaterialInstance* MaterialInst = nullptr;
};
