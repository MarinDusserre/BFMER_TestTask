// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestTaskGameMode.h"
#include "TestTaskPlayerController.h"
#include "TestTaskCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestTaskGameMode::ATestTaskGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATestTaskPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}