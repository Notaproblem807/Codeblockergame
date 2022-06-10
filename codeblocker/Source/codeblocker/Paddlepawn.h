// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Paddlepawn.generated.h"

UCLASS()
class CODEBLOCKER_API APaddlepawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddlepawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//scenecomponent
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "scenecomp")
	class USceneComponent* Scene;

	//paper sprite
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Papersprite")
	class UPaperSpriteComponent* Papersprite;

};
