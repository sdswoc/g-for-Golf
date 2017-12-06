// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "g_for_golfGameMode.h"
#include "g_for_golfBall.h"

Ag_for_golfGameMode::Ag_for_golfGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = Ag_for_golfBall::StaticClass();
}
