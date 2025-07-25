#pragma once

#include "CoreMinimal.h"
#include "XGBaseStruct.generated.h"

USTRUCT(BlueprintType)
struct FXGBaseStruct
{
	GENERATED_USTRUCT_BODY();

public:
	UPROPERTY()
	FString StructName = TEXT("");
};