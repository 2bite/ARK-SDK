// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Stone.TradeOption_Stone_C.ExecuteUbergraph_TradeOption_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Stone_C::ExecuteUbergraph_TradeOption_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Stone.TradeOption_Stone_C.ExecuteUbergraph_TradeOption_Stone");

	UTradeOption_Stone_C_ExecuteUbergraph_TradeOption_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
