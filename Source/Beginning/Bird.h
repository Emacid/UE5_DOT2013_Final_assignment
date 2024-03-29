// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bird.generated.h"

UCLASS()
class BEGINNING_API ABird : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABird();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// UProperty for speed
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bird Properties")
	float Speed = 100.0f; // Default speed

	// UProperty for other parameters if needed
	// ...

};

