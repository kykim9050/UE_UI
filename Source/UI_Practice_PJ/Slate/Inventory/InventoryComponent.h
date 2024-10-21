// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

UCLASS(Blueprintable, BlueprintType)
class AItem : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Item")
	FSlateBrush ItemIcon;
};

USTRUCT(BlueprintType)
struct FInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	TSubclassOf<class AItem> ItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 Count;

	FInventoryItem()
		:ItemClass(nullptr)
		, Count(-1)
	{

	}

	FInventoryItem(TSubclassOf<class AItem> aItemClass, int32 aCount)
		:ItemClass(aItemClass)
		,Count(aCount)
	{

	}
};

UCLASS(Blueprintable, BlueprintType, meta=(BlueprintSpawnableComponent))
class UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 InventorySizeX = 3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 InventorySizeY = 3;

	TArray<struct FInventoryItem>& GetItems()
	{
		return Items;
	}

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	TArray<struct FInventoryItem> Items;
};
