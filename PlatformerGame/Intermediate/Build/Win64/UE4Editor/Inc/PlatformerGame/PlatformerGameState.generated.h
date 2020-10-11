// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EMatchState : uint8;
#ifdef PLATFORMERGAME_PlatformerGameState_generated_h
#error "PlatformerGameState.generated.h already included, missing '#pragma once' in PlatformerGameState.h"
#endif
#define PLATFORMERGAME_PlatformerGameState_generated_h

#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterSpecification_Statics; \
	PLATFORMERGAME_API static class UScriptStruct* StaticStruct();


template<> PLATFORMERGAME_API UScriptStruct* StaticStruct<struct FCharacterSpecification>();

#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_SPARSE_DATA
#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_RPC_WRAPPERS \
	virtual bool UpdateMatchTime_Validate(float ); \
	virtual void UpdateMatchTime_Implementation(float NewTime); \
	virtual void ChangeState_Implementation(EMatchState newState); \
 \
	DECLARE_FUNCTION(execUpdateMatchTime); \
	DECLARE_FUNCTION(execGetMatchState); \
	DECLARE_FUNCTION(execChangeState);


#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool UpdateMatchTime_Validate(float ); \
	virtual void UpdateMatchTime_Implementation(float NewTime); \
	virtual void ChangeState_Implementation(EMatchState newState); \
 \
	DECLARE_FUNCTION(execUpdateMatchTime); \
	DECLARE_FUNCTION(execGetMatchState); \
	DECLARE_FUNCTION(execChangeState);


#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_EVENT_PARMS \
	struct PlatformerGameState_eventChangeState_Parms \
	{ \
		EMatchState newState; \
	}; \
	struct PlatformerGameState_eventUpdateMatchTime_Parms \
	{ \
		float NewTime; \
	};


#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_CALLBACK_WRAPPERS
#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlatformerGameState(); \
	friend struct Z_Construct_UClass_APlatformerGameState_Statics; \
public: \
	DECLARE_CLASS(APlatformerGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformerGame"), NO_API) \
	DECLARE_SERIALIZER(APlatformerGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentMatchState=NETFIELD_REP_START, \
		TotalMatchTime, \
		NETFIELD_REP_END=TotalMatchTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_INCLASS \
private: \
	static void StaticRegisterNativesAPlatformerGameState(); \
	friend struct Z_Construct_UClass_APlatformerGameState_Statics; \
public: \
	DECLARE_CLASS(APlatformerGameState, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PlatformerGame"), NO_API) \
	DECLARE_SERIALIZER(APlatformerGameState) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentMatchState=NETFIELD_REP_START, \
		TotalMatchTime, \
		NETFIELD_REP_END=TotalMatchTime	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlatformerGameState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlatformerGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformerGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformerGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformerGameState(APlatformerGameState&&); \
	NO_API APlatformerGameState(const APlatformerGameState&); \
public:


#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlatformerGameState(APlatformerGameState&&); \
	NO_API APlatformerGameState(const APlatformerGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlatformerGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlatformerGameState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlatformerGameState)


#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentMatchState() { return STRUCT_OFFSET(APlatformerGameState, CurrentMatchState); } \
	FORCEINLINE static uint32 __PPO__TotalMatchTime() { return STRUCT_OFFSET(APlatformerGameState, TotalMatchTime); }


#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_40_PROLOG \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_EVENT_PARMS


#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_PRIVATE_PROPERTY_OFFSET \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_SPARSE_DATA \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_RPC_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_CALLBACK_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_INCLASS \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_PRIVATE_PROPERTY_OFFSET \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_SPARSE_DATA \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_CALLBACK_WRAPPERS \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_INCLASS_NO_PURE_DECLS \
	PlatformerGame_Source_PlatformerGame_PlatformerGameState_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMERGAME_API UClass* StaticClass<class APlatformerGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlatformerGame_Source_PlatformerGame_PlatformerGameState_h


#define FOREACH_ENUM_EMATCHSTATE(op) \
	op(EMatchState::ENotConnected) \
	op(EMatchState::EWaitingForPlayers) \
	op(EMatchState::EStartingGame) \
	op(EMatchState::EGameInProgress) \
	op(EMatchState::EGameComplete) \
	op(EMatchState::ERestartingGame) 

enum class EMatchState : uint8;
template<> PLATFORMERGAME_API UEnum* StaticEnum<EMatchState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
