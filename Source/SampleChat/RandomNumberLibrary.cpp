#include "RandomNumberLibrary.h"

TArray<int32> URandomNumberLibrary::GenerateUniqueNumbers()
{
	TArray<int32> answer;

	while(answer.Num() < 3) 
	{
		int32 randInt = FMath::RandRange(1, 9);
		if (!answer.Contains(randInt)) answer.Add(randInt);
	}
	
	UE_LOG(LogTemp, Warning, TEXT("GenerateUniqueNumbers() : %d%d%d"), answer[0], answer[1], answer[2]);

	return answer;
}
