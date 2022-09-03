// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Sulfur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Sulfur.TradeOption_Sulfur_C.ExecuteUbergraph_TradeOption_Sulfur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Sulfur_C::ExecuteUbergraph_TradeOption_Sulfur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Sulfur.TradeOption_Sulfur_C.ExecuteUbergraph_TradeOption_Sulfur");

	UTradeOption_Sulfur_C_ExecuteUbergraph_TradeOption_Sulfur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
