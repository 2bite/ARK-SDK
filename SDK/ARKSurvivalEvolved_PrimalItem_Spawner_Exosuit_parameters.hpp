#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_Exosuit_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.BPCanUse
struct UPrimalItem_Spawner_Exosuit_C_BPCanUse_Params
{
	bool*                                              bIgnoreCooldown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.GetStatDisplayString
struct UPrimalItem_Spawner_Exosuit_C_GetStatDisplayString_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>*          Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StatConvertMapIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      StatDisplay;                                              // (Parm, OutParm, ZeroConstructor)
	class FString                                      ValueDisplay;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ShowInTooltip;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_Spawner_Exosuit.PrimalItem_Spawner_Exosuit_C.ExecuteUbergraph_PrimalItem_Spawner_Exosuit
struct UPrimalItem_Spawner_Exosuit_C_ExecuteUbergraph_PrimalItem_Spawner_Exosuit_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
