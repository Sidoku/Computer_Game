// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackColliders.h"
#include "Mouse_collider.h"

// Sets default values for this component's properties
UAttackColliders::UAttackColliders()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAttackColliders::BeginPlay()
{
	Super::BeginPlay();

	// ...
    mouseCollider = GetWorld()->SpawnActor<AMouse_collider>(mouseClass);
	mouseCollider->AttachToComponent(Mesh,FAttachmentTransformRules::KeepRelativeTransform,TEXT("KeyboardSocket"));
	mouseCollider->SetOwner(computer);
	
}


// Called every frame
void UAttackColliders::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

