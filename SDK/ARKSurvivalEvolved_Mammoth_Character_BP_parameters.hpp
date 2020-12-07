#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mammoth_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsInWater
struct AMammoth_Character_BP_C_IsInWater_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.WaterSprayCharacter
struct AMammoth_Character_BP_C_WaterSprayCharacter_Params
{
	class APrimalCharacter*                            Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.RefillWaterStat
struct AMammoth_Character_BP_C_RefillWaterStat_Params
{
	class UPrimalCharacterStatusComponent*             StatusComp;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPCanTakePassenger
struct AMammoth_Character_BP_C_BPCanTakePassenger_Params
{
	class APrimalCharacter**                           Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               PassengerSeatIndex;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForcePassenger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bAllowFlyersAndWaterDinos;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrottledTick
struct AMammoth_Character_BP_C_ThrottledTick_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintAdjustOutputDamage
struct AMammoth_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ShortestAngleDifference
struct AMammoth_Character_BP_C_ShortestAngleDifference_Params
{
	float                                              AngleCurrent;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              AngleTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Difference;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetClampedLookDir
struct AMammoth_Character_BP_C_GetClampedLookDir_Params
{
	bool                                               LimitLowerPitch;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Dir;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ThrowTrace
struct AMammoth_Character_BP_C_ThrowTrace_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetThrowVelocity
struct AMammoth_Character_BP_C_GetThrowVelocity_Params
{
	class APrimalCharacter*                            ThrownCharacter;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerServer
struct AMammoth_Character_BP_C_BPTimerServer_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.canThrow
struct AMammoth_Character_BP_C_canThrow_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTimerNonDedicated
struct AMammoth_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidSetCarriedCharacter
struct AMammoth_Character_BP_C_BPDidSetCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyToggleHUD
struct AMammoth_Character_BP_C_BPNotifyToggleHUD_Params
{
	bool*                                              bHUDHidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPTryMultiUse
struct AMammoth_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPGetMultiUseEntries
struct AMammoth_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClearThrow
struct AMammoth_Character_BP_C_ClearThrow_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.LaunchGrabbedCharacter
struct AMammoth_Character_BP_C_LaunchGrabbedCharacter_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDidClearCarriedCharacter
struct AMammoth_Character_BP_C_BPDidClearCarriedCharacter_Params
{
	class APrimalCharacter**                           PreviousCarriedCharacter;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.GrabFoundCharacter
struct AMammoth_Character_BP_C_GrabFoundCharacter_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.FindProperGrabTarget
struct AMammoth_Character_BP_C_FindProperGrabTarget_Params
{
	class APrimalCharacter*                            TestChar;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            TargetChar;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.CheckProperCanCarry
struct AMammoth_Character_BP_C_CheckProperCanCarry_Params
{
	class APrimalCharacter*                            TestActor;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanCarry;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.IsBetterGrabTarget
struct AMammoth_Character_BP_C_IsBetterGrabTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.GetGrabLocation
struct AMammoth_Character_BP_C_GetGrabLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.RetrieveAnyGrabbableCharacter
struct AMammoth_Character_BP_C_RetrieveAnyGrabbableCharacter_Params
{
	bool                                               FoundCharacter;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AMammoth_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPOnStartJump
struct AMammoth_Character_BP_C_BPOnStartJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.OnPassengerWeaponChanged
struct AMammoth_Character_BP_C_OnPassengerWeaponChanged_Params
{
	class AShooterWeapon*                              newWeapon;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyAddPassenger
struct AMammoth_Character_BP_C_BPNotifyAddPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPNotifyClearPassenger
struct AMammoth_Character_BP_C_BPNotifyClearPassenger_Params
{
	class APrimalCharacter**                           PassengerChar;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               SeatIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AllowTrumpetDebuff
struct AMammoth_Character_BP_C_AllowTrumpetDebuff_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.DoTrumpetAttack
struct AMammoth_Character_BP_C_DoTrumpetAttack_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BPDoAttack
struct AMammoth_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanAttack
struct AMammoth_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.BlueprintCanRiderAttack
struct AMammoth_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.UserConstructionScript
struct AMammoth_Character_BP_C_UserConstructionScript_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrab
struct AMammoth_Character_BP_C_AnimNotify_EndGrab_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.TraceGrab
struct AMammoth_Character_BP_C_TraceGrab_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StartGrab
struct AMammoth_Character_BP_C_AnimNotify_StartGrab_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_MidGrab
struct AMammoth_Character_BP_C_AnimNotify_MidGrab_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_EndGrabAttack
struct AMammoth_Character_BP_C_AnimNotify_EndGrabAttack_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_ReleaseGrab
struct AMammoth_Character_BP_C_AnimNotify_ReleaseGrab_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientGrabNotify
struct AMammoth_Character_BP_C_ClientGrabNotify_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ClientThrowNotify
struct AMammoth_Character_BP_C_ClientThrowNotify_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ServerTraceHit
struct AMammoth_Character_BP_C_ServerTraceHit_Params
{
	struct FVector                                     TraceLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TraceHit;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrumpetVFX
struct AMammoth_Character_BP_C_AnimNotify_TrumpetVFX_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_StopTrumpetVFX
struct AMammoth_Character_BP_C_AnimNotify_StopTrumpetVFX_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.AnimNotify_TrunkSplash
struct AMammoth_Character_BP_C_AnimNotify_TrunkSplash_Params
{
};

// Function Mammoth_Character_BP.Mammoth_Character_BP_C.ExecuteUbergraph_Mammoth_Character_BP
struct AMammoth_Character_BP_C_ExecuteUbergraph_Mammoth_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
