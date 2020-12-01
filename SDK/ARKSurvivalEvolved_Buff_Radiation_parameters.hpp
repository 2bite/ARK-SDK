#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Radiation_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Radiation.Buff_Radiation_C.BuffTickServer
struct ABuff_Radiation_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Radiation.Buff_Radiation_C.UserConstructionScript
struct ABuff_Radiation_C_UserConstructionScript_Params
{
};

// Function Buff_Radiation.Buff_Radiation_C.ExecuteUbergraph_Buff_Radiation
struct ABuff_Radiation_C_ExecuteUbergraph_Buff_Radiation_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
