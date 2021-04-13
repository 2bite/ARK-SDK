#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoTekHelmet_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsElectricalStormActive
struct ABuff_DinoTekHelmet_Base_C_IsElectricalStormActive_Params
{
	bool                                               Return;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetSocketClampDelta
struct ABuff_DinoTekHelmet_Base_C_GetSocketClampDelta_Params
{
	float                                              OutSocketClampDelta;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPSetupForInstigator
struct ABuff_DinoTekHelmet_Base_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BPDrawBuffStatusHUD
struct ABuff_DinoTekHelmet_Base_C_BPDrawBuffStatusHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             XPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             YPos;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             ScaleMult;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.IsAllowedToFire
struct ABuff_DinoTekHelmet_Base_C_IsAllowedToFire_Params
{
	struct FVector                                     AimAtLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerSpawnAtLoc;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.HideBuffFromHUD
struct ABuff_DinoTekHelmet_Base_C_HideBuffFromHUD_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.SetTargeting
struct ABuff_DinoTekHelmet_Base_C_SetTargeting_Params
{
	bool                                               bTargetingEnabled;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.BuffTickClient
struct ABuff_DinoTekHelmet_Base_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.LocalDoAttack
struct ABuff_DinoTekHelmet_Base_C_LocalDoAttack_Params
{
	bool                                               bDidAttack;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PlayItemAnim
struct ABuff_DinoTekHelmet_Base_C_PlayItemAnim_Params
{
	class UAnimMontage*                                PlayAnim;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.GetTekSaddleItem
struct ABuff_DinoTekHelmet_Base_C_GetTekSaddleItem_Params
{
	class UPrimalItem*                                 TekSaddleItem;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.UserConstructionScript
struct ABuff_DinoTekHelmet_Base_C_UserConstructionScript_Params
{
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ActivateHelmet
struct ABuff_DinoTekHelmet_Base_C_ActivateHelmet_Params
{
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DeactivateHelmet
struct ABuff_DinoTekHelmet_Base_C_DeactivateHelmet_Params
{
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.PressedAltFire
struct ABuff_DinoTekHelmet_Base_C_PressedAltFire_Params
{
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoServerActivateHelmet
struct ABuff_DinoTekHelmet_Base_C_DoServerActivateHelmet_Params
{
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoServerDeactivateHelmet
struct ABuff_DinoTekHelmet_Base_C_DoServerDeactivateHelmet_Params
{
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ServerDoAttack
struct ABuff_DinoTekHelmet_Base_C_ServerDoAttack_Params
{
	struct FVector                                     AimAtLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerSpawnAtLoc;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.DoAttack
struct ABuff_DinoTekHelmet_Base_C_DoAttack_Params
{
	struct FVector                                     AimAtLoc;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLeftSide;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ServerSpawnAtLoc;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.CheckForItem
struct ABuff_DinoTekHelmet_Base_C_CheckForItem_Params
{
};

// Function Buff_DinoTekHelmet_Base.Buff_DinoTekHelmet_Base_C.ExecuteUbergraph_Buff_DinoTekHelmet_Base
struct ABuff_DinoTekHelmet_Base_C_ExecuteUbergraph_Buff_DinoTekHelmet_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
