// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnderwaterEgg_Angler_Aberrant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnderwaterEgg_Angler_Aberrant.PrimalItemConsumable_UnderwaterEgg_Angler_Aberrant_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Angler_Aberrant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnderwaterEgg_Angler_Aberrant_C::ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Angler_Aberrant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnderwaterEgg_Angler_Aberrant.PrimalItemConsumable_UnderwaterEgg_Angler_Aberrant_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Angler_Aberrant");

	UPrimalItemConsumable_UnderwaterEgg_Angler_Aberrant_C_ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Angler_Aberrant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
