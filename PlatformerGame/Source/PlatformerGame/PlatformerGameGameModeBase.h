// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlatformerGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PLATFORMERGAME_API APlatformerGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	public:
	APlatformerGameGameModeBase();

	virtual void Logout(AController *exiting) override;
	virtual void Tick(float DeltaTime) override;

	//for spawning appropriate character
	virtual UClass *GetDefaultPawnClassForController_Implementation(AController *InController) override;
	
	private:

	float TimeSinceStart;
};
