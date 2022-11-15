// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_StandByLaptop.h"
#include "AIController.h"
#include "Laptop_Character.h"

UBTTask_StandByLaptop::UBTTask_StandByLaptop()
{
    NodeName  = TEXT("LaptopStandby");
}

EBTNodeResult::Type UBTTask_StandByLaptop::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    Super::ExecuteTask(OwnerComp,NodeMemory);
      
    if(OwnerComp.GetAIOwner() == nullptr)
    {
        return EBTNodeResult::Failed;
    }
      
   ALaptop_Character* Character = Cast<ALaptop_Character>(OwnerComp.GetAIOwner()->GetPawn());

   if(Character == nullptr)
   {
     return EBTNodeResult::Failed;
   }

   Character->attackistrue = LaptopAttackMode::Standby;

  
   
   return EBTNodeResult::Succeeded;
}
