// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Obsidian_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Obsidian.TradeOption_Obsidian_C.ExecuteUbergraph_TradeOption_Obsidian
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Obsidian_C::ExecuteUbergraph_TradeOption_Obsidian(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Obsidian.TradeOption_Obsidian_C.ExecuteUbergraph_TradeOption_Obsidian");

	UTradeOption_Obsidian_C_ExecuteUbergraph_TradeOption_Obsidian_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
