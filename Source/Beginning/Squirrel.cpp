// Fill out your copyright notice in the Description page of Project Settings.

#include "Squirrel.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
ASquirrel::ASquirrel()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ASquirrel::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASquirrel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// UFunction implementation for running to the left
void ASquirrel::RunLeft()
{
	// Move the squirrel smoothly to the left on the x-axis
	FVector NewLocation = GetActorLocation();
	NewLocation.X -= RunSpeed * UGameplayStatics::GetWorldDeltaSeconds(this);
	SetActorLocation(NewLocation);
}
