// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Keratin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Keratin.TradeOption_Keratin_C.ExecuteUbergraph_TradeOption_Keratin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Keratin_C::ExecuteUbergraph_TradeOption_Keratin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Keratin.TradeOption_Keratin_C.ExecuteUbergraph_TradeOption_Keratin");

	UTradeOption_Keratin_C_ExecuteUbergraph_TradeOption_Keratin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
