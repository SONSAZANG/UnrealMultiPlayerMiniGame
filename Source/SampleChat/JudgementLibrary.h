// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JudgementLibrary.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API UJudgementLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "JudgementLibrary")
	static FString CheckResult(TArray<int32> ServerNums, TArray<int32> PlayerNums);
};
