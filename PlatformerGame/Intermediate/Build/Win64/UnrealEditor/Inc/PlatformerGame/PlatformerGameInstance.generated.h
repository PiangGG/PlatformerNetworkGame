// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionSetting;
struct FBlueprintSearchResult;
enum class EInputMode : uint8;
enum class EGameState : uint8;
#ifdef PLATFORMERGAME_PlatformerGameInstance_generated_h
#error "PlatformerGameInstance.generated.h already included, missing '#pragma once' in PlatformerGameInstance.h"
#endif
#define PLATFORMERGAME_PlatformerGameInstance_generated_h

#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintSessionSetting_Statics; \
	PLATFORMERGAME_API static class UScriptStruct* StaticStruct();


template<> PLATFORMERGAME_API UScriptStruct* StaticStruct<struct FBlueprintSessionSetting>();

#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBlueprintSearchResult_Statics; \
	PLATFORMERGAME_API static class UScriptStruct* StaticStruct();


template<> PLATFORMERGAME_API UScriptStruct* StaticStruct<struct FBlueprintSearchResult>();

#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_SPARSE_DATA
#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLeaveGame); \
	DECLARE_FUNCTION(execSetOrUpdateSessionSpecialSettingString); \
	DECLARE_FUNCTION(execGetSessionSpecialSettingString); \
	DECLARE_FUNCTION(execJoinGame); \
	DECLARE_FUNCTION(execFindGames); \
	DECLARE_FUNCTION(execHostGame); \
	DECLARE_FUNCTION(execSetInputMode); \
	DECLARE_FUNCTION(execGetCurrentGameState); \
	DECLARE_FUNCTION(execChangeState);


#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLeaveGame); \
	DECLARE_FUNCTION(execSetOrUpdateSessionSpecialSettingString); \
	DECLARE_FUNCTION(execGetSessionSpecialSettingString); \
	DECLARE_FUNCTION(execJoinGame); \
	DECLARE_FUNCTION(execFindGames); \
	DECLARE_FUNCTION(execHostGame); \
	DECLARE_FUNCTION(execSetInputMode); \
	DECLARE_FUNCTION(execGetCurrentGameState); \
	DECLARE_FUNCTION(execChangeState);


#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformerGameInstance(); \
	friend struct Z_Construct_UClass_UPlatformerGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPlatformerGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PlatformerGame"), NO_API) \
	DECLARE_SERIALIZER(UPlatformerGameInstance)


#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformerGameInstance(); \
	friend struct Z_Construct_UClass_UPlatformerGameInstance_Statics; \
public: \
	DECLARE_CLASS(UPlatformerGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/PlatformerGame"), NO_API) \
	DECLARE_SERIALIZER(UPlatformerGameInstance)


#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlatformerGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformerGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformerGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformerGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformerGameInstance(UPlatformerGameInstance&&); \
	NO_API UPlatformerGameInstance(const UPlatformerGameInstance&); \
public:


#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlatformerGameInstance(UPlatformerGameInstance&&); \
	NO_API UPlatformerGameInstance(const UPlatformerGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlatformerGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformerGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformerGameInstance)


#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_130_PROLOG
#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_SPARSE_DATA \
	FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_RPC_WRAPPERS \
	FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_INCLASS \
	FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_SPARSE_DATA \
	FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_INCLASS_NO_PURE_DECLS \
	FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PLATFORMERGAME_API UClass* StaticClass<class UPlatformerGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PlatformerGame_Source_PlatformerGame_PlatformerGameInstance_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::ENone) \
	op(EGameState::ELoadingScreen) \
	op(EGameState::EStartup) \
	op(EGameState::EMainMenu) \
	op(EGameState::EMultiplayerHome) \
	op(EGameState::EMultiplayerJoin) \
	op(EGameState::EMultiplayerHost) \
	op(EGameState::EMultiplayerInGame) \
	op(EGameState::ETravelling) 

enum class EGameState : uint8;
template<> PLATFORMERGAME_API UEnum* StaticEnum<EGameState>();

#define FOREACH_ENUM_EINPUTMODE(op) \
	op(EInputMode::EUIOnly) \
	op(EInputMode::EUIAndGame) \
	op(EInputMode::EGameOnly) 

enum class EInputMode : uint8;
template<> PLATFORMERGAME_API UEnum* StaticEnum<EInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
