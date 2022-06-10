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
	UFUNCTION(BlueprintCallable, Category = LevelBlueprint)
	void DoSomething();

	
};