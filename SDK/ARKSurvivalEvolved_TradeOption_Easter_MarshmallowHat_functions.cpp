// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Easter_MarshmallowHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Easter_MarshmallowHat.TradeOption_Easter_MarshmallowHat_C.ExecuteUbergraph_TradeOption_Easter_MarshmallowHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Easter_MarshmallowHat_C::ExecuteUbergraph_TradeOption_Easter_MarshmallowHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Easter_MarshmallowHat.TradeOption_Easter_MarshmallowHat_C.ExecuteUbergraph_TradeOption_Easter_MarshmallowHat");

	UTradeOption_Easter_MarshmallowHat_C_ExecuteUbergraph_TradeOption_Easter_MarshmallowHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
