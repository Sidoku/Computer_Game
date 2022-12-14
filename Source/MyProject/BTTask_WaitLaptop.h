// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_Wait.h"
#include "BTTask_WaitLaptop.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UBTTask_WaitLaptop : public UBTTask_Wait
{
	GENERATED_BODY()
	public:
	UBTTask_WaitLaptop();

	protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
