#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndTank_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndTank_Character_BP.EndTank_Character_BP_C.UpdateNoTargetRollState
struct AEndTank_Character_BP_C_UpdateNoTargetRollState_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.BPTimerServer
struct AEndTank_Character_BP_C_BPTimerServer_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.BPAdjustDamage
struct AEndTank_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.UpdateDamageFX
struct AEndTank_Character_BP_C_UpdateDamageFX_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.BPNotifySetRider
struct AEndTank_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.OnRep_IsRolled
struct AEndTank_Character_BP_C_OnRep_IsRolled_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.BPDoAttack
struct AEndTank_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.CheckAgainstRoll
struct AEndTank_Character_BP_C_CheckAgainstRoll_Params
{
	int                                                Selection;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.BlueprintCanAttack
struct AEndTank_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.BlueprintCanRiderAttack
struct AEndTank_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.UserConstructionScript
struct AEndTank_Character_BP_C_UserConstructionScript_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.ReceiveBeginPlay
struct AEndTank_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.OnDied_Event
struct AEndTank_Character_BP_C_OnDied_Event_Params
{
	class APrimalCharacter*                            DiedCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.AnimNotify_ActivateEnergy
struct AEndTank_Character_BP_C_AnimNotify_ActivateEnergy_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.RollUp
struct AEndTank_Character_BP_C_RollUp_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.Unroll
struct AEndTank_Character_BP_C_Unroll_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.SetRolledSettings
struct AEndTank_Character_BP_C_SetRolledSettings_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.SetUnrolledSettings
struct AEndTank_Character_BP_C_SetUnrolledSettings_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.Multi_UpdateDamageEffects
struct AEndTank_Character_BP_C_Multi_UpdateDamageEffects_Params
{
};

// Function EndTank_Character_BP.EndTank_Character_BP_C.ExecuteUbergraph_EndTank_Character_BP
struct AEndTank_Character_BP_C_ExecuteUbergraph_EndTank_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
