// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TeamEnumeration.h"

#include "Receptacle.generated.h"


UCLASS()
class VIRTUALDUEL_API AReceptacle : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Team Settings")
	ETeam colorToReceive;

	// Sets default values for this actor's properties
	AReceptacle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
