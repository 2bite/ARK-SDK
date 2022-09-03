#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Flashbang_Cooldown_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.BPPreSetupForInstigator
struct ABuff_Flashbang_Cooldown_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.BPCheckPreventInput
struct ABuff_Flashbang_Cooldown_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.UserConstructionScript
struct ABuff_Flashbang_Cooldown_C_UserConstructionScript_Params
{
};

// Function Buff_Flashbang_Cooldown.Buff_Flashbang_Cooldown_C.ExecuteUbergraph_Buff_Flashbang_Cooldown
struct ABuff_Flashbang_Cooldown_C_ExecuteUbergraph_Buff_Flashbang_Cooldown_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
