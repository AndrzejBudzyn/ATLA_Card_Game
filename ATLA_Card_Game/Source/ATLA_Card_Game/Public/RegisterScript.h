#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Http.h"
#include "RegisterScript.generated.h"

UCLASS()
class ATLA_CARD_GAME_API URegisterScript : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Registration")
    static bool Register(const FString& Name, const FString& Email, const FString& Password);
};