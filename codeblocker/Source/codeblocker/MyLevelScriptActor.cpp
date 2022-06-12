// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLevelScriptActor.h"
#include "Kismet/GameplayStatics.h"
#include "Paddlepawn.h"
#include "Engine/World.h"



void AMyLevelScriptActor::BeginPlay() {
	Super::BeginPlay();
	

}

void AMyLevelScriptActor::DoSomething()
{
	GLog->Log("Does something");
}

