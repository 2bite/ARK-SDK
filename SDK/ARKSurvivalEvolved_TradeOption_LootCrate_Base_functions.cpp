// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_LootCrate_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.BPOverrideTradeAction
// ()
// Parameters:
// class AShooterPlayerController** PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTradeOption_LootCrate_Base_C::BPOverrideTradeAction(class AShooterPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.BPOverrideTradeAction");

	UTradeOption_LootCrate_Base_C_BPOverrideTradeAction_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.BPAllowedToBePurchased
// ()
// Parameters:
// class AShooterPlayerController** PlayerController               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UTradeOption_LootCrate_Base_C::BPAllowedToBePurchased(class AShooterPlayerController** PlayerController)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.BPAllowedToBePurchased");

	UTradeOption_LootCrate_Base_C_BPAllowedToBePurchased_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.ExecuteUbergraph_TradeOption_LootCrate_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_LootCrate_Base_C::ExecuteUbergraph_TradeOption_LootCrate_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_LootCrate_Base.TradeOption_LootCrate_Base_C.ExecuteUbergraph_TradeOption_LootCrate_Base");

	UTradeOption_LootCrate_Base_C_ExecuteUbergraph_TradeOption_LootCrate_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
