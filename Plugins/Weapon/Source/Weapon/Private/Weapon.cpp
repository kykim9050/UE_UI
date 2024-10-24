// Copyright Epic Games, Inc. All Rights Reserved.

#include "Weapon.h"
//#include "WeaponContextMenu.h"
#include "IAssetTools.h"
#include "AssetToolsModule.h"

#define LOCTEXT_NAMESPACE "FWeaponModule"

IMPLEMENT_MODULE(FWeaponModule, Weapon)

void FWeaponModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	IAssetTools& assetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	EAssetTypeCategories::Type cetegories = assetTools.RegisterAdvancedAssetCategory("WeaponAsset", FText::FromString("Weapon"));
	//ContextMenu = MakeShareable(new FWeaponContextMenu(categories));
	//assetTools.RegisterAssetTypeActions(ContextMenu.ToSharedRef());


}

void FWeaponModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	//if (ContextMenu.IsValid())
	//{
	//	ContextMenu.Reset();
	//}
}

#undef LOCTEXT_NAMESPACE
	
