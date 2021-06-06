// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Clay_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Clay.TradeOption_Clay_C.ExecuteUbergraph_TradeOption_Clay
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Clay_C::ExecuteUbergraph_TradeOption_Clay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Clay.TradeOption_Clay_C.ExecuteUbergraph_TradeOption_Clay");

	UTradeOption_Clay_C_ExecuteUbergraph_TradeOption_Clay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
