// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "Pickup_Coin.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMERGAME_API APickup_Coin : public APickup
{
	GENERATED_BODY()

	public:
	APickup_Coin();
	//override the CollectPickup_Implementation that we defined in our parent Pickup class
	virtual void CollectPickup_Implementation(ABaseCharacter *Character) override;
};
