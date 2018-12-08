// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "TeamEnumeration.h"

#include "StealableItem.generated.h"

/**
 * 
 */
UCLASS()
class VIRTUALDUEL_API AStealableItem : public AStaticMeshActor
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Team Settings")
		ETeam teamColor;

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool grababble;


		void BeginPlay() override;
};
