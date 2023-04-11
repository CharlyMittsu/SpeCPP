// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFonction.h"
void UMyFonction::maFonction(FString t) 
{
	
	GEngine->AddOnScreenDebugMessage(FMath::Rand(), 10, FColor::Red, t); //Print to Screen
	UE_LOG(LogTemp, Warning, TEXT("%s"), *t); //PrintToLog
}

