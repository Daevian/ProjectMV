// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProjectMVGameMode.h"
#include "ProjectMVCharacter.h"

AProjectMVGameMode::AProjectMVGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AProjectMVCharacter::StaticClass();	
}
