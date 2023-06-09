// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "speCPPUnrealHUD.generated.h"

UCLASS()
class AspeCPPUnrealHUD : public AHUD
{
	GENERATED_BODY()

public:
	AspeCPPUnrealHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

