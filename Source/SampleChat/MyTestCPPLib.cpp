#include "MyTestCPPLib.h"
#include "MyGameInstance.h"

int UMyTestCPPLib::MakeServerNumber()
{
    int number = FMath::RandRange(1, 9);
    return number;
}

bool UMyTestCPPLib::CheckPlayerInput(FString input)
{
    if (input.IsEmpty()) return false;
    
    if (input[0] == '/') 
    {    
        UE_LOG(LogTemp, Display, TEXT("true!! : %s"), *input);            
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("false!! : %s"), *input);    
    }
    
    return input[0] == '/';
}    

void UMyTestCPPLib::CheckNumber(TArray<int32> server, TArray<int32> player)
{
    for (int i = 0; i < 3; i++)
    {
        UE_LOG(LogTemp, Display, TEXT("Server : %d"), server[i]);
        UE_LOG(LogTemp, Display, TEXT("Player : %d"), server[i]);
    }
}
