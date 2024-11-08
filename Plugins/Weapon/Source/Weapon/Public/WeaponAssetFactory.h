// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "WeaponAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class WEAPON_API UWeaponAssetFactory : public UFactory
{
	GENERATED_BODY()
public:
	UWeaponAssetFactory();
	
	UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn, FName CallingContext) override;
};