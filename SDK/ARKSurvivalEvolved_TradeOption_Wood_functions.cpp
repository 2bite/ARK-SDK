// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Wood.TradeOption_Wood_C.ExecuteUbergraph_TradeOption_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Wood_C::ExecuteUbergraph_TradeOption_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Wood.TradeOption_Wood_C.ExecuteUbergraph_TradeOption_Wood");

	UTradeOption_Wood_C_ExecuteUbergraph_TradeOption_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
