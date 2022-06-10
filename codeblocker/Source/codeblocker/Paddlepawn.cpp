// Fill out your copyright notice in the Description page of Project Settings.


#include "Paddlepawn.h"
#include "PaperSpriteComponent.h"



// Sets default values
APaddlepawn::APaddlepawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	RootComponent = Scene;


	Papersprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Papersprite"));
	Papersprite->SetupAttachment(RootComponent);

	speed = 100.f;

}

// Called when the game starts or when spawned
void APaddlepawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaddlepawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APaddlepawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAxis(TEXT("Moveright"), this, &APaddlepawn::Moveright);
	PlayerInputComponent->BindAxis(TEXT("Moveleft"), this, &APaddlepawn::Moveleft);

}

void APaddlepawn::Moveright(float axis)
{
	locationofplayer = FVector(speed * axis, 0.f, 0.f);
	Papersprite->AddWorldOffset(locationofplayer);
}

void APaddlepawn::Moveleft(float axis)
{
	locationofplayer = FVector(speed * axis, 0.f, 0.f);
	Papersprite->AddWorldOffset(locationofplayer);
}

