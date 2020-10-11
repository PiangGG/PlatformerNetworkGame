// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseCharacter;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef PLATFORMERGAME_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define PLATFORMERGAME_Pickup_generated_h

#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_SPARSE_DATA
#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_RPC_WRAPPERS \
	virtual bool CollectPickup_Validate(ABaseCharacter* ); \
	virtual void CollectPickup_Implementation(ABaseCharacter* Character); \
 \
	DECLARE_FUNCTION(execCollectPickup); \
	DECLARE_FUNCTION(execOnComponentOverlap);


#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CollectPickup_Validate(ABaseCharacter* ); \
 \
	DECLARE_FUNCTION(execCollectPickup); \
	DECLARE_FUNCTION(execOnComponentOverlap);


#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_EVENT_PARMS \
	struct Pickup_eventCollectPickup_Parms \
	{ \
		ABaseCharacter* Character; \
	};


#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_CALLBACK_WRAPPERS
#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformerGame"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPickedUp=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsPickedUp	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
public: \
	DECLARE_CLASS(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformerGame"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsPickedUp=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsPickedUp	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsPickedUp() { return STRUCT_OFFSET(APickup, bIsPickedUp); }


#define PlatformerGame_Source_PlatformerGame_Pickup_h_12_PROLOG \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_EVENT_PARMS


#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_SPARSE_DATA \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_RPC_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_CALLBACK_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_INCLASS \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformerGame_Source_PlatformerGame_Pickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_SPARSE_DATA \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_CALLBACK_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_INCLASS_NO_PURE_DECLS \
	PlatformerGame_Source_PlatformerGame_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMERGAME_API UClass* StaticClass<class APickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformerGame_Source_PlatformerGame_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
