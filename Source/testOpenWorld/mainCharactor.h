// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "mainCharactor.generated.h"

UCLASS()
class TESTOPENWORLD_API AmainCharactor : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AmainCharactor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// Handles input for moving forward and backward.

	UFUNCTION()
		void StartJump();

	// Clears jump flag when key is released (�L�[������̃W�����v�t���O���N���A)
	UFUNCTION()
		void StopJump();


	UFUNCTION()
		void MoveForward(float Value);

	// Handles input for moving right and left.
	UFUNCTION()
		void MoveRight(float Value);
};
