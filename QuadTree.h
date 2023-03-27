// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*=================================================
* FileName: QuadTree.h
*
* Created by: Galidar
* Project name: Oceanology
* Created on: 2020/31/03
*
* =================================================*/
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/Object.h"
#include "UObject/GCObject.h"
#include "Tickable.h"
#include "GameFramework/Actor.h"
#include "QuadTree.generated.h"

class UHierarchicalInstancedStaticMeshComponent;

UCLASS(Blueprintable, hidecategories = (Replication, Input, LOD, Cooking, Rendering, Collision))
class OCEANOLOGY_PLUGIN_API AQuadTree : public AActor
{
public:
	GENERATED_BODY()
	
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta = (Category = "Default"))
		USceneComponent* DefaultSceneRoot;

	UFUNCTION(BlueprintNativeEvent, CallInEditor, BlueprintCallable, Category = "Tick")
		void EditorTick(float DeltaSeconds);

	virtual bool ShouldTickIfViewportsOnly() const override;
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable, category = "Default")
		void SetEditorTickEnabled(bool bEnabled) { EditorTickIsEnabled = bEnabled; }

	UPROPERTY(Transient)
		bool EditorTickIsEnabled = false;

	UFUNCTION(BlueprintCallable, category = "QuadTree")
		void Procedural(UHierarchicalInstancedStaticMeshComponent* HISMC, float GridSize, int GridTiles, float CellSize = 250.f);

	AQuadTree(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());


};
