#include "MyTestCPPLib.h"
#include "MyGameInstance.h"

int UMyTestCPPLib::MakeServerNumber()
{
    int number = FMath::RandRange(1, 9);
    return number;
}

void UMyTestCPPLib::CheckNumber(TArray<int32> server, TArray<int32> player)
{
    for (int i = 0; i < 3; i++)
    {
        UE_LOG(LogTemp, Display, TEXT("Server : %d"), server[i]);
        UE_LOG(LogTemp, Display, TEXT("Player : %d"), server[i]);
    }
}
