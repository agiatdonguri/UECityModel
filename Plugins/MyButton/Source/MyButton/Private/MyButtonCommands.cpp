// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyButtonCommands.h"

#define LOCTEXT_NAMESPACE "FMyButtonModule"

void FMyButtonCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "MyButton", "Execute MyButton action", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
