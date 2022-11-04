// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "testOpenWorldGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class TESTOPENWORLD_API AtestOpenWorldGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
		virtual void StartPlay() override;
};
