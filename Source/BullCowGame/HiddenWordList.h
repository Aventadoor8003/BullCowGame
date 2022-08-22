// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"

/**
 * 
 */
class BULLCOWGAME_API HiddenWordList
{
public:
	HiddenWordList();
	~HiddenWordList();

	const TArray<FString> Words = { 
		TEXT("able"),
		TEXT("cakes"),
		TEXT("water"),
		TEXT("plums"),
		TEXT("kings"),
		TEXT("knife"),
		TEXT("formula"),
		TEXT("biology"),
		TEXT("sophisticated"),
		TEXT("fabulous"),
		TEXT("nice"),
		TEXT("word"),
		TEXT("list"),
		TEXT("code"),
		TEXT("int"),
		TEXT("there")
	};

};
