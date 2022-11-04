// Fill out your copyright notice in the Description page of Project Settings.


#include "Mouse_collider.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AMouse_collider::AMouse_collider()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);

}

// Called when the game starts or when spawned
void AMouse_collider::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMouse_collider::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

