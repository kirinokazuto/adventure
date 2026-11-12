// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TakaraActor2.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class ALTEREMOTIONS_API ATakaraActor2 : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Sphere")
	USphereComponent* Sphere;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* Mesh;

	// Sets default values for this actor's properties
	ATakaraActor2();

	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	
};
