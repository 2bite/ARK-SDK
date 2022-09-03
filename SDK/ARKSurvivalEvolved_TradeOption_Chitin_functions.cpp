// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Chitin_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Chitin.TradeOption_Chitin_C.ExecuteUbergraph_TradeOption_Chitin
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Chitin_C::ExecuteUbergraph_TradeOption_Chitin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Chitin.TradeOption_Chitin_C.ExecuteUbergraph_TradeOption_Chitin");

	UTradeOption_Chitin_C_ExecuteUbergraph_TradeOption_Chitin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
