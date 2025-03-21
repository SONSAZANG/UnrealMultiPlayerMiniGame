#include "JudgementLibrary.h"

FString UJudgementLibrary::CheckResult(TArray<int32> ServerNums, TArray<int32> PlayerNums)
{
	FString Answer;
	int32 StrikeCount = 0;
	int32 BallCount = 0;
	
	// 검사 로직을 통해서 Strike와 Ball 체크
	for (int i = 0; i < 3; i++)
	{
		if (ServerNums[i] == PlayerNums[i]) StrikeCount++;

		for (int j = 0; j < 3; j++)
		{
			if (ServerNums[i] == PlayerNums[j] && i != j)
			{
				BallCount++;
			}
		}
	}

	FString PlayerNumberText = FString::Printf(TEXT("%d%d%d"), PlayerNums[0], PlayerNums[1], PlayerNums[2]);

	// Strike가 3이면 게임 승리
	if (StrikeCount == 3)
	{
		Answer = FString::Printf(TEXT("%s => 3S0B => Win"), *PlayerNumberText);
	}
	// Strike와 Ball 둘다 0이면 아웃
	else if (StrikeCount == 0 && BallCount == 0) 
	{
		Answer = FString::Printf(TEXT("%s => Out"), *PlayerNumberText);
	}
	// 나머지 조건은 정상 출력
	else 
	{
		Answer = FString::Printf(TEXT("%s => %dS%dB"), *PlayerNumberText, StrikeCount, BallCount);
	}

	return Answer;
}
