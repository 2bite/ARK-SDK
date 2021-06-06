#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Diplocaulus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.RidingTick
struct ADiplocaulus_Character_BP_C_RidingTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPNotifyClearRider
struct ADiplocaulus_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPNotifySetRider
struct ADiplocaulus_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.TryToGiveOxygen
struct ADiplocaulus_Character_BP_C_TryToGiveOxygen_Params
{
	bool                                               IsAutoFill;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AShooterPlayerController*                    GiveTo;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BlueprintOverrideWantsToRun
struct ADiplocaulus_Character_BP_C_BlueprintOverrideWantsToRun_Params
{
	bool*                                              bInputWantsToRun;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ReceiveAnyDamage
struct ADiplocaulus_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPOnMovementModeChangedNotify
struct ADiplocaulus_Character_BP_C_BPOnMovementModeChangedNotify_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PreviousCustomMode;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ChangeLandSwimState
struct ADiplocaulus_Character_BP_C_ChangeLandSwimState_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPPreventRiding
struct ADiplocaulus_Character_BP_C_BPPreventRiding_Params
{
	class AShooterCharacter**                          ByPawn;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bDontCheckDistance;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPGetMultiUseEntries
struct ADiplocaulus_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BPTryMultiUse
struct ADiplocaulus_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.BlueprintDrawFloatingHUD
struct ADiplocaulus_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.UserConstructionScript
struct ADiplocaulus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ReceiveBeginPlay
struct ADiplocaulus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.MultSpawnTakeBreathFX
struct ADiplocaulus_Character_BP_C_MultSpawnTakeBreathFX_Params
{
};

// Function Diplocaulus_Character_BP.Diplocaulus_Character_BP_C.ExecuteUbergraph_Diplocaulus_Character_BP
struct ADiplocaulus_Character_BP_C_ExecuteUbergraph_Diplocaulus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
