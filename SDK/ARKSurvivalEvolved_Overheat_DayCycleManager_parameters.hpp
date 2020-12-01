#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Overheat_DayCycleManager_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.Is SuperheatActive
struct AOverheat_DayCycleManager_C_Is_SuperheatActive_Params
{
	bool                                               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.UserConstructionScript
struct AOverheat_DayCycleManager_C_UserConstructionScript_Params
{
};

// Function Overheat_DayCycleManager.Overheat_DayCycleManager_C.ExecuteUbergraph_Overheat_DayCycleManager
struct AOverheat_DayCycleManager_C_ExecuteUbergraph_Overheat_DayCycleManager_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
