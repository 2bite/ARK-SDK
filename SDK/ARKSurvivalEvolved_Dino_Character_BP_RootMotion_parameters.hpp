#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_RootMotion_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.WantsLocomotionTransition
struct ADino_Character_BP_RootMotion_C_WantsLocomotionTransition_Params
{
	bool                                               WantsTransition;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.GetMovementMontage
struct ADino_Character_BP_RootMotion_C_GetMovementMontage_Params
{
	TEnumAsByte<ERootMotionMovementMode>               Mode;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.IsLocomotionBlocked
struct ADino_Character_BP_RootMotion_C_IsLocomotionBlocked_Params
{
	bool                                               bLocked;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.TickLocomotion
struct ADino_Character_BP_RootMotion_C_TickLocomotion_Params
{
};

// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.UserConstructionScript
struct ADino_Character_BP_RootMotion_C_UserConstructionScript_Params
{
};

// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.ReceiveTick
struct ADino_Character_BP_RootMotion_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.DeltaBlockTransition
struct ADino_Character_BP_RootMotion_C_DeltaBlockTransition_Params
{
	int                                                Delta;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.AnimNotify_LocomotionDone
struct ADino_Character_BP_RootMotion_C_AnimNotify_LocomotionDone_Params
{
};

// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.ExecuteUbergraph_Dino_Character_BP_RootMotion
struct ADino_Character_BP_RootMotion_C_ExecuteUbergraph_Dino_Character_BP_RootMotion_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
