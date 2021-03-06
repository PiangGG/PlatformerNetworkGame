// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "PlatformerGameState.h"
#include "GameFramework/PlayerState.h"
#include "PlatformerPlayerState.generated.h"

class APowerup;
/**
 * 
 */
UCLASS()
class PLATFORMERGAME_API APlatformerPlayerState : public APlayerState
{
	GENERATED_BODY()
	public:
	APlatformerPlayerState();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Replicated, Category = "Player State")
	APowerup *SelectedPowerup;
	protected:
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Platformer Player State")
	int NumberOfCoinsCollected;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Platformer Player State")
	int CurrentHealth;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Platformer Player State")
	int NumberOfDeaths;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Platformer Player State")
	int MaxHealth;

	public:
	UFUNCTION(BlueprintCallable, Category = "Player State")
 	void CollectCoin();
	
	UFUNCTION(BlueprintCallable, Category = "Player State")
	void CollectHeart();

	UFUNCTION(BlueprintCallable, Category = "Player State")
    void ReceiveDamage(int amount);

	//For keeping track of what UI we're displaying locally
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Platformer Player State")
	EMatchState CurrentLocalMatchState;

	//boolean for keeping track of ready state
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Platformer Player State")
	bool bIsReady;

	//boolean for keeping track of whether a player wants to specate
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Platformer Player State")
	bool bSpectator;

	//int for keeping track of selected character
	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadOnly, Category = "Platformer Player State")
	int SelectedCharacterIndex;

	//we'll also need server functions for changing these
	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Platformer Player State")
        void ToggleReady();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Platformer Player State")
        void ToggleSpectator();

	UFUNCTION(Server, Reliable, WithValidation, BlueprintCallable, Category = "Platformer Player State")
        void SelectCharacter(int index);
};
