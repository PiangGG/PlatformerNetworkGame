// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/Pickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}
// Cross Module References
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APickup_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_APickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APickup::execCollectPickup)
	{
		P_GET_OBJECT(ABaseCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->CollectPickup_Validate(Z_Param_Character))
		{
			RPC_ValidateFailed(TEXT("CollectPickup_Validate"));
			return;
		}
		P_THIS->CollectPickup_Implementation(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APickup::execOnComponentOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnComponentOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	static FName NAME_APickup_CollectPickup = FName(TEXT("CollectPickup"));
	void APickup::CollectPickup(ABaseCharacter* Character)
	{
		Pickup_eventCollectPickup_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_APickup_CollectPickup),&Parms);
	}
	void APickup::StaticRegisterNativesAPickup()
	{
		UClass* Class = APickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectPickup", &APickup::execCollectPickup },
			{ "OnComponentOverlap", &APickup::execOnComponentOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickup_CollectPickup_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_CollectPickup_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pickup_eventCollectPickup_Parms, Character), Z_Construct_UClass_ABaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_CollectPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_CollectPickup_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_CollectPickup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "Comment", "//Server function called to actually collect the pickup\n" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "Server function called to actually collect the pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_CollectPickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "CollectPickup", nullptr, nullptr, sizeof(Pickup_eventCollectPickup_Parms), Z_Construct_UFunction_APickup_CollectPickup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_CollectPickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_CollectPickup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_CollectPickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_CollectPickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_CollectPickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APickup_OnComponentOverlap_Statics
	{
		struct Pickup_eventOnComponentOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pickup_eventOnComponentOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Pickup_eventOnComponentOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Pickup_eventOnComponentOverlap_Parms), &Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pickup_eventOnComponentOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pickup_eventOnComponentOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pickup_eventOnComponentOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Pickup_eventOnComponentOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//called when pickup overlaps with another actor\n//used to collect pickup\n" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "called when pickup overlaps with another actor\nused to collect pickup" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickup, nullptr, "OnComponentOverlap", nullptr, nullptr, sizeof(Pickup_eventOnComponentOverlap_Parms), Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickup_OnComponentOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickup_OnComponentOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPickedUp_MetaData[];
#endif
		static void NewProp_bIsPickedUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPickedUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpinsPerSecond_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpinsPerSecond;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickup_CollectPickup, "CollectPickup" }, // 3620665404
		{ &Z_Construct_UFunction_APickup_OnComponentOverlap, "OnComponentOverlap" }, // 1449197064
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_bIsPickedUp_MetaData[] = {
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	void Z_Construct_UClass_APickup_Statics::NewProp_bIsPickedUp_SetBit(void* Obj)
	{
		((APickup*)Obj)->bIsPickedUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_bIsPickedUp = { "bIsPickedUp", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APickup), &Z_Construct_UClass_APickup_Statics::NewProp_bIsPickedUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_bIsPickedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_bIsPickedUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_SpinsPerSecond_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_SpinsPerSecond = { "SpinsPerSecond", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, SpinsPerSecond), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_SpinsPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_SpinsPerSecond_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_CollisionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_CollisionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/* COMPONENTS */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickup.h" },
		{ "ToolTip", "COMPONENTS" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_bIsPickedUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_SpinsPerSecond,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_CollisionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
		&APickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup, 3904823301);
	template<> PLATFORMERGAME_API UClass* StaticClass<APickup>()
	{
		return APickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup(Z_Construct_UClass_APickup, &APickup::StaticClass, TEXT("/Script/PlatformerGame"), TEXT("APickup"), false, nullptr, nullptr, nullptr);

	void APickup::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bIsPickedUp(TEXT("bIsPickedUp"));

		const bool bIsValid = true
			&& Name_bIsPickedUp == ClassReps[(int32)ENetFields_Private::bIsPickedUp].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APickup"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
