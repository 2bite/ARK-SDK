#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MotorRaft_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MotorRaft_BP.MotorRaft_BP_C.BPCanCryo
struct AMotorRaft_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MotorRaft_BP.MotorRaft_BP_C.BPPlayDying
struct AMotorRaft_BP_C_BPPlayDying_Params
{
	float*                                             KillingDamage;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      InstigatingPawn;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MotorRaft_BP.MotorRaft_BP_C.BPAllowMovementSound
struct AMotorRaft_BP_C_BPAllowMovementSound_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MotorRaft_BP.MotorRaft_BP_C.BPUnstasis
struct AMotorRaft_BP_C_BPUnstasis_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.BPTryMultiUse
struct AMotorRaft_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MotorRaft_BP.MotorRaft_BP_C.BPGetMultiUseEntries
struct AMotorRaft_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function MotorRaft_BP.MotorRaft_BP_C.ReceiveBeginPlay
struct AMotorRaft_BP_C_ReceiveBeginPlay_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.LoadFuel
struct AMotorRaft_BP_C_LoadFuel_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.TurnOff
struct AMotorRaft_BP_C_TurnOff_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.TurnOn
struct AMotorRaft_BP_C_TurnOn_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.BPTimerNonDedicated
struct AMotorRaft_BP_C_BPTimerNonDedicated_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.ConsumeFuel
struct AMotorRaft_BP_C_ConsumeFuel_Params
{
	float                                              AmountPercent;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MotorRaft_BP.MotorRaft_BP_C.CheckForIdleFuelConsumption
struct AMotorRaft_BP_C_CheckForIdleFuelConsumption_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.BPTimerServer
struct AMotorRaft_BP_C_BPTimerServer_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.BPNotifyInventoryItemChange
struct AMotorRaft_BP_C_BPNotifyInventoryItemChange_Params
{
	bool*                                              bIsItemAdd;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimalItem**                                theItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bEquipItem;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MotorRaft_BP.MotorRaft_BP_C.BlueprintDrawFloatingHUD
struct AMotorRaft_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MotorRaft_BP.MotorRaft_BP_C.ReceiveAnyDamage
struct AMotorRaft_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MotorRaft_BP.MotorRaft_BP_C.UserConstructionScript
struct AMotorRaft_BP_C_UserConstructionScript_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.DoPlayKnockAnimation
struct AMotorRaft_BP_C_DoPlayKnockAnimation_Params
{
	int                                                KnockDirectionIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MotorRaft_BP.MotorRaft_BP_C.NetDoTurnOn
struct AMotorRaft_BP_C_NetDoTurnOn_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.NetDoTurnOff
struct AMotorRaft_BP_C_NetDoTurnOff_Params
{
};

// Function MotorRaft_BP.MotorRaft_BP_C.ExecuteUbergraph_MotorRaft_BP
struct AMotorRaft_BP_C_ExecuteUbergraph_MotorRaft_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
