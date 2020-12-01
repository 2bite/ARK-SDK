#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ParaWarningAlert_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.Add Enemy Indicators
struct ABuff_ParaWarningAlert_C_Add_Enemy_Indicators_Params
{
	TArray<struct FVector>                             Enemies;                                                  // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.BPActivated
struct ABuff_ParaWarningAlert_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.UserConstructionScript
struct ABuff_ParaWarningAlert_C_UserConstructionScript_Params
{
};

// Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ClientAddEnemyIndicators
struct ABuff_ParaWarningAlert_C_ClientAddEnemyIndicators_Params
{
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Buff_ParaWarningAlert.Buff_ParaWarningAlert_C.ExecuteUbergraph_Buff_ParaWarningAlert
struct ABuff_ParaWarningAlert_C_ExecuteUbergraph_Buff_ParaWarningAlert_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
