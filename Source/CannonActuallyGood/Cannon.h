// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Cannon.generated.h"

UCLASS()
class CANNONACTUALLYGOOD_API ACannon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACannon();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Whether or not player is in steering wheel trigger box
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Cannon)
		bool isFKeyPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CannonTrigger)
		bool isPlayerInTrigger;
	
};
