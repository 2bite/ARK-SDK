// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Mushroom_Auric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Mushroom_Auric.TradeOption_Mushroom_Auric_C.ExecuteUbergraph_TradeOption_Mushroom_Auric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Mushroom_Auric_C::ExecuteUbergraph_TradeOption_Mushroom_Auric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Mushroom_Auric.TradeOption_Mushroom_Auric_C.ExecuteUbergraph_TradeOption_Mushroom_Auric");

	UTradeOption_Mushroom_Auric_C_ExecuteUbergraph_TradeOption_Mushroom_Auric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
