#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_EndBossMorph_Dissolve_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.Dissolve
struct ABuff_EndBossMorph_Dissolve_C_Dissolve_Params
{
	float                                              DissolveRate;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DissolveParam;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               UseOverrideDeltaTime;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OverrideDeltaTime;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastPercentValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.Set Dissolve Percent
struct ABuff_EndBossMorph_Dissolve_C_Set_Dissolve_Percent_Params
{
	float                                              NewPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DissolveParameter;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.Additional Set Dissolve
struct ABuff_EndBossMorph_Dissolve_C_Additional_Set_Dissolve_Params
{
	float                                              NewPercent;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DissolveParameterName;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.AdditionalDissolveFunc
struct ABuff_EndBossMorph_Dissolve_C_AdditionalDissolveFunc_Params
{
	class UObject*                                     Object;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DissolveParamName;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ReceiveDestroyed
struct ABuff_EndBossMorph_Dissolve_C_ReceiveDestroyed_Params
{
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.BPDeactivated
struct ABuff_EndBossMorph_Dissolve_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.UpdateAdditionalParameters
struct ABuff_EndBossMorph_Dissolve_C_UpdateAdditionalParameters_Params
{
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.GetOwningPrimalCharacter
struct ABuff_EndBossMorph_Dissolve_C_GetOwningPrimalCharacter_Params
{
	class APrimalCharacter*                            Owner;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.UserConstructionScript
struct ABuff_EndBossMorph_Dissolve_C_UserConstructionScript_Params
{
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ReceiveBeginPlay
struct ABuff_EndBossMorph_Dissolve_C_ReceiveBeginPlay_Params
{
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ReceiveTick
struct ABuff_EndBossMorph_Dissolve_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_EndBossMorph_Dissolve.Buff_EndBossMorph_Dissolve_C.ExecuteUbergraph_Buff_EndBossMorph_Dissolve
struct ABuff_EndBossMorph_Dissolve_C_ExecuteUbergraph_Buff_EndBossMorph_Dissolve_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
