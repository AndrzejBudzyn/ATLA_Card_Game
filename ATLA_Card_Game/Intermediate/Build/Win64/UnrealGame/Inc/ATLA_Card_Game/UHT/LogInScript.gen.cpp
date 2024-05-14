// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ATLA_Card_Game/Public/LogInScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogInScript() {}
// Cross Module References
	ATLA_CARD_GAME_API UClass* Z_Construct_UClass_ULogInScript();
	ATLA_CARD_GAME_API UClass* Z_Construct_UClass_ULogInScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ATLA_Card_Game();
// End Cross Module References
	DEFINE_FUNCTION(ULogInScript::execLogin)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULogInScript::Login(Z_Param_Email,Z_Param_Password);
		P_NATIVE_END;
	}
	void ULogInScript::StaticRegisterNativesULogInScript()
	{
		UClass* Class = ULogInScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Login", &ULogInScript::execLogin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULogInScript_Login_Statics
	{
		struct LogInScript_eventLogin_Parms
		{
			FString Email;
			FString Password;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogInScript_Login_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULogInScript_Login_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogInScript_eventLogin_Parms, Email), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogInScript_Login_Statics::NewProp_Email_MetaData), Z_Construct_UFunction_ULogInScript_Login_Statics::NewProp_Email_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogInScript_Login_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULogInScript_Login_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LogInScript_eventLogin_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogInScript_Login_Statics::NewProp_Password_MetaData), Z_Construct_UFunction_ULogInScript_Login_Statics::NewProp_Password_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULogInScript_Login_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogInScript_Login_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULogInScript_Login_Statics::NewProp_Password,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULogInScript_Login_Statics::Function_MetaDataParams[] = {
		{ "Category", "Login" },
		{ "ModuleRelativePath", "Public/LogInScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULogInScript_Login_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULogInScript, nullptr, "Login", nullptr, nullptr, Z_Construct_UFunction_ULogInScript_Login_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULogInScript_Login_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULogInScript_Login_Statics::LogInScript_eventLogin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogInScript_Login_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULogInScript_Login_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULogInScript_Login_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULogInScript_Login_Statics::LogInScript_eventLogin_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULogInScript_Login()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULogInScript_Login_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULogInScript);
	UClass* Z_Construct_UClass_ULogInScript_NoRegister()
	{
		return ULogInScript::StaticClass();
	}
	struct Z_Construct_UClass_ULogInScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULogInScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ATLA_Card_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogInScript_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULogInScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULogInScript_Login, "Login" }, // 1878707197
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULogInScript_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogInScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LogInScript.h" },
		{ "ModuleRelativePath", "Public/LogInScript.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogInScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogInScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULogInScript_Statics::ClassParams = {
		&ULogInScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULogInScript_Statics::Class_MetaDataParams), Z_Construct_UClass_ULogInScript_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULogInScript()
	{
		if (!Z_Registration_Info_UClass_ULogInScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULogInScript.OuterSingleton, Z_Construct_UClass_ULogInScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULogInScript.OuterSingleton;
	}
	template<> ATLA_CARD_GAME_API UClass* StaticClass<ULogInScript>()
	{
		return ULogInScript::StaticClass();
	}
	ULogInScript::ULogInScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogInScript);
	ULogInScript::~ULogInScript() {}
	struct Z_CompiledInDeferFile_FID_ATLA_Card_Game_Source_ATLA_Card_Game_Public_LogInScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ATLA_Card_Game_Source_ATLA_Card_Game_Public_LogInScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULogInScript, ULogInScript::StaticClass, TEXT("ULogInScript"), &Z_Registration_Info_UClass_ULogInScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULogInScript), 1063419559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ATLA_Card_Game_Source_ATLA_Card_Game_Public_LogInScript_h_2552409806(TEXT("/Script/ATLA_Card_Game"),
		Z_CompiledInDeferFile_FID_ATLA_Card_Game_Source_ATLA_Card_Game_Public_LogInScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ATLA_Card_Game_Source_ATLA_Card_Game_Public_LogInScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
