#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mantis_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mantis_Character_BP.Mantis_Character_BP_C.BPModifyForwardDirectionInput
struct AMantis_Character_BP_C_BPModifyForwardDirectionInput_Params
{
	struct FVector                                     directionInput;                                           // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.BPTimerNonDedicated
struct AMantis_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.Update Mantis State
struct AMantis_Character_BP_C_Update_Mantis_State_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.BPTimerServer
struct AMantis_Character_BP_C_BPTimerServer_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.BPShouldLimitForwardDirection
struct AMantis_Character_BP_C_BPShouldLimitForwardDirection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.BPCanNotifyTeamAggroAI
struct AMantis_Character_BP_C_BPCanNotifyTeamAggroAI_Params
{
	class APrimalDinoCharacter**                       Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.Start Leap Attack
struct AMantis_Character_BP_C_Start_Leap_Attack_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.CheckLeapAttackEnd
struct AMantis_Character_BP_C_CheckLeapAttackEnd_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintOverrideHarvestDamageType
struct AMantis_Character_BP_C_BlueprintOverrideHarvestDamageType_Params
{
	float                                              OutHarvestDamageMultiplier;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.BPNotifyBumpedPawn
struct AMantis_Character_BP_C_BPNotifyBumpedPawn_Params
{
	class APrimalCharacter**                           BumpedPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.AddWeaponDamage
struct AMantis_Character_BP_C_AddWeaponDamage_Params
{
	float                                              OriginalDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OriginalDamageType;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ConsumeWeaponDurability;                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamage;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.OnRep_bDoingLeapAttack
struct AMantis_Character_BP_C_OnRep_bDoingLeapAttack_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.FinishLeapAttack
struct AMantis_Character_BP_C_FinishLeapAttack_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.OnLanded
struct AMantis_Character_BP_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AMantis_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintAdjustOutputDamage
struct AMantis_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.UserConstructionScript
struct AMantis_Character_BP_C_UserConstructionScript_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.PlayLeapAttackHitFX
struct AMantis_Character_BP_C_PlayLeapAttackHitFX_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
struct AMantis_Character_BP_C_BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.ReceiveBeginPlay
struct AMantis_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.MulticastApplyLeapDownForce
struct AMantis_Character_BP_C_MulticastApplyLeapDownForce_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.StartLeapLoopSound
struct AMantis_Character_BP_C_StartLeapLoopSound_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.AnimNotify_CycleWeights
struct AMantis_Character_BP_C_AnimNotify_CycleWeights_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.AnimNotify_GroundLanding
struct AMantis_Character_BP_C_AnimNotify_GroundLanding_Params
{
};

// Function Mantis_Character_BP.Mantis_Character_BP_C.ExecuteUbergraph_Mantis_Character_BP
struct AMantis_Character_BP_C_ExecuteUbergraph_Mantis_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
