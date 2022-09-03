// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_LootCrate_lvl2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_LootCrate_lvl2.TradeOption_LootCrate_lvl2_C.ExecuteUbergraph_TradeOption_LootCrate_lvl2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_LootCrate_lvl2_C::ExecuteUbergraph_TradeOption_LootCrate_lvl2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_LootCrate_lvl2.TradeOption_LootCrate_lvl2_C.ExecuteUbergraph_TradeOption_LootCrate_lvl2");

	UTradeOption_LootCrate_lvl2_C_ExecuteUbergraph_TradeOption_LootCrate_lvl2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
