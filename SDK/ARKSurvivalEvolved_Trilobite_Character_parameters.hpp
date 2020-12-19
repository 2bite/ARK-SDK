#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trilobite_Character_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Trilobite_Character.Trilobite_Character_C.BP_ForceAllowAddBuff
struct ATrilobite_Character_C_BP_ForceAllowAddBuff_Params
{
	class UClass**                                     BuffClass;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Trilobite_Character.Trilobite_Character_C.UserConstructionScript
struct ATrilobite_Character_C_UserConstructionScript_Params
{
};

// Function Trilobite_Character.Trilobite_Character_C.ExecuteUbergraph_Trilobite_Character
struct ATrilobite_Character_C_ExecuteUbergraph_Trilobite_Character_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
