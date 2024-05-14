#include "LogInScript.h"

void ULogInScript::Login(const FString& Email, const FString& Password)
{
    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetURL("http://127.0.0.1:8000/api/login");
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

    FString JsonString = FString::Printf(TEXT("{\"email\": \"%s\", \"password\": \"%s\"}"), *Email, *Password);
    HttpRequest->SetContentAsString(JsonString);

    HttpRequest->OnProcessRequestComplete().BindStatic(&ULogInScript::HandleLoginResponse);

    HttpRequest->ProcessRequest();
}

void ULogInScript::HandleLoginResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccess)
{
    if (bSuccess && Response.IsValid())
    {
        if (Response->GetResponseCode() == EHttpResponseCodes::Ok)
        {
            FString ResponseBody = Response->GetContentAsString();
            // Je�li odpowied� zawiera "ok", ustawiamy odpowiedni tekst
            if (ResponseBody.Contains(TEXT("ok")))
            {
                // Zwracamy tekst "ok" jako odpowied�
                UE_LOG(LogTemp, Warning, TEXT("Logowanie udane."));
            }
            else
            {
                // Obs�uga b��d�w odpowiedzi
                UE_LOG(LogTemp, Error, TEXT("B��d logowania: %s"), *ResponseBody);
            }
        }
        else
        {
            // Obs�uga b��d�w odpowiedzi HTTP
            UE_LOG(LogTemp, Error, TEXT("B��d HTTP: %d"), Response->GetResponseCode());
        }
    }
    else
    {
        // Obs�uga b��d�w komunikacji
        UE_LOG(LogTemp, Error, TEXT("B��d komunikacji z serwerem."));
    }
}
