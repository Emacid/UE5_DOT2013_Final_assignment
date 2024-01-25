// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Squirrel.generated.h"

UCLASS()
class BEGINNING_API ASquirrel : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASquirrel();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// UProperty for speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Squirrel Properties")
	float RunSpeed = 100.0f; // Default speed

	// UFunction for running to the left
	UFUNCTION(BlueprintCallable, Category = "Squirrel Functions")
	void RunLeft();
};
