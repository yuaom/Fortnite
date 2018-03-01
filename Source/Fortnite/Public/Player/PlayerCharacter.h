// Made by Alex Romano - Visit my repository for the full code, and more, at: https://github.com/GameCatalyst/Fortnite

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;

UCLASS()
class FORTNITE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Spring Arm that allows for an over-the-shoulder view
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* CameraSpringArm;

	// Camera that uses an over-the-shoulder view
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* FollowCamera;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called for forwards and backwards movement
	void MoveForward(float Scale);

	// Called for right and left movement
	void MoveRight(float Scale);

	bool bIsPlayerCrouched;

	// Called for crouching and uncrouching the player
	void ToggleCrouch();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
};
