#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyTestCPPLib.generated.h"

UCLASS()
class UMyTestCPPLib : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    // 서버의 랜덤 숫자 생성 후 게임 인스턴스에 저장
    UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
    static int MakeServerNumber();

    UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
    static void CheckNumber(TArray<int32> server, TArray<int32> player);
    
    // 플레이어가 체팅 입력 후 보내면 입력된 텍스트 확인해서 확인 로직
    // 입력된 텍스트는 " / "로 시작되어야 함
};