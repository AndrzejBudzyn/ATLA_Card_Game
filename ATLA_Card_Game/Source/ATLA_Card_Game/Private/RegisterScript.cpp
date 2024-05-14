#include "RegisterScript.h"

AUserRegistration::AUserRegistration()
{
    PrimaryActorTick.bCanEverTick = true;
}

FString AUserRegistration::RegisterUserSynchronously(const FString& Username, const FString& Email, const FString& Password)
{
    FString ContentJson = FString::Printf(TEXT("{\"username\":\"%s\",\"email\":\"%s\",\"password\":\"%s\"}"), *Username, *Email, *Password);
    return MakeHttpRequest("http://127.0.0.1:8000/api/register", ContentJson);
}

FString AUserRegistration::MakeHttpRequest(const FString& Url, const FString& ContentJson)
{
    TPromise<FString> Promise;
    TFuture<FString> Future = Promise.GetFuture();

    TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
    Request->SetURL(Url);
    Request->SetVerb("POST");
    Request->SetHeader("Content-Type", "application/json");
    Request->SetContentAsString(ContentJson);
    Request->OnProcessRequestComplete().BindLambda([PromisePtr = &Promise](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) mutable
        {
            if (bWasSuccessful && Response->GetResponseCode() == 200)
            {
                PromisePtr->SetValue(Response->GetContentAsString());
            }
            else
            {
                PromisePtr->SetValue(TEXT("Failed to get valid response"));
            }
        });
    Request->ProcessRequest();

    return Future.Get();
}

void AUserRegistration::HandleResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful, TPromise<FString>* Promise)
{
    if (bWasSuccessful && Response->GetResponseCode() == 200)
    {
        Promise->SetValue(Response->GetContentAsString());
    }
    else
    {
        Promise->SetValue(TEXT("Failed to get valid response"));
    }
}
