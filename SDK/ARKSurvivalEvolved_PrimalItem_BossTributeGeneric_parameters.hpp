#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTributeGeneric_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C.BPAllowCrafting
struct UPrimalItem_BossTributeGeneric_C_BPAllowCrafting_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_BossTributeGeneric.PrimalItem_BossTributeGeneric_C.ExecuteUbergraph_PrimalItem_BossTributeGeneric
struct UPrimalItem_BossTributeGeneric_C_ExecuteUbergraph_PrimalItem_BossTributeGeneric_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
