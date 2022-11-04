// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mouse_collider.generated.h"

UCLASS()
class MYPROJECT_API AMouse_collider : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMouse_collider();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
UPROPERTY(VisibleAnywhere)
USceneComponent* Root;

UPROPERTY(VisibleAnywhere)
USkeletalMeshComponent* Mesh;

};
