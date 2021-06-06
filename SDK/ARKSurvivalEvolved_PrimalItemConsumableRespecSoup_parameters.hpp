#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumableRespecSoup_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BPGetCustomInventoryWidgetText
struct UPrimalItemConsumableRespecSoup_C_BPGetCustomInventoryWidgetText_Params
{
	class FString                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.GetLastRespecTime
struct UPrimalItemConsumableRespecSoup_C_GetLastRespecTime_Params
{
	double                                             LastRespecUtcTime;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BPCanUse
struct UPrimalItemConsumableRespecSoup_C_BPCanUse_Params
{
	bool*                                              bIgnoreCooldown;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.BlueprintUsed
struct UPrimalItemConsumableRespecSoup_C_BlueprintUsed_Params
{
};

// Function PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C.ExecuteUbergraph_PrimalItemConsumableRespecSoup
struct UPrimalItemConsumableRespecSoup_C_ExecuteUbergraph_PrimalItemConsumableRespecSoup_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
