// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_SummerBash_Torch_Sparkler_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_SummerBash_Torch_Sparkler.TradeOption_SummerBash_Torch_Sparkler_C.ExecuteUbergraph_TradeOption_SummerBash_Torch_Sparkler
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_SummerBash_Torch_Sparkler_C::ExecuteUbergraph_TradeOption_SummerBash_Torch_Sparkler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_SummerBash_Torch_Sparkler.TradeOption_SummerBash_Torch_Sparkler_C.ExecuteUbergraph_TradeOption_SummerBash_Torch_Sparkler");

	UTradeOption_SummerBash_Torch_Sparkler_C_ExecuteUbergraph_TradeOption_SummerBash_Torch_Sparkler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
