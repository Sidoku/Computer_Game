// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTasK_phoneAttack.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UBTTasK_phoneAttack : public UBTTaskNode
{
	GENERATED_BODY()
	public:
	UBTTasK_phoneAttack();

	protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
