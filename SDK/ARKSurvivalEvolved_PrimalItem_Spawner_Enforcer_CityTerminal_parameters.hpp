#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItem_Spawner_Enforcer_CityTerminal_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C.PreDinoSpawned
struct UPrimalItem_Spawner_Enforcer_CityTerminal_C_PreDinoSpawned_Params
{
};

// Function PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C.GetStatDisplayString
struct UPrimalItem_Spawner_Enforcer_CityTerminal_C_GetStatDisplayString_Params
{
	TEnumAsByte<EPrimalCharacterStatusValue>*          Stat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               StatConvertMapIndex;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      StatDisplay;                                              // (Parm, OutParm, ZeroConstructor)
	class FString                                      ValueDisplay;                                             // (Parm, OutParm, ZeroConstructor)
	bool                                               ShowInTooltip;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PrimalItem_Spawner_Enforcer_CityTerminal.PrimalItem_Spawner_Enforcer_CityTerminal_C.ExecuteUbergraph_PrimalItem_Spawner_Enforcer_CityTerminal
struct UPrimalItem_Spawner_Enforcer_CityTerminal_C_ExecuteUbergraph_PrimalItem_Spawner_Enforcer_CityTerminal_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif