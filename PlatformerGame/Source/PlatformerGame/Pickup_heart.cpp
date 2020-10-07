// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup_heart.h"

#include "BaseCharacter.h"

APickup_heart::APickup_heart()
{
}

void APickup_heart::CollectPickup_Implementation(ABaseCharacter* Character)
{
    if (GetLocalRole() != ROLE_Authority) return;

    if (Character) {
        //Collect Heart
        Character->CollectHeart();

        bIsPickedUp = true;

        this->Destroy();
    }
}
