// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_FungalWood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_FungalWood.PrimalItemResource_FungalWood_C.ExecuteUbergraph_PrimalItemResource_FungalWood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_FungalWood_C::ExecuteUbergraph_PrimalItemResource_FungalWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_FungalWood.PrimalItemResource_FungalWood_C.ExecuteUbergraph_PrimalItemResource_FungalWood");

	UPrimalItemResource_FungalWood_C_ExecuteUbergraph_PrimalItemResource_FungalWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
