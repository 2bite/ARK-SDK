#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sarco_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Sarco_Character_BP.Sarco_Character_BP_C.BPCanBeBaseForCharacter
struct ASarco_Character_BP_C_BPCanBeBaseForCharacter_Params
{
	class APawn**                                      Pawn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetGravityZScale
struct ASarco_Character_BP_C_BPGetGravityZScale_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.TriggerLungeImpulse
struct ASarco_Character_BP_C_TriggerLungeImpulse_Params
{
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.K2_OnMovementModeChanged
struct ASarco_Character_BP_C_K2_OnMovementModeChanged_Params
{
	TEnumAsByte<EMovementMode>*                        PrevMovementMode;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     PrevCustomMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.BPNotifyBumpedPawn
struct ASarco_Character_BP_C_BPNotifyBumpedPawn_Params
{
	class APrimalCharacter**                           BumpedPawn;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.BPOverrideCharacterNewFallVelocity
struct ASarco_Character_BP_C_BPOverrideCharacterNewFallVelocity_Params
{
	struct FVector                                     InitialVelocity;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FVector                                     Gravity;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.BPGetCrosshairAlpha
struct ASarco_Character_BP_C_BPGetCrosshairAlpha_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.BPAllowCarryCharacter
struct ASarco_Character_BP_C_BPAllowCarryCharacter_Params
{
	class APrimalCharacter**                           checkCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.Compute Allow Carry
struct ASarco_Character_BP_C_Compute_Allow_Carry_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allow;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.BP_GetCustomModifier_RotationRate
struct ASarco_Character_BP_C_BP_GetCustomModifier_RotationRate_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.BPAdjustAttackIndex
struct ASarco_Character_BP_C_BPAdjustAttackIndex_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.ComputeAttackIndex
struct ASarco_Character_BP_C_ComputeAttackIndex_Params
{
	int                                                AttackIndexIn;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                AttackIndexOut;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.UserConstructionScript
struct ASarco_Character_BP_C_UserConstructionScript_Params
{
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_72
struct ASarco_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_72_Params
{
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.InpActEvt_Crouch_K2Node_InputActionEvent_71
struct ASarco_Character_BP_C_InpActEvt_Crouch_K2Node_InputActionEvent_71_Params
{
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_TurnForAttack
struct ASarco_Character_BP_C_AnimNotify_TurnForAttack_Params
{
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.RotateAttack
struct ASarco_Character_BP_C_RotateAttack_Params
{
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_AttackTurnFinished
struct ASarco_Character_BP_C_AnimNotify_AttackTurnFinished_Params
{
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Lunge
struct ASarco_Character_BP_C_AnimNotify_Lunge_Params
{
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.RequestLunge
struct ASarco_Character_BP_C_RequestLunge_Params
{
	class AActor*                                      LungeTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.UpdateCrosshair
struct ASarco_Character_BP_C_UpdateCrosshair_Params
{
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.AnimNotify_Roll
struct ASarco_Character_BP_C_AnimNotify_Roll_Params
{
};

// Function Sarco_Character_BP.Sarco_Character_BP_C.ExecuteUbergraph_Sarco_Character_BP
struct ASarco_Character_BP_C_ExecuteUbergraph_Sarco_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
