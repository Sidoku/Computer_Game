// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_StandbyPhone.h"
#include "AIController.h"
#include "Phone_Character.h"

UBTTask_StandbyPhone::UBTTask_StandbyPhone()
{
    NodeName  = TEXT("PhoneStandby");
}

EBTNodeResult::Type UBTTask_StandbyPhone::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp,NodeMemory);
      
    if(OwnerComp.GetAIOwner() == nullptr)
    {
        return EBTNodeResult::Failed;
    }
      
   APhone_Character* Character = Cast<APhone_Character>(OwnerComp.GetAIOwner()->GetPawn());

   if(Character == nullptr)
   {
     return EBTNodeResult::Failed;
   }

   Character->attackMode = PhoneAttackMode::Standby;

  
   
   return EBTNodeResult::Succeeded;
}

