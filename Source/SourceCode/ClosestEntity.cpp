// Fill out your copyright notice in the Description page of Project Settings.


#include "ClosestEntity.h"

#include "Kismet/GameplayStatics.h"

void UClosestEntity::FindClosestEntity(TArray<AActor*> ActorsArray, FVector TargetLocation, float NearestZombieDistance, float& nearestDistance, AActor*& nearestActor) // defining function paramters
{

    AActor* nearestZombieActor = nullptr; // actor ref

    for (AActor* actor : ActorsArray) // for each loop for specified actor in blueprint library function
    {
        float localDistance = FVector::Dist(actor->GetActorLocation(), TargetLocation); // define TargetLocation as the actors location
        if (localDistance < NearestZombieDistance) // if closer than existing actor?
        {
            NearestZombieDistance = localDistance; // set new distance
            nearestZombieActor = actor; // set new actor
        }
    }

    // return these values into paramters after for each is completed
    nearestDistance = NearestZombieDistance; 
    nearestActor = nearestZombieActor;

   delete nearestZombieActor;

   nearestZombieActor = nullptr;
    

}