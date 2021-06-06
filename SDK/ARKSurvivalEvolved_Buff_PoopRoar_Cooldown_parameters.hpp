#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PoopRoar_Cooldown_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PoopRoar_Cooldown.Buff_PoopRoar_Cooldown_C.BPCheckPreventInput
struct ABuff_PoopRoar_Cooldown_C_BPCheckPreventInput_Params
{
	TEnumAsByte<EPrimalCharacterInputType>*            inputType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PoopRoar_Cooldown.Buff_PoopRoar_Cooldown_C.UserConstructionScript
struct ABuff_PoopRoar_Cooldown_C_UserConstructionScript_Params
{
};

// Function Buff_PoopRoar_Cooldown.Buff_PoopRoar_Cooldown_C.ExecuteUbergraph_Buff_PoopRoar_Cooldown
struct ABuff_PoopRoar_Cooldown_C_ExecuteUbergraph_Buff_PoopRoar_Cooldown_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
