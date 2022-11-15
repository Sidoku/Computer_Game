// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTasK_phoneAttack.h"
#include "AIController.h"
#include "Phone_Character.h"

UBTTasK_phoneAttack::UBTTasK_phoneAttack()
{
    NodeName  = TEXT("PhoneAttack");
}

EBTNodeResult::Type UBTTasK_phoneAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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

   Character->attackMode = PhoneAttackMode::Attack;

  
   
   return EBTNodeResult::Succeeded;
}
