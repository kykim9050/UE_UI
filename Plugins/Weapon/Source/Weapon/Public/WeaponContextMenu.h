// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "AssetTypeCategories.h"

/**
 * 
 */
class WEAPON_API FWeaponContextMenu : public FAssetTypeActions_Base
{
public:
	FWeaponContextMenu(EAssetTypeCategories::Type InCategory);

public:
	virtual FText GetName() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	EAssetTypeCategories::Type Category;
};
