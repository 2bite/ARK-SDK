// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Silk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Silk.TradeOption_Silk_C.ExecuteUbergraph_TradeOption_Silk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Silk_C::ExecuteUbergraph_TradeOption_Silk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Silk.TradeOption_Silk_C.ExecuteUbergraph_TradeOption_Silk");

	UTradeOption_Silk_C_ExecuteUbergraph_TradeOption_Silk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
