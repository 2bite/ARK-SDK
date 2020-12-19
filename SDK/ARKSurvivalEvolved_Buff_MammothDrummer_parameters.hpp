#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MammothDrummer_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.PlayDrumLoop
struct ABuff_MammothDrummer_C_PlayDrumLoop_Params
{
	bool                                               Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientManageDrumBeat
struct ABuff_MammothDrummer_C_ClientManageDrumBeat_Params
{
	TEnumAsByte<EPrimalCharacterInputType>             InputPin;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BuffTickClient
struct ABuff_MammothDrummer_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.Sync HUD Widget
struct ABuff_MammothDrummer_C_Sync_HUD_Widget_Params
{
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.Notify Toggle HUD Widget
struct ABuff_MammothDrummer_C_Notify_Toggle_HUD_Widget_Params
{
	bool                                               HUD_Hidden;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.Destroy HUD Widget
struct ABuff_MammothDrummer_C_Destroy_HUD_Widget_Params
{
	bool                                               DestroyNow;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.Setup HUD Widget
struct ABuff_MammothDrummer_C_Setup_HUD_Widget_Params
{
	class AActor*                                      Instigator;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.UpdateDrumEffectVisibility
struct ABuff_MammothDrummer_C_UpdateDrumEffectVisibility_Params
{
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.IsBeatTooLate
struct ABuff_MammothDrummer_C_IsBeatTooLate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.IsBeatTooSoon
struct ABuff_MammothDrummer_C_IsBeatTooSoon_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPGetHUDElements
struct ABuff_MammothDrummer_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ActivateBuff
struct ABuff_MammothDrummer_C_ActivateBuff_Params
{
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerManageDrumBeat
struct ABuff_MammothDrummer_C_ServerManageDrumBeat_Params
{
	int                                                DrumIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TooSoon;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TooLate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPOnInputEvent
struct ABuff_MammothDrummer_C_BPOnInputEvent_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.GetWeaponMontage
struct ABuff_MammothDrummer_C_GetWeaponMontage_Params
{
	TEnumAsByte<EPrimalCharacterInputType>             index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.PlayWeaponMontage
struct ABuff_MammothDrummer_C_PlayWeaponMontage_Params
{
	TEnumAsByte<EPrimalCharacterInputType>             index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Started;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPDeactivated
struct ABuff_MammothDrummer_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPSetupForInstigator
struct ABuff_MammothDrummer_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.BPForceCameraStyle
struct ABuff_MammothDrummer_C_BPForceCameraStyle_Params
{
	class APrimalCharacter**                           ForViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraStyle>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.UserConstructionScript
struct ABuff_MammothDrummer_C_UserConstructionScript_Params
{
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerPlayWeaponMontage
struct ABuff_MammothDrummer_C_ServerPlayWeaponMontage_Params
{
	TEnumAsByte<EPrimalCharacterInputType>             index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TooSoon;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TooLate;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientPlayDrumLoop
struct ABuff_MammothDrummer_C_ClientPlayDrumLoop_Params
{
	bool                                               Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientUpdateDrumRadius
struct ABuff_MammothDrummer_C_ClientUpdateDrumRadius_Params
{
	bool                                               NewVis;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ClientPlaySuccessHitVFX
struct ABuff_MammothDrummer_C_ClientPlaySuccessHitVFX_Params
{
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ServerActivateBuff
struct ABuff_MammothDrummer_C_ServerActivateBuff_Params
{
	bool                                               DoActivate;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MammothDrummer.Buff_MammothDrummer_C.ExecuteUbergraph_Buff_MammothDrummer
struct ABuff_MammothDrummer_C_ExecuteUbergraph_Buff_MammothDrummer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
