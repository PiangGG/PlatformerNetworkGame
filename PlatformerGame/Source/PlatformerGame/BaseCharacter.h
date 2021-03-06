// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class APowerup;
UCLASS()
class PLATFORMERGAME_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

	/* GAME ELEMENTS */
	//Array for holding powerups
	TArray<APowerup *> PowerUps;

	UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite, Category = "Base Character")
	bool bIsFiring;
	/* COMPONENTS|组件 */
	//Spring Arm for holding camera 摄像机臂组件
	UPROPERTY(EditDefaultsOnly, Category = "Base Character")
	USpringArmComponent* SpringArm;

	//Camera Component  摄像机组件
	UPROPERTY(EditDefaultsOnly, Category = "Base Character")
	UCameraComponent *Camera;

	//Arrow for determining forward direction 箭头方向组件
	UPROPERTY(EditDefaultsOnly, Category = "Base Character")
	UArrowComponent *TraceDirection;

	/* MOVEMENT/CAMERA INPUT FUNCTIONS|控制移动的函数 */

	void MoveForward(float amount);

	void MoveRight(float amount);

	void RotateCamera(float amount);

	void ChangeCameraHeight(float amount);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/* USE POWERUP FUNCTIONS */
	UFUNCTION(BlueprintCallable, Category = "Base Character")
        void UsePowerupStartClient();

	UFUNCTION(BlueprintCallable, Server, WithValidation, Reliable, Category = "Base Character")
        void UsePowerupStartServer();
	
	UFUNCTION(BlueprintCallable, Server, WithValidation, Reliable, Category = "Base Character")
        void PowerupUsed();
	
	UFUNCTION(BlueprintCallable, Category = "Base Character")
	void CollectCoin();
	
	UFUNCTION(BlueprintCallable, Category = "Base Character")
	void CollectHeart();
	
	UFUNCTION(BlueprintCallable, Category = "Base Character")
    void CollectPowerup(APowerup *Powerup);

	//Function for cycling between powerups
	UFUNCTION(BlueprintCallable, Category = "Base Character")
    void NextPowerup();


	//DAMAGE FUNCTION
	UFUNCTION(BlueprintCallable, Category = "Base Character")
    void ReceiveDamage(int amount);
	
	private:
	int SelectedPowerupIndex;
};
