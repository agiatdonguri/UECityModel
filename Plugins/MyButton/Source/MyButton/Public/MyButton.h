// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FMyButtonModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command. */
	void PluginButtonClicked();
	
private:

	void RegisterMenus();
	
	void SpawnStaticMeshActor(const FString& AssetPath, const FVector& Location, const FRotator& Rotation, const FVector& Scale);
	void SpawnStaticMeshActor(UStaticMesh* StaticMesh, const FVector& Location, const FRotator& Rotation, const FVector& Scale);

	void SpawnTreeActors(const FString& TreePath);

private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
