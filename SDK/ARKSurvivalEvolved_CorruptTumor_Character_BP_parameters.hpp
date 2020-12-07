#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CorruptTumor_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.BP_PreventMovementMode
struct ACorruptTumor_Character_BP_C_BP_PreventMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.SpawnDinosBasedOnAttackerComposition
struct ACorruptTumor_Character_BP_C_SpawnDinosBasedOnAttackerComposition_Params
{
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.BPAdjustDamage
struct ACorruptTumor_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.BP_OnSetDeath
struct ACorruptTumor_Character_BP_C_BP_OnSetDeath_Params
{
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.GetScale
struct ACorruptTumor_Character_BP_C_GetScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ReceiveDestroyed
struct ACorruptTumor_Character_BP_C_ReceiveDestroyed_Params
{
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.UserConstructionScript
struct ACorruptTumor_Character_BP_C_UserConstructionScript_Params
{
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_SetScale
struct ACorruptTumor_Character_BP_C_Multi_SetScale_Params
{
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ReceiveBeginPlay
struct ACorruptTumor_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ReceiveTick
struct ACorruptTumor_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_DestroyExplosionFX
struct ACorruptTumor_Character_BP_C_Multi_DestroyExplosionFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_SpawnCorruptionFX
struct ACorruptTumor_Character_BP_C_Multi_SpawnCorruptionFX_Params
{
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_PlaySpawnFX
struct ACorruptTumor_Character_BP_C_Multi_PlaySpawnFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.Multi_PlayPlaceFX
struct ACorruptTumor_Character_BP_C_Multi_PlayPlaceFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function CorruptTumor_Character_BP.CorruptTumor_Character_BP_C.ExecuteUbergraph_CorruptTumor_Character_BP
struct ACorruptTumor_Character_BP_C_ExecuteUbergraph_CorruptTumor_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
