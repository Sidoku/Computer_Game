// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Mouse_collider.h"
#include "AttackColliders.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UAttackColliders : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAttackColliders();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:


    UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AMouse_collider> mouseClass;


    UPROPERTY()
	AMouse_collider* mouseCollider;	

	

	UPROPERTY(EditAnywhere)
	USceneComponent* Mesh;

	UPROPERTY(EditAnywhere)
	AActor* computer;

		
};
