#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossNavigation_TargetPoint_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C.CanAccessFromPoint
struct AEndBossNavigation_TargetPoint_C_CanAccessFromPoint_Params
{
	class AActor*                                      fromPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canAccessFrom;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C.UserConstructionScript
struct AEndBossNavigation_TargetPoint_C_UserConstructionScript_Params
{
};

// Function EndBossNavigation_TargetPoint.EndBossNavigation_TargetPoint_C.ExecuteUbergraph_EndBossNavigation_TargetPoint
struct AEndBossNavigation_TargetPoint_C_ExecuteUbergraph_EndBossNavigation_TargetPoint_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
