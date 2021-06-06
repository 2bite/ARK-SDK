// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_GreenGems_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_GreenGems.TradeOption_GreenGems_C.ExecuteUbergraph_TradeOption_GreenGems
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_GreenGems_C::ExecuteUbergraph_TradeOption_GreenGems(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_GreenGems.TradeOption_GreenGems_C.ExecuteUbergraph_TradeOption_GreenGems");

	UTradeOption_GreenGems_C_ExecuteUbergraph_TradeOption_GreenGems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
