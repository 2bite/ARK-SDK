// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_ChitinPaste_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_ChitinPaste.TradeOption_ChitinPaste_C.ExecuteUbergraph_TradeOption_ChitinPaste
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_ChitinPaste_C::ExecuteUbergraph_TradeOption_ChitinPaste(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_ChitinPaste.TradeOption_ChitinPaste_C.ExecuteUbergraph_TradeOption_ChitinPaste");

	UTradeOption_ChitinPaste_C_ExecuteUbergraph_TradeOption_ChitinPaste_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
