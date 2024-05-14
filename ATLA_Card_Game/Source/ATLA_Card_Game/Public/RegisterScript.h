#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HttpModule.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Http.h"
#include "Async/Async.h"
#include "RegisterScript.generated.h"

UCLASS()
class ATLA_CARD_GAME_API AUserRegistration : public AActor
{
    GENERATED_BODY()

public:
    AUserRegistration();

    UFUNCTION(BlueprintCallable, Category = "HTTP Request")
    FString RegisterUserSynchronously(const FString& Username, const FString& Email, const FString& Password);

private:
    FString MakeHttpRequest(const FString& Url, const FString& ContentJson);
    void HandleResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, TPromise<FString>* Promise);
};
