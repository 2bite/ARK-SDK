#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Defender_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Defender_Character_BP.Defender_Character_BP_C.UpdateNoTargetRollState
struct ADefender_Character_BP_C_UpdateNoTargetRollState_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.BPTimerServer
struct ADefender_Character_BP_C_BPTimerServer_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.BPAdjustDamage
struct ADefender_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Defender_Character_BP.Defender_Character_BP_C.UpdateDamageFX
struct ADefender_Character_BP_C_UpdateDamageFX_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.BPNotifySetRider
struct ADefender_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Defender_Character_BP.Defender_Character_BP_C.OnRep_IsRolled
struct ADefender_Character_BP_C_OnRep_IsRolled_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.BPDoAttack
struct ADefender_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Defender_Character_BP.Defender_Character_BP_C.CheckAgainstRoll
struct ADefender_Character_BP_C_CheckAgainstRoll_Params
{
	int                                                Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Defender_Character_BP.Defender_Character_BP_C.BlueprintCanAttack
struct ADefender_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Defender_Character_BP.Defender_Character_BP_C.BlueprintCanRiderAttack
struct ADefender_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Defender_Character_BP.Defender_Character_BP_C.UserConstructionScript
struct ADefender_Character_BP_C_UserConstructionScript_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.ReceiveBeginPlay
struct ADefender_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.OnDied_Event
struct ADefender_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Defender_Character_BP.Defender_Character_BP_C.AnimNotify_ActivateEnergy
struct ADefender_Character_BP_C_AnimNotify_ActivateEnergy_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.RollUp
struct ADefender_Character_BP_C_RollUp_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.Unroll
struct ADefender_Character_BP_C_Unroll_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.SetRolledSettings
struct ADefender_Character_BP_C_SetRolledSettings_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.SetUnrolledSettings
struct ADefender_Character_BP_C_SetUnrolledSettings_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.Multi_UpdateDamageEffects
struct ADefender_Character_BP_C_Multi_UpdateDamageEffects_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.ReceiveAnyDamage
struct ADefender_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Defender_Character_BP.Defender_Character_BP_C.ResetAttackerPlayer
struct ADefender_Character_BP_C_ResetAttackerPlayer_Params
{
};

// Function Defender_Character_BP.Defender_Character_BP_C.ExecuteUbergraph_Defender_Character_BP
struct ADefender_Character_BP_C_ExecuteUbergraph_Defender_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
