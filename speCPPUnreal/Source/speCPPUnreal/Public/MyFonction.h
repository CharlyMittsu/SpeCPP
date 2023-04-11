// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyFonction.generated.h"

/**
 * 
 */
UCLASS()
class SPECPPUNREAL_API UMyFonction : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public: 
	UFUNCTION(BlueprintCallable)
	static void maFonction(FString t);
};
