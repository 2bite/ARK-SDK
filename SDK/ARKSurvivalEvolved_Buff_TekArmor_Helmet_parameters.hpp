#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Helmet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPClientDoMultiUse
struct ABuff_TekArmor_Helmet_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPTryMultiUse
struct ABuff_TekArmor_Helmet_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPGetMultiUseEntries
struct ABuff_TekArmor_Helmet_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.ExternalVisorToggle
struct ABuff_TekArmor_Helmet_C_ExternalVisorToggle_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPNotifyOtherBuffActivated
struct ABuff_TekArmor_Helmet_C_BPNotifyOtherBuffActivated_Params
{
	class APrimalBuff**                                OtherBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPNotifyOtherBuffDeactivated
struct ABuff_TekArmor_Helmet_C_BPNotifyOtherBuffDeactivated_Params
{
	class APrimalBuff**                                OtherBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.RefreshFullTekSuitBuff
struct ABuff_TekArmor_Helmet_C_RefreshFullTekSuitBuff_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BuffTickServer
struct ABuff_TekArmor_Helmet_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.DeactivateVisor
struct ABuff_TekArmor_Helmet_C_DeactivateVisor_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.UpdateTintColor
struct ABuff_TekArmor_Helmet_C_UpdateTintColor_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.SetCastedArmorPieceRef
struct ABuff_TekArmor_Helmet_C_SetCastedArmorPieceRef_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.RemoveToggleBuffs
struct ABuff_TekArmor_Helmet_C_RemoveToggleBuffs_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BuffTickClient
struct ABuff_TekArmor_Helmet_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPDeactivated
struct ABuff_TekArmor_Helmet_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BPActivated_1
struct ABuff_TekArmor_Helmet_C_BPActivated_1_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.UserConstructionScript
struct ABuff_TekArmor_Helmet_C_UserConstructionScript_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeIn__FinishedFunc
struct ABuff_TekArmor_Helmet_C_FadeIn__FinishedFunc_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeIn__UpdateFunc
struct ABuff_TekArmor_Helmet_C_FadeIn__UpdateFunc_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeOut__FinishedFunc
struct ABuff_TekArmor_Helmet_C_FadeOut__FinishedFunc_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeOut__UpdateFunc
struct ABuff_TekArmor_Helmet_C_FadeOut__UpdateFunc_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.BackToInitialPress
struct ABuff_TekArmor_Helmet_C_BackToInitialPress_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.OnTogglePressed
struct ABuff_TekArmor_Helmet_C_OnTogglePressed_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.MoveToNextState
struct ABuff_TekArmor_Helmet_C_MoveToNextState_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.SetToggleState
struct ABuff_TekArmor_Helmet_C_SetToggleState_Params
{
	int                                                NewState;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.PlayAnims
struct ABuff_TekArmor_Helmet_C_PlayAnims_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.PlayAnim_Multicast
struct ABuff_TekArmor_Helmet_C_PlayAnim_Multicast_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.PlayAnim_Server
struct ABuff_TekArmor_Helmet_C_PlayAnim_Server_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.HelmetFadeIn
struct ABuff_TekArmor_Helmet_C_HelmetFadeIn_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.HelmetFadeOut
struct ABuff_TekArmor_Helmet_C_HelmetFadeOut_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.FadeInAndOut
struct ABuff_TekArmor_Helmet_C_FadeInAndOut_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.Server_AddPostProcessBuffToPlayer
struct ABuff_TekArmor_Helmet_C_Server_AddPostProcessBuffToPlayer_Params
{
	int                                                BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.Server_RemovePostProcessBuffFromPlayer
struct ABuff_TekArmor_Helmet_C_Server_RemovePostProcessBuffFromPlayer_Params
{
	int                                                BuffIndex;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.Server_RemoveAllPostProcessBuffs
struct ABuff_TekArmor_Helmet_C_Server_RemoveAllPostProcessBuffs_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.RemovePostProcessBuff
struct ABuff_TekArmor_Helmet_C_RemovePostProcessBuff_Params
{
	int                                                index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.ExternalVisorOnOffToggle
struct ABuff_TekArmor_Helmet_C_ExternalVisorOnOffToggle_Params
{
};

// Function Buff_TekArmor_Helmet.Buff_TekArmor_Helmet_C.ExecuteUbergraph_Buff_TekArmor_Helmet
struct ABuff_TekArmor_Helmet_C_ExecuteUbergraph_Buff_TekArmor_Helmet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
