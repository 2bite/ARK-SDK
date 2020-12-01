#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_BossTributeEX_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_BossTributeEX.PrimalItem_BossTributeEX_C.BPAllowCrafting
struct UPrimalItem_BossTributeEX_C_BPAllowCrafting_Params
{
	class AShooterPlayerController**                   ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItem_BossTributeEX.PrimalItem_BossTributeEX_C.ExecuteUbergraph_PrimalItem_BossTributeEX
struct UPrimalItem_BossTributeEX_C_ExecuteUbergraph_PrimalItem_BossTributeEX_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
