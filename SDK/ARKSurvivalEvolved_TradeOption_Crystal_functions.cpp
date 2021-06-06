// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Crystal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Crystal.TradeOption_Crystal_C.ExecuteUbergraph_TradeOption_Crystal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Crystal_C::ExecuteUbergraph_TradeOption_Crystal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Crystal.TradeOption_Crystal_C.ExecuteUbergraph_TradeOption_Crystal");

	UTradeOption_Crystal_C_ExecuteUbergraph_TradeOption_Crystal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
