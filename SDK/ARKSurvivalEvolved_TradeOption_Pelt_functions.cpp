// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Pelt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Pelt.TradeOption_Pelt_C.ExecuteUbergraph_TradeOption_Pelt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Pelt_C::ExecuteUbergraph_TradeOption_Pelt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Pelt.TradeOption_Pelt_C.ExecuteUbergraph_TradeOption_Pelt");

	UTradeOption_Pelt_C_ExecuteUbergraph_TradeOption_Pelt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
