// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_MyPawnTank_generated_h
#error "MyPawnTank.generated.h already included, missing '#pragma once' in MyPawnTank.h"
#endif
#define TANKS_MyPawnTank_generated_h

#define TankS_Source_TankS_MyPawnTank_h_12_SPARSE_DATA
#define TankS_Source_TankS_MyPawnTank_h_12_RPC_WRAPPERS
#define TankS_Source_TankS_MyPawnTank_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define TankS_Source_TankS_MyPawnTank_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPawnTank(); \
	friend struct Z_Construct_UClass_AMyPawnTank_Statics; \
public: \
	DECLARE_CLASS(AMyPawnTank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankS"), NO_API) \
	DECLARE_SERIALIZER(AMyPawnTank)


#define TankS_Source_TankS_MyPawnTank_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyPawnTank(); \
	friend struct Z_Construct_UClass_AMyPawnTank_Statics; \
public: \
	DECLARE_CLASS(AMyPawnTank, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TankS"), NO_API) \
	DECLARE_SERIALIZER(AMyPawnTank)


#define TankS_Source_TankS_MyPawnTank_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPawnTank(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPawnTank) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawnTank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawnTank); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawnTank(AMyPawnTank&&); \
	NO_API AMyPawnTank(const AMyPawnTank&); \
public:


#define TankS_Source_TankS_MyPawnTank_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPawnTank(AMyPawnTank&&); \
	NO_API AMyPawnTank(const AMyPawnTank&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPawnTank); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPawnTank); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPawnTank)


#define TankS_Source_TankS_MyPawnTank_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BodyMash() { return STRUCT_OFFSET(AMyPawnTank, BodyMash); } \
	FORCEINLINE static uint32 __PPO__TurretMash() { return STRUCT_OFFSET(AMyPawnTank, TurretMash); } \
	FORCEINLINE static uint32 __PPO__BoxCollision() { return STRUCT_OFFSET(AMyPawnTank, BoxCollision); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(AMyPawnTank, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(AMyPawnTank, Camera); } \
	FORCEINLINE static uint32 __PPO__MovementSpeed() { return STRUCT_OFFSET(AMyPawnTank, MovementSpeed); }


#define TankS_Source_TankS_MyPawnTank_h_9_PROLOG
#define TankS_Source_TankS_MyPawnTank_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankS_Source_TankS_MyPawnTank_h_12_PRIVATE_PROPERTY_OFFSET \
	TankS_Source_TankS_MyPawnTank_h_12_SPARSE_DATA \
	TankS_Source_TankS_MyPawnTank_h_12_RPC_WRAPPERS \
	TankS_Source_TankS_MyPawnTank_h_12_INCLASS \
	TankS_Source_TankS_MyPawnTank_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TankS_Source_TankS_MyPawnTank_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TankS_Source_TankS_MyPawnTank_h_12_PRIVATE_PROPERTY_OFFSET \
	TankS_Source_TankS_MyPawnTank_h_12_SPARSE_DATA \
	TankS_Source_TankS_MyPawnTank_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TankS_Source_TankS_MyPawnTank_h_12_INCLASS_NO_PURE_DECLS \
	TankS_Source_TankS_MyPawnTank_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class AMyPawnTank>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TankS_Source_TankS_MyPawnTank_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
