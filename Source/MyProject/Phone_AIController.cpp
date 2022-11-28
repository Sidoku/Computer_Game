// Fill out your copyright notice in the Description page of Project Settings.


#include "Phone_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Navigation/CrowdFollowingComponent.h"

APhone_AIController::APhone_AIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
   
}

void APhone_AIController::BeginPlay()
{
    Super::BeginPlay();

    if(AIBehavior != nullptr)
    {
        RunBehaviorTree(AIBehavior);
        GetBlackboardComponent()->SetValueAsVector(TEXT("AIStartLocation"), AILocation);

    }
}

void APhone_AIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}