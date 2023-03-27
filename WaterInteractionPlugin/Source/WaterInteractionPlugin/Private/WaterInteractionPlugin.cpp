// Copyright Epic Games, Inc. All Rights Reserved.

#include "WaterInteractionPlugin.h"
#include "QuadTree.h"

#define LOCTEXT_NAMESPACE "FWaterInteractionPluginModule"

void FWaterInteractionPluginModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	const FString& HideCategoresMetaData = AQuadTree::StaticClass()->GetMetaData("hidecategories");
	FString ModifiedMetaData = HideCategoresMetaData;
	ModifiedMetaData = ModifiedMetaData.Replace(TEXT("Actor "), TEXT(""));
	AQuadTree::StaticClass()->SetMetaData(TEXT("hidecategories"), *ModifiedMetaData);
}

void FWaterInteractionPluginModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FWaterInteractionPluginModule, WaterInteractionPlugin)