// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

void UMyGameInstance::Init()
{
	FirstNumber = 0;
	SecondNumber = 0;
	ThirdNumber = 0;
}

TArray<int32> UMyGameInstance::GetServerNumber()
{
	TArray<int32> answer;
	UE_LOG(LogTemp, Warning, TEXT("server : %d %d %d"), FirstNumber, SecondNumber, ThirdNumber);
	if (FirstNumber && SecondNumber && ThirdNumber)
	{
		answer.Add(FirstNumber);
		answer.Add(SecondNumber);
		answer.Add(ThirdNumber);
	}
	return answer;
}
