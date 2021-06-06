#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventStaminaRegen_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.BPSetupForInstigator
struct ABuff_PreventStaminaRegen_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.UserConstructionScript
struct ABuff_PreventStaminaRegen_C_UserConstructionScript_Params
{
};

// Function Buff_PreventStaminaRegen.Buff_PreventStaminaRegen_C.ExecuteUbergraph_Buff_PreventStaminaRegen
struct ABuff_PreventStaminaRegen_C_ExecuteUbergraph_Buff_PreventStaminaRegen_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
