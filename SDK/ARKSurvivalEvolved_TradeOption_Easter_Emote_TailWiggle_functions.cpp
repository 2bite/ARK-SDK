// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Easter_Emote_TailWiggle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Easter_Emote_TailWiggle.TradeOption_Easter_Emote_TailWiggle_C.ExecuteUbergraph_TradeOption_Easter_Emote_TailWiggle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Easter_Emote_TailWiggle_C::ExecuteUbergraph_TradeOption_Easter_Emote_TailWiggle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Easter_Emote_TailWiggle.TradeOption_Easter_Emote_TailWiggle_C.ExecuteUbergraph_TradeOption_Easter_Emote_TailWiggle");

	UTradeOption_Easter_Emote_TailWiggle_C_ExecuteUbergraph_TradeOption_Easter_Emote_TailWiggle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
