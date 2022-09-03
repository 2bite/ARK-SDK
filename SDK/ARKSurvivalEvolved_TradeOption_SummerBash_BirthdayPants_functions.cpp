// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_SummerBash_BirthdayPants_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_SummerBash_BirthdayPants.TradeOption_SummerBash_BirthdayPants_C.ExecuteUbergraph_TradeOption_SummerBash_BirthdayPants
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_SummerBash_BirthdayPants_C::ExecuteUbergraph_TradeOption_SummerBash_BirthdayPants(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_SummerBash_BirthdayPants.TradeOption_SummerBash_BirthdayPants_C.ExecuteUbergraph_TradeOption_SummerBash_BirthdayPants");

	UTradeOption_SummerBash_BirthdayPants_C_ExecuteUbergraph_TradeOption_SummerBash_BirthdayPants_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
