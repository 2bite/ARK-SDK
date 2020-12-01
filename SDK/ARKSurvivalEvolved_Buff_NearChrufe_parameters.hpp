#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NearChrufe_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_NearChrufe.Buff_NearChrufe_C.BPDeactivated
struct ABuff_NearChrufe_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NearChrufe.Buff_NearChrufe_C.BuffTickClient
struct ABuff_NearChrufe_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NearChrufe.Buff_NearChrufe_C.Update Heat Level
struct ABuff_NearChrufe_C_Update_Heat_Level_Params
{
	int                                                Increased_Heat_level;                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_NearChrufe.Buff_NearChrufe_C.UserConstructionScript
struct ABuff_NearChrufe_C_UserConstructionScript_Params
{
};

// Function Buff_NearChrufe.Buff_NearChrufe_C.ExecuteUbergraph_Buff_NearChrufe
struct ABuff_NearChrufe_C_ExecuteUbergraph_Buff_NearChrufe_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
