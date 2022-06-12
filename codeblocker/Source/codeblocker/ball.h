// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ball.generated.h"

UCLASS()
class CODEBLOCKER_API Aball : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Aball();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//paper sprite
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ballsprite")
	class UPaperSpriteComponent* ballsprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ballsprite")
	class USphereComponent* Sphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ballsprite")
	class UProjectileMovementComponent* projectile;

};
