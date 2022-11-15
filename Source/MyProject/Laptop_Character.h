// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Laptop_Character.generated.h"



UENUM(BlueprintType)
	enum class LaptopAttackMode : uint8
	{
		Attack UMETA(DisplayName="Attack"),
		Standby UMETA(DisplayName="Standby"),
		fly UMETA(DisplayName="fly")
	};

UCLASS()
class MYPROJECT_API ALaptop_Character : public ACharacter
{
	GENERATED_BODY()

  

public:
	// Sets default values for this character's properties
	ALaptop_Character();
    

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

   
    
    

	UFUNCTION(BlueprintPure)
	LaptopAttackMode IsAttack() const;

    UPROPERTY(EditAnywhere)
    LaptopAttackMode attackistrue = LaptopAttackMode::fly;

	

	

   };
