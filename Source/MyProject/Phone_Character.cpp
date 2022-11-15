// Fill out your copyright notice in the Description page of Project Settings.


#include "Phone_Character.h"

// Sets default values
APhone_Character::APhone_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APhone_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APhone_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APhone_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

PhoneAttackMode APhone_Character::IsAttack() const
{
	
	return APhone_Character::attackMode;
}

