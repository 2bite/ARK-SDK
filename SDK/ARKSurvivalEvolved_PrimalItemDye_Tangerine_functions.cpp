// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Tangerine_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDye_Tangerine.PrimalItemDye_Tangerine_C.ExecuteUbergraph_PrimalItemDye_Tangerine
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Tangerine_C::ExecuteUbergraph_PrimalItemDye_Tangerine(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Tangerine.PrimalItemDye_Tangerine_C.ExecuteUbergraph_PrimalItemDye_Tangerine");

	UPrimalItemDye_Tangerine_C_ExecuteUbergraph_PrimalItemDye_Tangerine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
