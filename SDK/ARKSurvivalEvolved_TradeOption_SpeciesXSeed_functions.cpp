// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_SpeciesXSeed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_SpeciesXSeed.TradeOption_SpeciesXSeed_C.ExecuteUbergraph_TradeOption_SpeciesXSeed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_SpeciesXSeed_C::ExecuteUbergraph_TradeOption_SpeciesXSeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_SpeciesXSeed.TradeOption_SpeciesXSeed_C.ExecuteUbergraph_TradeOption_SpeciesXSeed");

	UTradeOption_SpeciesXSeed_C_ExecuteUbergraph_TradeOption_SpeciesXSeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
