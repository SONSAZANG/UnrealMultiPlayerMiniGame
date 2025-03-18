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
    static int MakeServerNumber();

    UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
    static bool CheckPlayerInput(FString input);

    UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
    static void CheckNumber(TArray<int32> server, TArray<int32> player);
};