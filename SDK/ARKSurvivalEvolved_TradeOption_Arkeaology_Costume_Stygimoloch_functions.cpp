// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Arkeaology_Costume_Stygimoloch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Arkeaology_Costume_Stygimoloch.TradeOption_Arkeaology_Costume_Stygimoloch_C.ExecuteUbergraph_TradeOption_Arkeaology_Costume_Stygimoloch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Arkeaology_Costume_Stygimoloch_C::ExecuteUbergraph_TradeOption_Arkeaology_Costume_Stygimoloch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Arkeaology_Costume_Stygimoloch.TradeOption_Arkeaology_Costume_Stygimoloch_C.ExecuteUbergraph_TradeOption_Arkeaology_Costume_Stygimoloch");

	UTradeOption_Arkeaology_Costume_Stygimoloch_C_ExecuteUbergraph_TradeOption_Arkeaology_Costume_Stygimoloch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
