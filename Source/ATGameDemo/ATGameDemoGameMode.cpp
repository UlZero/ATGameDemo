// Copyright Epic Games, Inc. All Rights Reserved.

#include "ATGameDemoGameMode.h"
#include "ATGameDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AATGameDemoGameMode::AATGameDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
