// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_WaitLaptop.h"
#include "AIController.h"
#include "Laptop_Character.h"

UBTTask_WaitLaptop::UBTTask_WaitLaptop()
{
    NodeName  = TEXT("WaitLaptop");
}

EBTNodeResult::Type UBTTask_WaitLaptop::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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


   
   return EBTNodeResult::Succeeded;
}