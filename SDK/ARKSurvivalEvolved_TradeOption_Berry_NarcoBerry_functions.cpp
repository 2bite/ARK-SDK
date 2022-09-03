// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Berry_NarcoBerry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Berry_NarcoBerry.TradeOption_Berry_Narcoberry_C.ExecuteUbergraph_TradeOption_Berry_Narcoberry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Berry_Narcoberry_C::ExecuteUbergraph_TradeOption_Berry_Narcoberry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Berry_NarcoBerry.TradeOption_Berry_Narcoberry_C.ExecuteUbergraph_TradeOption_Berry_Narcoberry");

	UTradeOption_Berry_Narcoberry_C_ExecuteUbergraph_TradeOption_Berry_Narcoberry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
