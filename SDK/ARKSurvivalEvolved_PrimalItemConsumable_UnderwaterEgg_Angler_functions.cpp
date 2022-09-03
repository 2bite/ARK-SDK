// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnderwaterEgg_Angler_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnderwaterEgg_Angler.PrimalItemConsumable_UnderwaterEgg_Angler_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Angler
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnderwaterEgg_Angler_C::ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Angler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnderwaterEgg_Angler.PrimalItemConsumable_UnderwaterEgg_Angler_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Angler");

	UPrimalItemConsumable_UnderwaterEgg_Angler_C_ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Angler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
