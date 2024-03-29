// Fill out your copyright notice in the Description page of Project Settings.

#include "Bird.h"

// Sets default values
ABird::ABird()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABird::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move the bird smoothly to the left on the x-axis
	FVector NewLocation = GetActorLocation();
	NewLocation.X -= Speed * DeltaTime;
	SetActorLocation(NewLocation);
}
