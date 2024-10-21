// Fill out your copyright notice in the Description page of Project Settings.


#include "SlateCharacter.h"
#include "Slate/Inventory/InventoryComponent.h"

// Sets default values
ASlateCharacter::ASlateCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("InventoryComponent"));
}

// Called when the game starts or when spawned
void ASlateCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASlateCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASlateCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

