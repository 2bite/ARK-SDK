#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Rooted_ForestKaiju_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BuffTickClient
struct ABuff_Rooted_ForestKaiju_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPSetupForInstigator
struct ABuff_Rooted_ForestKaiju_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPCheckPreventInput
struct ABuff_Rooted_ForestKaiju_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPDeactivated
struct ABuff_Rooted_ForestKaiju_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.BPActivated
struct ABuff_Rooted_ForestKaiju_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.UserConstructionScript
struct ABuff_Rooted_ForestKaiju_C_UserConstructionScript_Params
{
};

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.Multi_PreventMovementInput
struct ABuff_Rooted_ForestKaiju_C_Multi_PreventMovementInput_Params
{
	bool                                               Prevent;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.Multi_SetScale
struct ABuff_Rooted_ForestKaiju_C_Multi_SetScale_Params
{
	float                                              Scaler;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.DelayedSetScale
struct ABuff_Rooted_ForestKaiju_C_DelayedSetScale_Params
{
	float                                              Scale;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Rooted_ForestKaiju.Buff_Rooted_ForestKaiju_C.ExecuteUbergraph_Buff_Rooted_ForestKaiju
struct ABuff_Rooted_ForestKaiju_C_ExecuteUbergraph_Buff_Rooted_ForestKaiju_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
