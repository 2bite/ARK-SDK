// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Thatch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Thatch.TradeOption_Thatch_C.ExecuteUbergraph_TradeOption_Thatch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Thatch_C::ExecuteUbergraph_TradeOption_Thatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Thatch.TradeOption_Thatch_C.ExecuteUbergraph_TradeOption_Thatch");

	UTradeOption_Thatch_C_ExecuteUbergraph_TradeOption_Thatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
