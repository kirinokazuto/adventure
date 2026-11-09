// Fill out your copyright notice in the Description page of Project Settings.


#include "TakaraActor2.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "alaterCharacter.h"

// Sets default values
ATakaraActor2::ATakaraActor2()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATakaraActor2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATakaraActor2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATakaraActor2::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	AalaterCharacter* Player =
		Cast<AalaterCharacter>(OtherActor);

	if (Player)
	{
		Player->bHasAttackTakara = true;

		GEngine->AddOnScreenDebugMessage(
			-1,
			3.f,
			FColor::Red,
			TEXT("Attack Takara Get!")
		);

		Destroy();
	}
}