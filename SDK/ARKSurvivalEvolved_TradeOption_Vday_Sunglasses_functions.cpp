// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Vday_Sunglasses_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Vday_Sunglasses.TradeOption_Vday_Sunglasses_C.ExecuteUbergraph_TradeOption_Vday_Sunglasses
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Vday_Sunglasses_C::ExecuteUbergraph_TradeOption_Vday_Sunglasses(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Vday_Sunglasses.TradeOption_Vday_Sunglasses_C.ExecuteUbergraph_TradeOption_Vday_Sunglasses");

	UTradeOption_Vday_Sunglasses_C_ExecuteUbergraph_TradeOption_Vday_Sunglasses_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
