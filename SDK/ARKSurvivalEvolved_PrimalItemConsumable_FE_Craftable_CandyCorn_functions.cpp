// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_FE_Craftable_CandyCorn_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_FE_Craftable_CandyCorn.PrimalItemConsumable_FE_Craftable_CandyCorn_C.ExecuteUbergraph_PrimalItemConsumable_FE_Craftable_CandyCorn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_FE_Craftable_CandyCorn_C::ExecuteUbergraph_PrimalItemConsumable_FE_Craftable_CandyCorn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_FE_Craftable_CandyCorn.PrimalItemConsumable_FE_Craftable_CandyCorn_C.ExecuteUbergraph_PrimalItemConsumable_FE_Craftable_CandyCorn");

	UPrimalItemConsumable_FE_Craftable_CandyCorn_C_ExecuteUbergraph_PrimalItemConsumable_FE_Craftable_CandyCorn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
