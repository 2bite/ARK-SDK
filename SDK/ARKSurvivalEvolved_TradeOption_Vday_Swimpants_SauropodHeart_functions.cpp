// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Vday_Swimpants_SauropodHeart_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Vday_Swimpants_SauropodHeart.TradeOption_Vday_Swimpants_SauropodHeart_C.ExecuteUbergraph_TradeOption_Vday_Swimpants_SauropodHeart
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Vday_Swimpants_SauropodHeart_C::ExecuteUbergraph_TradeOption_Vday_Swimpants_SauropodHeart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Vday_Swimpants_SauropodHeart.TradeOption_Vday_Swimpants_SauropodHeart_C.ExecuteUbergraph_TradeOption_Vday_Swimpants_SauropodHeart");

	UTradeOption_Vday_Swimpants_SauropodHeart_C_ExecuteUbergraph_TradeOption_Vday_Swimpants_SauropodHeart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
