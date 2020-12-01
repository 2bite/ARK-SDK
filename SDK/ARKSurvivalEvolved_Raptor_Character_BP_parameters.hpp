#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Raptor_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Raptor_Character_BP.Raptor_Character_BP_C.IsPounceTarget
struct ARaptor_Character_BP_C_IsPounceTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceTargetDodged
struct ARaptor_Character_BP_C_OnPounceTargetDodged_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.OnPinnedBuffEnded
struct ARaptor_Character_BP_C_OnPinnedBuffEnded_Params
{
	class APrimalCharacter*                            BuffTarget;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounceFn
struct ARaptor_Character_BP_C_PushbackAfterPounceFn_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.HasPouncePreventionBuff
struct ARaptor_Character_BP_C_HasPouncePreventionBuff_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.Add Dodge Buff to PounceTarget
struct ARaptor_Character_BP_C_Add_Dodge_Buff_to_PounceTarget_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.BPDoAttack
struct ARaptor_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.Try Pounce Target
struct ARaptor_Character_BP_C_Try_Pounce_Target_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.SetCurrentTarget
struct ARaptor_Character_BP_C_SetCurrentTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToGround
struct ARaptor_Character_BP_C_InterpToGround_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.OnPounceLand
struct ARaptor_Character_BP_C_OnPounceLand_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.Set Amount Of Time to Pin
struct ARaptor_Character_BP_C_Set_Amount_Of_Time_to_Pin_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanAttack
struct ARaptor_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.CanJumpInternal
struct ARaptor_Character_BP_C_CanJumpInternal_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.ApplyPackBuff
struct ARaptor_Character_BP_C_ApplyPackBuff_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.InterpToCharacter
struct ARaptor_Character_BP_C_InterpToCharacter_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.OnRep_bCanMaul
struct ARaptor_Character_BP_C_OnRep_bCanMaul_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintCanRiderAttack
struct ARaptor_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.BPTimerServer
struct ARaptor_Character_BP_C_BPTimerServer_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.CheckForPounceTarget
struct ARaptor_Character_BP_C_CheckForPounceTarget_Params
{
	class APrimalCharacter*                            RetTarget;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.PlayRaptorIdle
struct ARaptor_Character_BP_C_PlayRaptorIdle_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeTarget
struct ARaptor_Character_BP_C_ImmobilizeTarget_Params
{
	class APrimalCharacter*                            Char;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bImmobilize;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct ARaptor_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.UserConstructionScript
struct ARaptor_Character_BP_C_UserConstructionScript_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPounceIdle
struct ARaptor_Character_BP_C_ClearPounceIdle_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.ClearPouncing
struct ARaptor_Character_BP_C_ClearPouncing_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.WarpToCharacter
struct ARaptor_Character_BP_C_WarpToCharacter_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.ImmobilizeWithDelay
struct ARaptor_Character_BP_C_ImmobilizeWithDelay_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.ClearInterpToTimer
struct ARaptor_Character_BP_C_ClearInterpToTimer_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.PreventCharacterMovementInput
struct ARaptor_Character_BP_C_PreventCharacterMovementInput_Params
{
	bool                                               bPrevent;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.SetBuffDeactivateTime
struct ARaptor_Character_BP_C_SetBuffDeactivateTime_Params
{
	class APrimalBuff*                                 PrimalBuff;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.LandDelay
struct ARaptor_Character_BP_C_LandDelay_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.MovePouncedDino
struct ARaptor_Character_BP_C_MovePouncedDino_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.ForceMoveRider
struct ARaptor_Character_BP_C_ForceMoveRider_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.PushbackAfterPounce
struct ARaptor_Character_BP_C_PushbackAfterPounce_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.Do RandomPackRoar
struct ARaptor_Character_BP_C_Do_RandomPackRoar_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.DrawDebugInfo
struct ARaptor_Character_BP_C_DrawDebugInfo_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.CheckInterpToLocations
struct ARaptor_Character_BP_C_CheckInterpToLocations_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.ServerStartPouncing
struct ARaptor_Character_BP_C_ServerStartPouncing_Params
{
};

// Function Raptor_Character_BP.Raptor_Character_BP_C.ExecuteUbergraph_Raptor_Character_BP
struct ARaptor_Character_BP_C_ExecuteUbergraph_Raptor_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
