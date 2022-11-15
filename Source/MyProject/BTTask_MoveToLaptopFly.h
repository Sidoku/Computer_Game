// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BTTask_MoveToLaptopFly.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UBTTask_MoveToLaptopFly : public UBTTask_MoveTo
{
	GENERATED_BODY()
	public:
	UBTTask_MoveToLaptopFly();

	protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
