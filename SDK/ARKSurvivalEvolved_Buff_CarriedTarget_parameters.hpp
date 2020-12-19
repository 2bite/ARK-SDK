#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CarriedTarget_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.Sruggle
struct ABuff_CarriedTarget_C_Sruggle_Params
{
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.Validate
struct ABuff_CarriedTarget_C_Validate_Params
{
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.SetIsHostileBuff
struct ABuff_CarriedTarget_C_SetIsHostileBuff_Params
{
	bool                                               NewSetting;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.GetBuffDescription
struct ABuff_CarriedTarget_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.UpdateEquipmentDOT
struct ABuff_CarriedTarget_C_UpdateEquipmentDOT_Params
{
	float                                              B;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.UpdateStruggle
struct ABuff_CarriedTarget_C_UpdateStruggle_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPActivated
struct ABuff_CarriedTarget_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPGetHUDElements
struct ABuff_CarriedTarget_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BuffTickServer
struct ABuff_CarriedTarget_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPHandleOnStartAltFire
struct ABuff_CarriedTarget_C_BPHandleOnStartAltFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.TryStruggle
struct ABuff_CarriedTarget_C_TryStruggle_Params
{
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.PreventJump
struct ABuff_CarriedTarget_C_PreventJump_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPHandleOnStartFire
struct ABuff_CarriedTarget_C_BPHandleOnStartFire_Params
{
	bool*                                              bFromGamepad;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.GetBuffPostprocessIntensity
struct ABuff_CarriedTarget_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.AllowPostProcessEffect
struct ABuff_CarriedTarget_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPDeactivated
struct ABuff_CarriedTarget_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.BPSetupForInstigator
struct ABuff_CarriedTarget_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.UserConstructionScript
struct ABuff_CarriedTarget_C_UserConstructionScript_Params
{
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.ServerRequestStruggle
struct ABuff_CarriedTarget_C_ServerRequestStruggle_Params
{
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.ClientOnStruggle
struct ABuff_CarriedTarget_C_ClientOnStruggle_Params
{
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.MultiOnArmorDurabilityDamage
struct ABuff_CarriedTarget_C_MultiOnArmorDurabilityDamage_Params
{
};

// Function Buff_CarriedTarget.Buff_CarriedTarget_C.ExecuteUbergraph_Buff_CarriedTarget
struct ABuff_CarriedTarget_C_ExecuteUbergraph_Buff_CarriedTarget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
