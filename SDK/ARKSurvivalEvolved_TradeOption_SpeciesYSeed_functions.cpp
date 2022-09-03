// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TradeOption_SpeciesYSeed_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TradeOption_SpeciesYSeed.TradeOption_SpeciesYSeed_C.ExecuteUbergraph_TradeOption_SpeciesYSeed
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTradeOption_SpeciesYSeed_C::ExecuteUbergraph_TradeOption_SpeciesYSeed(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TradeOption_SpeciesYSeed.TradeOption_SpeciesYSeed_C.ExecuteUbergraph_TradeOption_SpeciesYSeed");

	UTradeOption_SpeciesYSeed_C_ExecuteUbergraph_TradeOption_SpeciesYSeed_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
