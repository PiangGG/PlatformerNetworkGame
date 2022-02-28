// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlatformerGame/Fireball.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFireball() {}
// Cross Module References
	PLATFORMERGAME_API UClass* Z_Construct_UClass_AFireball_NoRegister();
	PLATFORMERGAME_API UClass* Z_Construct_UClass_AFireball();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PlatformerGame();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AFireball::execOnHitActor)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHitActor(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void AFireball::StaticRegisterNativesAFireball()
	{
		UClass* Class = AFireball::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHitActor", &AFireball::execOnHitActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFireball_OnHitActor_Statics
	{
		struct Fireball_eventOnHitActor_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fireball_eventOnHitActor_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_HitComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fireball_eventOnHitActor_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fireball_eventOnHitActor_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fireball_eventOnHitActor_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fireball_eventOnHitActor_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_Hit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFireball_OnHitActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_HitComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_NormalImpulse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFireball_OnHitActor_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFireball_OnHitActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//behaviour for when a fireball collides with an actor\n" },
		{ "ModuleRelativePath", "Fireball.h" },
		{ "ToolTip", "behaviour for when a fireball collides with an actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFireball_OnHitActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFireball, nullptr, "OnHitActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AFireball_OnHitActor_Statics::Fireball_eventOnHitActor_Parms), Z_Construct_UFunction_AFireball_OnHitActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnHitActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFireball_OnHitActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFireball_OnHitActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFireball_OnHitActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFireball_OnHitActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFireball);
	UClass* Z_Construct_UClass_AFireball_NoRegister()
	{
		return AFireball::StaticClass();
	}
	struct Z_Construct_UClass_AFireball_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_physMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_physMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_theMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_theMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireParticles_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireParticles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireParticlesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireParticlesComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheOwner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TheOwner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFireball_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PlatformerGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFireball_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFireball_OnHitActor, "OnHitActor" }, // 287409057
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fireball.h" },
		{ "ModuleRelativePath", "Fireball.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Fireball" },
		{ "Comment", "/* COMPONENTS */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fireball.h" },
		{ "ToolTip", "COMPONENTS" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireball, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireball_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_CollisionSphere_MetaData[] = {
		{ "Category", "Fireball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fireball.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_CollisionSphere = { "CollisionSphere", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireball, CollisionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireball_Statics::NewProp_CollisionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_CollisionSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_physMaterial_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Fireball.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_physMaterial = { "physMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireball, physMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireball_Statics::NewProp_physMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_physMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_theMaterial_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Fireball.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_theMaterial = { "theMaterial", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireball, theMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireball_Statics::NewProp_theMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_theMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_FireParticles_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Fireball.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_FireParticles = { "FireParticles", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireball, FireParticles), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireball_Statics::NewProp_FireParticles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_FireParticles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_FireParticlesComponent_MetaData[] = {
		{ "Category", "Fireball" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fireball.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_FireParticlesComponent = { "FireParticlesComponent", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireball, FireParticlesComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireball_Statics::NewProp_FireParticlesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_FireParticlesComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFireball_Statics::NewProp_TheOwner_MetaData[] = {
		{ "Category", "Fireball" },
		{ "ModuleRelativePath", "Fireball.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFireball_Statics::NewProp_TheOwner = { "TheOwner", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFireball, TheOwner), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFireball_Statics::NewProp_TheOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::NewProp_TheOwner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFireball_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_CollisionSphere,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_physMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_theMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_FireParticles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_FireParticlesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFireball_Statics::NewProp_TheOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFireball_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFireball>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFireball_Statics::ClassParams = {
		&AFireball::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFireball_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFireball_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFireball_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFireball()
	{
		if (!Z_Registration_Info_UClass_AFireball.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFireball.OuterSingleton, Z_Construct_UClass_AFireball_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFireball.OuterSingleton;
	}
	template<> PLATFORMERGAME_API UClass* StaticClass<AFireball>()
	{
		return AFireball::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFireball);
	struct Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Fireball_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Fireball_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFireball, AFireball::StaticClass, TEXT("AFireball"), &Z_Registration_Info_UClass_AFireball, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFireball), 3289850592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Fireball_h_659781629(TEXT("/Script/PlatformerGame"),
		Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Fireball_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PlatformerGame_Source_PlatformerGame_Fireball_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
