// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Easter_EasterEggHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Easter_EasterEggHat.TradeOption_Easter_EasterEggHat_C.ExecuteUbergraph_TradeOption_Easter_EasterEggHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Easter_EasterEggHat_C::ExecuteUbergraph_TradeOption_Easter_EasterEggHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Easter_EasterEggHat.TradeOption_Easter_EasterEggHat_C.ExecuteUbergraph_TradeOption_Easter_EasterEggHat");

	UTradeOption_Easter_EasterEggHat_C_ExecuteUbergraph_TradeOption_Easter_EasterEggHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
