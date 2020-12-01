#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventInput_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PreventInput.Buff_PreventInput_C.BPCheckPreventInput
struct ABuff_PreventInput_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PreventInput.Buff_PreventInput_C.UserConstructionScript
struct ABuff_PreventInput_C_UserConstructionScript_Params
{
};

// Function Buff_PreventInput.Buff_PreventInput_C.ExecuteUbergraph_Buff_PreventInput
struct ABuff_PreventInput_C_ExecuteUbergraph_Buff_PreventInput_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
