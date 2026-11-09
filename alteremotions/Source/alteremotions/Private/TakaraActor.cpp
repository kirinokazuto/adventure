// Fill out your copyright notice in the Description page of Project Settings.


#include "TakaraActor.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "alaterCharacter.h"

// Sets default values
ATakaraActor::ATakaraActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	RootComponent = Sphere;

	Sphere->SetSphereRadius(100.0f);

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ATakaraActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATakaraActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATakaraActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AalaterCharacter* Player =
		Cast<AalaterCharacter>(OtherActor);

	if (Player)
	{
		Player->bHasTakara = true;

		GEngine->AddOnScreenDebugMessage(
			-1,
			3.f,
			FColor::Green,
			TEXT("Takara Get!")
		);

		Destroy();
	}
}