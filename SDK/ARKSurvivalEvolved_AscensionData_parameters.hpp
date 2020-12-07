#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AscensionData_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AscensionData.AscensionData_C.GetData
struct AAscensionData_C_GetData_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam1;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               NewParam2;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function AscensionData.AscensionData_C.SaveData
struct AAscensionData_C_SaveData_Params
{
	int                                                BossLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AscensionData.AscensionData_C.UserConstructionScript
struct AAscensionData_C_UserConstructionScript_Params
{
};

// Function AscensionData.AscensionData_C.ExecuteUbergraph_AscensionData
struct AAscensionData_C_ExecuteUbergraph_AscensionData_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
