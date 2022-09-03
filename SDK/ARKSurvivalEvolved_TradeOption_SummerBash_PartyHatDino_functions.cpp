// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_SummerBash_PartyHatDino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_SummerBash_PartyHatDino.TradeOption_SummerBash_PartyHatDino_C.ExecuteUbergraph_TradeOption_SummerBash_PartyHatDino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_SummerBash_PartyHatDino_C::ExecuteUbergraph_TradeOption_SummerBash_PartyHatDino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_SummerBash_PartyHatDino.TradeOption_SummerBash_PartyHatDino_C.ExecuteUbergraph_TradeOption_SummerBash_PartyHatDino");

	UTradeOption_SummerBash_PartyHatDino_C_ExecuteUbergraph_TradeOption_SummerBash_PartyHatDino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
