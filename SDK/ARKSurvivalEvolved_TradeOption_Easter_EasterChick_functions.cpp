// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Easter_EasterChick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Easter_EasterChick.TradeOption_Easter_EasterChick_C.ExecuteUbergraph_TradeOption_Easter_EasterChick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Easter_EasterChick_C::ExecuteUbergraph_TradeOption_Easter_EasterChick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Easter_EasterChick.TradeOption_Easter_EasterChick_C.ExecuteUbergraph_TradeOption_Easter_EasterChick");

	UTradeOption_Easter_EasterChick_C_ExecuteUbergraph_TradeOption_Easter_EasterChick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
