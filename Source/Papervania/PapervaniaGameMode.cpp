// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "PapervaniaGameMode.h"
#include "PapervaniaCharacter.h"

APapervaniaGameMode::APapervaniaGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = APapervaniaCharacter::StaticClass();	
}
