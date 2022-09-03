#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RiderFlyingWindWoosh_Trope_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.UpdateSFX
struct ABuff_RiderFlyingWindWoosh_Trope_C_UpdateSFX_Params
{
};

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.GetBuffType
struct ABuff_RiderFlyingWindWoosh_Trope_C_GetBuffType_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.GetBuffDescription
struct ABuff_RiderFlyingWindWoosh_Trope_C_GetBuffDescription_Params
{
	struct FStatusValueModifierDescription             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.BPGetHUDElements
struct ABuff_RiderFlyingWindWoosh_Trope_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.AllowPostProcessEffect
struct ABuff_RiderFlyingWindWoosh_Trope_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.GetBuffPostprocessIntensity
struct ABuff_RiderFlyingWindWoosh_Trope_C_GetBuffPostprocessIntensity_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.BPCustomAllowAddBuff
struct ABuff_RiderFlyingWindWoosh_Trope_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.BuffTickClient
struct ABuff_RiderFlyingWindWoosh_Trope_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.UserConstructionScript
struct ABuff_RiderFlyingWindWoosh_Trope_C_UserConstructionScript_Params
{
};

// Function Buff_RiderFlyingWindWoosh_Trope.Buff_RiderFlyingWindWoosh_Trope_C.ExecuteUbergraph_Buff_RiderFlyingWindWoosh_Trope
struct ABuff_RiderFlyingWindWoosh_Trope_C_ExecuteUbergraph_Buff_RiderFlyingWindWoosh_Trope_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
