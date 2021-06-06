#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_LootCrate_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.BPOverrideTradeAction
struct UTradeOption_LootCrate_Base_C_BPOverrideTradeAction_Params
{
	class AShooterPlayerController**                   PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.BPAllowedToBePurchased
struct UTradeOption_LootCrate_Base_C_BPAllowedToBePurchased_Params
{
	class AShooterPlayerController**                   PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.ExecuteUbergraph_TradeOption_LootCrate_Base
struct UTradeOption_LootCrate_Base_C_ExecuteUbergraph_TradeOption_LootCrate_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
