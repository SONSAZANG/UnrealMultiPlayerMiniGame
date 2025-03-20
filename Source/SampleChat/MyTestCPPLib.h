#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyTestCPPLib.generated.h"

UCLASS()
class UMyTestCPPLib : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
    static int32 MakeServerNumber();

    UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
    static bool CheckPlayerInput(FString input);

    UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
    static TArray<int32> GetPlayerNumber(FString input);

    UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
    static FString CheckNumber(TArray<int32> server, TArray<int32> player, int32 outCount);
};