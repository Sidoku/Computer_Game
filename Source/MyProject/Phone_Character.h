// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Phone_Character.generated.h"


UENUM(BlueprintType)
	enum class PhoneAttackMode : uint8
	{
		Attack UMETA(DisplayName="Attack"),
		Standby UMETA(DisplayName="Standby"),
		Jump UMETA(DisplayName="Jump")
	};

UCLASS()
class MYPROJECT_API APhone_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APhone_Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintPure)
	PhoneAttackMode IsAttack() const;

    UPROPERTY(EditAnywhere)
    PhoneAttackMode attackMode = PhoneAttackMode::Standby;

};
