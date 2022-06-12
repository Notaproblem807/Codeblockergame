// Fill out your copyright notice in the Description page of Project Settings.


#include "ball.h"
#include "PaperSpriteComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
Aball::Aball()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = Sphere;
	  
	ballsprite= CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Papersprite"));
	ballsprite->SetupAttachment(RootComponent);

	projectile = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("Projectile"));
	projectile->SetUpdatedComponent(Sphere);
}

// Called when the game starts or when spawned
void Aball::BeginPlay()
{
	Super::BeginPlay();

	
	
}

// Called every frame
void Aball::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

