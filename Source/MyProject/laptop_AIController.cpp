// Fill out your copyright notice in the Description page of Project Settings.


#include "laptop_AIController.h"
#include "BehaviorTree/BlackboardComponent.h"


void Alaptop_AIController::BeginPlay()
{
    Super::BeginPlay();

    if(AIBehavior != nullptr)
    {
    RunBehaviorTree(AIBehavior);
    GetBlackboardComponent()->SetValueAsVector(TEXT("AIStartLocation"),AILocation); 
   
    }
}


void Alaptop_AIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

