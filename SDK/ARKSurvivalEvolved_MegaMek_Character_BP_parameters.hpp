#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaMek_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOnRefreshColorization
struct AMegaMek_Character_BP_C_BPOnRefreshColorization_Params
{
	TArray<struct FLinearColor>                        Colors;                                                   // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPCanCryo
struct AMegaMek_Character_BP_C_BPCanCryo_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.ReceiveTick
struct AMegaMek_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOnDinoCheat
struct AMegaMek_Character_BP_C_BPOnDinoCheat_Params
{
	struct FName*                                      CheatName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSetValue;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
struct AMegaMek_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPHandleControllerInitiatedAttack
struct AMegaMek_Character_BP_C_BPHandleControllerInitiatedAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.SetMegaMekBlinkProgress
struct AMegaMek_Character_BP_C_SetMegaMekBlinkProgress_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.GetTurnInPlaceSpeed
struct AMegaMek_Character_BP_C_GetTurnInPlaceSpeed_Params
{
	float*                                             DefaultSpeed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              NewSpeed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.AllowedToAutoRepair
struct AMegaMek_Character_BP_C_AllowedToAutoRepair_Params
{
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              CooldownTimeRemaining;                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOverrideHurtAnim
struct AMegaMek_Character_BP_C_BPOverrideHurtAnim_Params
{
	float*                                             DamageTaken;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent                                DamageEvent;                                              // (Parm, OutParm, ReferenceParm)
	class APawn**                                      PawnInstigator;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsLocalPath;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PointDamageLocation;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    PointDamageHitNormal;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPOverrideGetAttackAnimationIndex
struct AMegaMek_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UAnimMontage*>                        AnimationArray;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.BPAdjustDamage
struct AMegaMek_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.UserConstructionScript
struct AMegaMek_Character_BP_C_UserConstructionScript_Params
{
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.MegaMekBlinkIn__FinishedFunc
struct AMegaMek_Character_BP_C_MegaMekBlinkIn__FinishedFunc_Params
{
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.MegaMekBlinkIn__UpdateFunc
struct AMegaMek_Character_BP_C_MegaMekBlinkIn__UpdateFunc_Params
{
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.SetStunned
struct AMegaMek_Character_BP_C_SetStunned_Params
{
	float                                              StunDuration;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.SetForceKill
struct AMegaMek_Character_BP_C_SetForceKill_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.ReceiveBeginPlay
struct AMegaMek_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.MultiReplayIntro
struct AMegaMek_Character_BP_C_MultiReplayIntro_Params
{
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.MultiSetBlinkProgress
struct AMegaMek_Character_BP_C_MultiSetBlinkProgress_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Forward;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.ClientNotifySelfDestruct
struct AMegaMek_Character_BP_C_ClientNotifySelfDestruct_Params
{
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.StartSelfDestructNow
struct AMegaMek_Character_BP_C_StartSelfDestructNow_Params
{
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.StartSelfDestruct
struct AMegaMek_Character_BP_C_StartSelfDestruct_Params
{
};

// Function MegaMek_Character_BP.MegaMek_Character_BP_C.ExecuteUbergraph_MegaMek_Character_BP
struct AMegaMek_Character_BP_C_ExecuteUbergraph_MegaMek_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
