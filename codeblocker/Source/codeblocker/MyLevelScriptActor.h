// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "MyLevelScriptActor.generated.h"

/**
 * 
 */
UCLASS()
class CODEBLOCKER_API AMyLevelScriptActor : public ALevelScriptActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

protected:
	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void DoSomething();

	
};
