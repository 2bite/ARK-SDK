// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_RedGems_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_RedGems.TradeOption_RedGems_C.ExecuteUbergraph_TradeOption_RedGems
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_RedGems_C::ExecuteUbergraph_TradeOption_RedGems(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_RedGems.TradeOption_RedGems_C.ExecuteUbergraph_TradeOption_RedGems");

	UTradeOption_RedGems_C_ExecuteUbergraph_TradeOption_RedGems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
