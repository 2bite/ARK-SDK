#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StriderHackingParent_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Recieved Input
struct ABuff_StriderHackingParent_C_Recieved_Input_Params
{
	TEnumAsByte<EPrimalCharacterInputType>             input_type;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               from_player_input;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.All Beats Succeeded
struct ABuff_StriderHackingParent_C_All_Beats_Succeeded_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ReceiveBeginPlay
struct ABuff_StriderHackingParent_C_ReceiveBeginPlay_Params
{
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.AllowPostProcessEffect
struct ABuff_StriderHackingParent_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Sync HUD Widget
struct ABuff_StriderHackingParent_C_Sync_HUD_Widget_Params
{
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Notify Toggle HUD Widget
struct ABuff_StriderHackingParent_C_Notify_Toggle_HUD_Widget_Params
{
	bool                                               HUD_Hidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Destroy HUD Widget
struct ABuff_StriderHackingParent_C_Destroy_HUD_Widget_Params
{
	bool                                               DestroyNow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.Setup HUD Widget
struct ABuff_StriderHackingParent_C_Setup_HUD_Widget_Params
{
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateDrumEffectVisibility
struct ABuff_StriderHackingParent_C_UpdateDrumEffectVisibility_Params
{
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooLate
struct ABuff_StriderHackingParent_C_IsBeatTooLate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.IsBeatTooSoon
struct ABuff_StriderHackingParent_C_IsBeatTooSoon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPGetHUDElements
struct ABuff_StriderHackingParent_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ActivateBuff
struct ABuff_StriderHackingParent_C_ActivateBuff_Params
{
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UpdateBuffTimer
struct ABuff_StriderHackingParent_C_UpdateBuffTimer_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               from_player_trigger;                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPOnInputEvent
struct ABuff_StriderHackingParent_C_BPOnInputEvent_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.GetWeaponMontage
struct ABuff_StriderHackingParent_C_GetWeaponMontage_Params
{
	TEnumAsByte<EPrimalCharacterInputType>             index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.PlayWeaponMontage
struct ABuff_StriderHackingParent_C_PlayWeaponMontage_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isnt_from_player_input;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Started;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPCheckPreventInput
struct ABuff_StriderHackingParent_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPDeactivated
struct ABuff_StriderHackingParent_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPSetupForInstigator
struct ABuff_StriderHackingParent_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BPForceCameraStyle
struct ABuff_StriderHackingParent_C_BPForceCameraStyle_Params
{
	class APrimalCharacter**                           ForViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraStyle>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.UserConstructionScript
struct ABuff_StriderHackingParent_C_UserConstructionScript_Params
{
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ServerPlayWeaponMontage
struct ABuff_StriderHackingParent_C_ServerPlayWeaponMontage_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isnt_from_player_input;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientPlayDrumLoop
struct ABuff_StriderHackingParent_C_ClientPlayDrumLoop_Params
{
	bool                                               Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ClientUpdateDrumRadius
struct ABuff_StriderHackingParent_C_ClientUpdateDrumRadius_Params
{
	bool                                               NewVis;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.BuffTickClient
struct ABuff_StriderHackingParent_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.drum loop finished
struct ABuff_StriderHackingParent_C_drum_loop_finished_Params
{
};

// Function Buff_StriderHackingParent.Buff_StriderHackingParent_C.ExecuteUbergraph_Buff_StriderHackingParent
struct ABuff_StriderHackingParent_C_ExecuteUbergraph_Buff_StriderHackingParent_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
