// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Berry_Mejoberry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Berry_Mejoberry.TradeOption_Berry_Mejoberry_C.ExecuteUbergraph_TradeOption_Berry_Mejoberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Berry_Mejoberry_C::ExecuteUbergraph_TradeOption_Berry_Mejoberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Berry_Mejoberry.TradeOption_Berry_Mejoberry_C.ExecuteUbergraph_TradeOption_Berry_Mejoberry");

	UTradeOption_Berry_Mejoberry_C_ExecuteUbergraph_TradeOption_Berry_Mejoberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
