#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

UCLASS()
class SAMPLECHAT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server Number")
	int32 FirstNumber;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server Number")
	int32 SecondNumber;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Server Number")
	int32 ThirdNumber;

	virtual void Init() override;

	UFUNCTION(BlueprintCallable) 
	TArray<int32> GetServerNumber();
};
