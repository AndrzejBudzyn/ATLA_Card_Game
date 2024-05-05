// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ATLA_Card_Game/Public/RegisterScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRegisterScript() {}
// Cross Module References
	ATLA_CARD_GAME_API UClass* Z_Construct_UClass_URegisterScript();
	ATLA_CARD_GAME_API UClass* Z_Construct_UClass_URegisterScript_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ATLA_Card_Game();
// End Cross Module References
	DEFINE_FUNCTION(URegisterScript::execRegister)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Email);
		P_GET_PROPERTY(FStrProperty,Z_Param_Password);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URegisterScript::Register(Z_Param_Name,Z_Param_Email,Z_Param_Password);
		P_NATIVE_END;
	}
	void URegisterScript::StaticRegisterNativesURegisterScript()
	{
		UClass* Class = URegisterScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Register", &URegisterScript::execRegister },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URegisterScript_Register_Statics
	{
		struct RegisterScript_eventRegister_Parms
		{
			FString Name;
			FString Email;
			FString Password;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Email_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Email;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Password_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Password;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegisterScript_eventRegister_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Name_MetaData), Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Email_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Email = { "Email", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegisterScript_eventRegister_Parms, Email), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Email_MetaData), Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Email_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Password_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Password = { "Password", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RegisterScript_eventRegister_Parms, Password), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Password_MetaData), Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Password_MetaData) };
	void Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RegisterScript_eventRegister_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RegisterScript_eventRegister_Parms), &Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URegisterScript_Register_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Email,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_Password,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URegisterScript_Register_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URegisterScript_Register_Statics::Function_MetaDataParams[] = {
		{ "Category", "Registration" },
		{ "ModuleRelativePath", "Public/RegisterScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URegisterScript_Register_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URegisterScript, nullptr, "Register", nullptr, nullptr, Z_Construct_UFunction_URegisterScript_Register_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URegisterScript_Register_Statics::PropPointers), sizeof(Z_Construct_UFunction_URegisterScript_Register_Statics::RegisterScript_eventRegister_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URegisterScript_Register_Statics::Function_MetaDataParams), Z_Construct_UFunction_URegisterScript_Register_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URegisterScript_Register_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_URegisterScript_Register_Statics::RegisterScript_eventRegister_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_URegisterScript_Register()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URegisterScript_Register_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URegisterScript);
	UClass* Z_Construct_UClass_URegisterScript_NoRegister()
	{
		return URegisterScript::StaticClass();
	}
	struct Z_Construct_UClass_URegisterScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URegisterScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ATLA_Card_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URegisterScript_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_URegisterScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URegisterScript_Register, "Register" }, // 382399056
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URegisterScript_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URegisterScript_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RegisterScript.h" },
		{ "ModuleRelativePath", "Public/RegisterScript.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URegisterScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URegisterScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URegisterScript_Statics::ClassParams = {
		&URegisterScript::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URegisterScript_Statics::Class_MetaDataParams), Z_Construct_UClass_URegisterScript_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_URegisterScript()
	{
		if (!Z_Registration_Info_UClass_URegisterScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URegisterScript.OuterSingleton, Z_Construct_UClass_URegisterScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URegisterScript.OuterSingleton;
	}
	template<> ATLA_CARD_GAME_API UClass* StaticClass<URegisterScript>()
	{
		return URegisterScript::StaticClass();
	}
	URegisterScript::URegisterScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URegisterScript);
	URegisterScript::~URegisterScript() {}
	struct Z_CompiledInDeferFile_FID_ATLA_Card_Game_Source_ATLA_Card_Game_Public_RegisterScript_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ATLA_Card_Game_Source_ATLA_Card_Game_Public_RegisterScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URegisterScript, URegisterScript::StaticClass, TEXT("URegisterScript"), &Z_Registration_Info_UClass_URegisterScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URegisterScript), 2014908789U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ATLA_Card_Game_Source_ATLA_Card_Game_Public_RegisterScript_h_3950950862(TEXT("/Script/ATLA_Card_Game"),
		Z_CompiledInDeferFile_FID_ATLA_Card_Game_Source_ATLA_Card_Game_Public_RegisterScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ATLA_Card_Game_Source_ATLA_Card_Game_Public_RegisterScript_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
