#include "PlayerInputLibrary.h"

bool UPlayerInputLibrary::IsValidInput(FString InputText)
{
	// '/123' 이 형태면 4자리수가 아니면 잘못된 응답
	if (InputText.Len() != 4) return false;

	// '/'다음 문자가 숫자가 아닌 경우 잘못된 응답
	for (int i = 1; i <= 3; i++)
	{
		if (!FChar::IsDigit(InputText[i])) return false;
	}

	return true;
}

bool UPlayerInputLibrary::IsValidSlash(FString InputText)
{
	// '/' 이 문자로 시작하지 않으면 잘못된 응답
	return InputText[0] == '/';
}

TArray<int32> UPlayerInputLibrary::ParseInput(FString InputText)
{
	TArray<int32> Answer;

	for (int i = 1; i <= 3; i++)
	{
		Answer.Add(InputText[i] - '0');
	}

	return Answer;
}