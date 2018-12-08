// Fill out your copyright notice in the Description page of Project Settings.

#include "Receptacle.h"


// Sets default values
AReceptacle::AReceptacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AReceptacle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AReceptacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

