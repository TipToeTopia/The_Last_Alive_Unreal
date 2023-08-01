// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClosestEntity.generated.h"

/**
 * 
 */
UCLASS()
class TLAM41_API UClosestEntity : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Sorting Functions")
		static void FindClosestEntity(TArray<AActor*> ActorsArray, FVector TargetLocation, float NearestZombieDistance, float& nearestDistance, AActor*& nearestActor);
	
};
