// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"


#include "Camera/CameraComponent.h"
#include "Components/ArrowComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Set up our springarm to hold our camera
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(FName("Camera Boom"));
	//Do not allow spring arm to rotate with character
	SpringArm->bUsePawnControlRotation = false;
	//Do not allow it to be affected by relative rotation of character
	//SpringArm->bAbsoluteRotation = true;
	SpringArm->SetUsingAbsoluteRotation(true);
	//Length of arm
	SpringArm->TargetArmLength = 700.f;
	//Attach to root
	SpringArm->SetupAttachment(RootComponent);

	//Set up the camera
	Camera = CreateDefaultSubobject<UCameraComponent>(FName("Camera"));
	//Give it a wider FOV
	Camera->FieldOfView = 110.f;
	//attach to SpringArm
	Camera->SetupAttachment(SpringArm);

	//Set up our forward direction
	TraceDirection = CreateDefaultSubobject<UArrowComponent>(FName("Trace Direction"));
	//attach to root
	TraceDirection->SetupAttachment(RootComponent);

	//set up basic network replication
	bReplicates = true;
	bAlwaysRelevant = true;
	//bReplicateMovement = true;
	this->ACharacter::SetReplicateMovement(true);
	//Set up character movement properties

	//rotate the character in the direction its moving
	GetCharacterMovement()->bOrientRotationToMovement = true;
	//don't rotate based on controller input
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	//Set up some movement properties for improving input feel
	//jump higher
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	//fall faster
	GetCharacterMovement()->GravityScale = 2.f;
	//Allow some control of character while airborne
	GetCharacterMovement()->AirControl = 0.8f;

	//Starts without a powerup selected
	//SelectedPowerupIndex = -1;

	//Initialize array
	//PowerUps = TArray<APowerup*>();
}

void ABaseCharacter::MoveForward(float amount)
{
	//add movement input in the direction the camera is facing
	if (Controller && amount) {
		AddMovementInput(SpringArm->GetForwardVector(), amount);
	}
}

void ABaseCharacter::MoveRight(float amount)
{
	//add input in the camera's right direction
	if (Controller && amount) {
		AddMovementInput(SpringArm->GetRightVector(), amount);
	}
}

void ABaseCharacter::RotateCamera(float amount)
{
	//add rotation on the spring arm's z axis
	if (Controller && amount) {
		FVector rot = SpringArm->GetComponentRotation().Euler();
		rot += FVector(0, 0, amount);
		SpringArm->SetWorldRotation(FQuat::MakeFromEuler(rot));
	}
}

void ABaseCharacter::ChangeCameraHeight(float amount)
{
	//add rotation on spring arm's y axis. Clamp between -45 and -5
	if (Controller && amount) {
		FVector rot = SpringArm->GetComponentRotation().Euler();

		float originalHeight = rot.Y;
		originalHeight += amount;
		originalHeight = FMath::Clamp(originalHeight, -45.f, -5.f);

		rot = FVector(0, originalHeight, rot.Z);
		SpringArm->SetWorldRotation(FQuat::MakeFromEuler(rot));
	}
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	//set the spring arm behind our character
	SpringArm->SetRelativeRotation(FQuat::MakeFromEuler(FVector(0, -25, 180)));
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("Jump", EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	//InputComponent->BindAction("UsePowerup", EInputEvent::IE_Pressed, this, &ABaseCharacter::UsePowerupStartClient);

	InputComponent->BindAxis("ChangeCameraHeight", this, &ABaseCharacter::ChangeCameraHeight);
	InputComponent->BindAxis("RotateCamera", this, &ABaseCharacter::RotateCamera);
	InputComponent->BindAxis("MoveForward", this, &ABaseCharacter::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &ABaseCharacter::MoveRight);
}

