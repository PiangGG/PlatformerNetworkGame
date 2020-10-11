// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APowerup;
#ifdef PLATFORMERGAME_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define PLATFORMERGAME_BaseCharacter_generated_h

#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_SPARSE_DATA
#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_RPC_WRAPPERS \
	virtual bool PowerupUsed_Validate(); \
	virtual void PowerupUsed_Implementation(); \
	virtual bool UsePowerupStartServer_Validate(); \
	virtual void UsePowerupStartServer_Implementation(); \
 \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execNextPowerup); \
	DECLARE_FUNCTION(execCollectPowerup); \
	DECLARE_FUNCTION(execCollectHeart); \
	DECLARE_FUNCTION(execCollectCoin); \
	DECLARE_FUNCTION(execPowerupUsed); \
	DECLARE_FUNCTION(execUsePowerupStartServer); \
	DECLARE_FUNCTION(execUsePowerupStartClient);


#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool PowerupUsed_Validate(); \
	virtual void PowerupUsed_Implementation(); \
	virtual bool UsePowerupStartServer_Validate(); \
	virtual void UsePowerupStartServer_Implementation(); \
 \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execNextPowerup); \
	DECLARE_FUNCTION(execCollectPowerup); \
	DECLARE_FUNCTION(execCollectHeart); \
	DECLARE_FUNCTION(execCollectCoin); \
	DECLARE_FUNCTION(execPowerupUsed); \
	DECLARE_FUNCTION(execUsePowerupStartServer); \
	DECLARE_FUNCTION(execUsePowerupStartClient);


#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_EVENT_PARMS
#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_CALLBACK_WRAPPERS
#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformerGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsFiring=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsFiring	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformerGame"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bIsFiring=NETFIELD_REP_START, \
		NETFIELD_REP_END=bIsFiring	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_12_PROLOG \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_EVENT_PARMS


#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_SPARSE_DATA \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_RPC_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_CALLBACK_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_INCLASS \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_SPARSE_DATA \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_CALLBACK_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_INCLASS_NO_PURE_DECLS \
	PlatformerGame_Source_PlatformerGame_BaseCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMERGAME_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformerGame_Source_PlatformerGame_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
