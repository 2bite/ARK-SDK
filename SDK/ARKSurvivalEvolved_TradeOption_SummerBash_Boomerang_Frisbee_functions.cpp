// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_SummerBash_Boomerang_Frisbee_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_SummerBash_Boomerang_Frisbee.TradeOption_SummerBash_Boomerang_Frisbee_C.ExecuteUbergraph_TradeOption_SummerBash_Boomerang_Frisbee
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_SummerBash_Boomerang_Frisbee_C::ExecuteUbergraph_TradeOption_SummerBash_Boomerang_Frisbee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_SummerBash_Boomerang_Frisbee.TradeOption_SummerBash_Boomerang_Frisbee_C.ExecuteUbergraph_TradeOption_SummerBash_Boomerang_Frisbee");

	UTradeOption_SummerBash_Boomerang_Frisbee_C_ExecuteUbergraph_TradeOption_SummerBash_Boomerang_Frisbee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
