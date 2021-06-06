#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventInputMolerat_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPDeactivated
struct ABuff_PreventInputMolerat_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPSetupForInstigator
struct ABuff_PreventInputMolerat_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.BPPreventFirstPerson
struct ABuff_PreventInputMolerat_C_BPPreventFirstPerson_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.UserConstructionScript
struct ABuff_PreventInputMolerat_C_UserConstructionScript_Params
{
};

// Function Buff_PreventInputMolerat.Buff_PreventInputMolerat_C.ExecuteUbergraph_Buff_PreventInputMolerat
struct ABuff_PreventInputMolerat_C_ExecuteUbergraph_Buff_PreventInputMolerat_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
