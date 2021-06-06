#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Netted_Material_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Netted_Material.Buff_Netted_Material_C.DrawBuffFloatingHUD
struct ABuff_Netted_Material_C_DrawBuffFloatingHUD_Params
{
	int*                                               BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.CanCutNet
struct ABuff_Netted_Material_C_CanCutNet_Params
{
	class AShooterCharacter*                           ShooterChar;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCanCut;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPOverrideTargetingDesire
struct ABuff_Netted_Material_C_BPOverrideTargetingDesire_Params
{
	class AActor**                                     forTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ForTargetingDesireValue;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreventInstigatorMovementMode
struct ABuff_Netted_Material_C_BPPreventInstigatorMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreSetupForInstigator
struct ABuff_Netted_Material_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPPreventTekArmorBuffs
struct ABuff_Netted_Material_C_BPPreventTekArmorBuffs_Params
{
	TArray<struct FName>                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.PlayPinnedAnim
struct ABuff_Netted_Material_C_PlayPinnedAnim_Params
{
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStopAltFire
struct ABuff_Netted_Material_C_BPHandleOnStopAltFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStartAltFire
struct ABuff_Netted_Material_C_BPHandleOnStartAltFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BuffTickServer
struct ABuff_Netted_Material_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPAdjustDamage_Ex
struct ABuff_Netted_Material_C_BPAdjustDamage_Ex_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  HitInfo;                                                  // (Parm, OutParm, ReferenceParm)
	struct FVector                                     ImpulseDir;                                               // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     InDamageCauser;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass**                                     TheDamgeType;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPGetHUDElements
struct ABuff_Netted_Material_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BuffTickClient
struct ABuff_Netted_Material_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.TryCuttingRope
struct ABuff_Netted_Material_C_TryCuttingRope_Params
{
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStopFire
struct ABuff_Netted_Material_C_BPHandleOnStopFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPHandleOnStartFire
struct ABuff_Netted_Material_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPServerHandleNetExecCommand
struct ABuff_Netted_Material_C_BPServerHandleNetExecCommand_Params
{
	class APlayerController**                          FromPC;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName*                                      CommandName;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBPNetExecParams                            ExecParams;                                               // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.ReduceNetHealth
struct ABuff_Netted_Material_C_ReduceNetHealth_Params
{
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.ReceiveDestroyed
struct ABuff_Netted_Material_C_ReceiveDestroyed_Params
{
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.FadeOutNet
struct ABuff_Netted_Material_C_FadeOutNet_Params
{
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPSetupForInstigator
struct ABuff_Netted_Material_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.OnRep_bSleepingEnabled
struct ABuff_Netted_Material_C_OnRep_bSleepingEnabled_Params
{
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.BPDeactivated
struct ABuff_Netted_Material_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.UserConstructionScript
struct ABuff_Netted_Material_C_UserConstructionScript_Params
{
};

// Function Buff_Netted_Material.Buff_Netted_Material_C.ExecuteUbergraph_Buff_Netted_Material
struct ABuff_Netted_Material_C_ExecuteUbergraph_Buff_Netted_Material_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
