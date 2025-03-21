#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RandomNumberLibrary.generated.h"

/// <summary>
/// 난수 생성 라이브러리
/// </summary>
UCLASS()
class SAMPLECHAT_API URandomNumberLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "RandomNumberLibrary")
	static TArray<int32> GenerateUniqueNumbers();
};
