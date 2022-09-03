// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_BlueGems_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_BlueGems.TradeOption_BlueGems_C.ExecuteUbergraph_TradeOption_BlueGems
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_BlueGems_C::ExecuteUbergraph_TradeOption_BlueGems(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_BlueGems.TradeOption_BlueGems_C.ExecuteUbergraph_TradeOption_BlueGems");

	UTradeOption_BlueGems_C_ExecuteUbergraph_TradeOption_BlueGems_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
