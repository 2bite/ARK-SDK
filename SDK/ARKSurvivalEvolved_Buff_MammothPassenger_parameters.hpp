#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MammothPassenger_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MammothPassenger.Buff_MammothPassenger_C.BPForceCameraStyle
struct ABuff_MammothPassenger_C_BPForceCameraStyle_Params
{
	class APrimalCharacter**                           ForViewTarget;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECameraStyle>                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_MammothPassenger.Buff_MammothPassenger_C.UserConstructionScript
struct ABuff_MammothPassenger_C_UserConstructionScript_Params
{
};

// Function Buff_MammothPassenger.Buff_MammothPassenger_C.ExecuteUbergraph_Buff_MammothPassenger
struct ABuff_MammothPassenger_C_ExecuteUbergraph_Buff_MammothPassenger_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
