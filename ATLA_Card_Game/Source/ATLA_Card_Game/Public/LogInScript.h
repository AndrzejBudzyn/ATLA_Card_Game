#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Http.h"
#include "LogInScript.generated.h"

UCLASS()
class ATLA_CARD_GAME_API ULogInScript : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Login")
    static void Login(const FString& Email, const FString& Password);

    static void HandleLoginResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccess);
};
