// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_Cryopods_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_Cryopods.TradeOption_Cryopods_C.ExecuteUbergraph_TradeOption_Cryopods
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_Cryopods_C::ExecuteUbergraph_TradeOption_Cryopods(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_Cryopods.TradeOption_Cryopods_C.ExecuteUbergraph_TradeOption_Cryopods");

	UTradeOption_Cryopods_C_ExecuteUbergraph_TradeOption_Cryopods_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
