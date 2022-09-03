#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_EngramPoints_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPAllowedToBePurchased
struct UTradeOption_EngramPoints_C_BPAllowedToBePurchased_Params
{
	class AShooterPlayerController**                   PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPOverrideTradeAction
struct UTradeOption_EngramPoints_C_BPOverrideTradeAction_Params
{
	class AShooterPlayerController**                   PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPGetItemCost
struct UTradeOption_EngramPoints_C_BPGetItemCost_Params
{
	class AShooterPlayerController**                   PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.ExecuteUbergraph_TradeOption_EngramPoints
struct UTradeOption_EngramPoints_C_ExecuteUbergraph_TradeOption_EngramPoints_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
