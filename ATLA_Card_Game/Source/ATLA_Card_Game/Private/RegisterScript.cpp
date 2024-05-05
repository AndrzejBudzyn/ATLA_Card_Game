#include "RegisterScript.h"

bool URegisterScript::Register(const FString& Name, const FString& Email, const FString& Password)
{
    TSharedPtr<bool> Success = MakeShared<bool>(false);

    TSharedRef<IHttpRequest> HttpRequest = FHttpModule::Get().CreateRequest();
    HttpRequest->SetVerb("POST");
    HttpRequest->SetURL("https://57df-31-60-18-184.ngrok-free.app/api/register");
    HttpRequest->SetHeader(TEXT("Content-Type"), TEXT("application/json"));

    FString JsonString = FString::Printf(TEXT("{\"name\": \"%s\", \"email\": \"%s\", \"password\": \"%s\"}"), *Name, *Email, *Password);
    HttpRequest->SetContentAsString(JsonString);

    HttpRequest->OnProcessRequestComplete().BindLambda(
        [Success](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bSuccess)
        {
            if (bSuccess && Response.IsValid())
            {
                *Success = (Response->GetResponseCode() == 200);
            }
        });

    HttpRequest->ProcessRequest();

    return *Success;
}
