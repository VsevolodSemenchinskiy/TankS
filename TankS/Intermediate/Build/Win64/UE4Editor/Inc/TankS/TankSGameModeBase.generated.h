// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_TankSGameModeBase_generated_h
#error "TankSGameModeBase.generated.h already included, missing '#pragma once' in TankSGameModeBase.h"
#endif
#define TANKS_TankSGameModeBase_generated_h

#define TankS_Source_TankS_TankSGameModeBase_h_15_SPARSE_DATA
#define TankS_Source_TankS_TankSGameModeBase_h_15_RPC_WRAPPERS
#define TankS_Source_TankS_TankSGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TankS_Source_TankS_TankSGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankSGameModeBase(); \
	friend struct Z_Construct_UClass_ATankSGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankSGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankS"), NO_API) \
	DECLARE_SERIALIZER(ATankSGameModeBase)


#define TankS_Source_TankS_TankSGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankSGameModeBase(); \
	friend struct Z_Construct_UClass_ATankSGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATankSGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankS"), NO_API) \
	DECLARE_SERIALIZER(ATankSGameModeBase)


#define TankS_Source_TankS_TankSGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankSGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankSGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankSGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankSGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankSGameModeBase(ATankSGameModeBase&&); \
	NO_API ATankSGameModeBase(const ATankSGameModeBase&); \
public:


#define TankS_Source_TankS_TankSGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankSGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankSGameModeBase(ATankSGameModeBase&&); \
	NO_API ATankSGameModeBase(const ATankSGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankSGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankSGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankSGameModeBase)


#define TankS_Source_TankS_TankSGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define TankS_Source_TankS_TankSGameModeBase_h_12_PROLOG
#define TankS_Source_TankS_TankSGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankS_Source_TankS_TankSGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TankS_Source_TankS_TankSGameModeBase_h_15_SPARSE_DATA \
	TankS_Source_TankS_TankSGameModeBase_h_15_RPC_WRAPPERS \
	TankS_Source_TankS_TankSGameModeBase_h_15_INCLASS \
	TankS_Source_TankS_TankSGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankS_Source_TankS_TankSGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankS_Source_TankS_TankSGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	TankS_Source_TankS_TankSGameModeBase_h_15_SPARSE_DATA \
	TankS_Source_TankS_TankSGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TankS_Source_TankS_TankSGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	TankS_Source_TankS_TankSGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class ATankSGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankS_Source_TankS_TankSGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
