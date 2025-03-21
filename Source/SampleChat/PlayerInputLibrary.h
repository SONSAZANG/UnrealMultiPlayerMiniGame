#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlayerInputLibrary.generated.h"

UCLASS()
class SAMPLECHAT_API UPlayerInputLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "PlayerInputLibrary")
	static bool IsValidInput(FString InputText);
	UFUNCTION(BlueprintCallable, Category = "PlayerInputLibrary")
	static bool IsValidSlash(FString InputText);
	UFUNCTION(BlueprintCallable, Category = "PlayerInputLibrary")
	static TArray<int32> ParseInput(FString InputText);
};
