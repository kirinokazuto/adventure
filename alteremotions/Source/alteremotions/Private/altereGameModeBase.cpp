// Fill out your copyright notice in the Description page of Project Settings.


#include "altereGameModeBase.h"
#include "alaterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AaltereGameModeBase::AaltereGameModeBase()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}