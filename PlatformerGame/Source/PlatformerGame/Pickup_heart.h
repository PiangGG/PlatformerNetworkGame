// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "Pickup_heart.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMERGAME_API APickup_heart : public APickup
{
	GENERATED_BODY()
	public:
	APickup_heart();
	
	virtual void CollectPickup_Implementation(ABaseCharacter *Character) override;
};
