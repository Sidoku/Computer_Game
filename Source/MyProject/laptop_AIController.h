// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "laptop_AIController.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API Alaptop_AIController : public AAIController
{
	GENERATED_BODY()

    Alaptop_AIController(const FObjectInitializer& ObjectInitializer);

	protected:
	    virtual void BeginPlay();

		 
    public:	
	// Called every frame
	    virtual void Tick(float DeltaTime) override; 


	private:
	 UPROPERTY(EditAnywhere)
	 class UBehaviorTree* AIBehavior;

	 UPROPERTY(EditAnywhere)
	 FVector AILocation = FVector(1870.000000,60.000000,-3.327183);
};
