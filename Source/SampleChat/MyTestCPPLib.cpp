#include "MyTestCPPLib.h"
#include "MyGameInstance.h"

int32 UMyTestCPPLib::MakeServerNumber()
{
    int32 number = FMath::RandRange(1, 9);
    return number;
}

bool UMyTestCPPLib::CheckPlayerInput(FString input)
{
    if (input.IsEmpty()) return false;
    
    if (input[0] == '/') 
    {    
        if (input.Len() > 4) return false;
        return true;
    }
    else
    {
        return false;    
    }
}

TArray<int32> UMyTestCPPLib::GetPlayerNumber(FString input)
{
    TArray<int32> playerNumber;

    if (input[0] == '/')
    {
        for (int i = 1; i <= 3; i++)
        {
            playerNumber.Add(input[i] - '0');
        }
    }
    return playerNumber;
}

FString UMyTestCPPLib::CheckNumber(TArray<int32> server, TArray<int32> player, int32& outCount)
{
    int sCount = 0;
    int bCount = 0;
    FString answer;
    FString playerNumber;

    for (int i = 0; i < 3; i++)
    {
        if (server[i] == player[i])
        {
            sCount++;
        }

        for (int j = 0; j < 3; j++)
        {
            if (server[i] == player[j] && i != j)
            {
                bCount++;
            }
        }
    }

    playerNumber = FString::Printf(TEXT("%d%d%d"), player[0], player[1], player[2]);

    if (sCount == 3)
    {
        answer = FString::Printf(TEXT("%s => 3S0B => Win"), *playerNumber);
    }
    else
    {
        outCount++;
        UE_LOG(LogTemp, Warning, TEXT("OutCount %d"), outCount);
        answer = FString::Printf(TEXT("%s => %dS%dB"), *playerNumber, sCount, bCount);
    }
    return answer;
}
