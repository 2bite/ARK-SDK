// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_EngramPoints_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPAllowedToBePurchased
// ()
// Parameters:
// class AShooterPlayerController** PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTradeOption_EngramPoints_C::BPAllowedToBePurchased(class AShooterPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPAllowedToBePurchased");

	UTradeOption_EngramPoints_C_BPAllowedToBePurchased_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPOverrideTradeAction
// ()
// Parameters:
// class AShooterPlayerController** PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTradeOption_EngramPoints_C::BPOverrideTradeAction(class AShooterPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPOverrideTradeAction");

	UTradeOption_EngramPoints_C_BPOverrideTradeAction_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPGetItemCost
// ()
// Parameters:
// class AShooterPlayerController** PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTradeOption_EngramPoints_C::BPGetItemCost(class AShooterPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.BPGetItemCost");

	UTradeOption_EngramPoints_C_BPGetItemCost_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.ExecuteUbergraph_TradeOption_EngramPoints
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_EngramPoints_C::ExecuteUbergraph_TradeOption_EngramPoints(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_EngramPoints.TradeOption_EngramPoints_C.ExecuteUbergraph_TradeOption_EngramPoints");

	UTradeOption_EngramPoints_C_ExecuteUbergraph_TradeOption_EngramPoints_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
