// Fill out your copyright notice in the Description page of Project Settings.


#include "Laptop_Character.h"

// Sets default values
ALaptop_Character::ALaptop_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
}

// Called when the game starts or when spawned
void ALaptop_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALaptop_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALaptop_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

LaptopAttackMode ALaptop_Character::IsAttack() const
{
	
	return ALaptop_Character::attackistrue;
}

