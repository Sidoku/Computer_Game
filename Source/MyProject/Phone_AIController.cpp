// Fill out your copyright notice in the Description page of Project Settings.


#include "Phone_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

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