// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PLATFORMERGAME_PlatformerPlayerState_generated_h
#error "PlatformerPlayerState.generated.h already included, missing '#pragma once' in PlatformerPlayerState.h"
#endif
#define PLATFORMERGAME_PlatformerPlayerState_generated_h

#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_SPARSE_DATA
#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_RPC_WRAPPERS \
	virtual bool SelectCharacter_Validate(int32 ); \
	virtual void SelectCharacter_Implementation(int32 index); \
	virtual bool ToggleSpectator_Validate(); \
	virtual void ToggleSpectator_Implementation(); \
	virtual bool ToggleReady_Validate(); \
	virtual void ToggleReady_Implementation(); \
 \
	DECLARE_FUNCTION(execSelectCharacter); \
	DECLARE_FUNCTION(execToggleSpectator); \
	DECLARE_FUNCTION(execToggleReady); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execCollectHeart); \
	DECLARE_FUNCTION(execCollectCoin);


#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool SelectCharacter_Validate(int32 ); \
	virtual void SelectCharacter_Implementation(int32 index); \
	virtual bool ToggleSpectator_Validate(); \
	virtual void ToggleSpectator_Implementation(); \
	virtual bool ToggleReady_Validate(); \
	virtual void ToggleReady_Implementation(); \
 \
	DECLARE_FUNCTION(execSelectCharacter); \
	DECLARE_FUNCTION(execToggleSpectator); \
	DECLARE_FUNCTION(execToggleReady); \
	DECLARE_FUNCTION(execReceiveDamage); \
	DECLARE_FUNCTION(execCollectHeart); \
	DECLARE_FUNCTION(execCollectCoin);


#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_EVENT_PARMS \
	struct PlatformerPlayerState_eventSelectCharacter_Parms \
	{ \
		int32 index; \
	};


#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_CALLBACK_WRAPPERS
#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformerPlayerState(); \
	friend struct Z_Construct_UClass_APlatformerPlayerState_Statics; \
public: \
	DECLARE_CLASS(APlatformerPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformerGame"), NO_API) \
	DECLARE_SERIALIZER(APlatformerPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SelectedPowerup=NETFIELD_REP_START, \
		NumberOfCoinsCollected, \
		CurrentHealth, \
		NumberOfDeaths, \
		bIsReady, \
		bSpectator, \
		SelectedCharacterIndex, \
		NETFIELD_REP_END=SelectedCharacterIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformerPlayerState(); \
	friend struct Z_Construct_UClass_APlatformerPlayerState_Statics; \
public: \
	DECLARE_CLASS(APlatformerPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformerGame"), NO_API) \
	DECLARE_SERIALIZER(APlatformerPlayerState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SelectedPowerup=NETFIELD_REP_START, \
		NumberOfCoinsCollected, \
		CurrentHealth, \
		NumberOfDeaths, \
		bIsReady, \
		bSpectator, \
		SelectedCharacterIndex, \
		NETFIELD_REP_END=SelectedCharacterIndex	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformerPlayerState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformerPlayerState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformerPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformerPlayerState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformerPlayerState(APlatformerPlayerState&&); \
	NO_API APlatformerPlayerState(const APlatformerPlayerState&); \
public:


#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformerPlayerState(APlatformerPlayerState&&); \
	NO_API APlatformerPlayerState(const APlatformerPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformerPlayerState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformerPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformerPlayerState)


#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NumberOfCoinsCollected() { return STRUCT_OFFSET(APlatformerPlayerState, NumberOfCoinsCollected); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(APlatformerPlayerState, CurrentHealth); } \
	FORCEINLINE static uint32 __PPO__NumberOfDeaths() { return STRUCT_OFFSET(APlatformerPlayerState, NumberOfDeaths); } \
	FORCEINLINE static uint32 __PPO__MaxHealth() { return STRUCT_OFFSET(APlatformerPlayerState, MaxHealth); }


#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_15_PROLOG \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_EVENT_PARMS


#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_PRIVATE_PROPERTY_OFFSET \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_SPARSE_DATA \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_RPC_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_CALLBACK_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_INCLASS \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_PRIVATE_PROPERTY_OFFSET \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_SPARSE_DATA \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_CALLBACK_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_INCLASS_NO_PURE_DECLS \
	PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMERGAME_API UClass* StaticClass<class APlatformerPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformerGame_Source_PlatformerGame_PlatformerPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
