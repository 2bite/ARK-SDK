// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnderwaterEgg_Toad_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnderwaterEgg_Toad.PrimalItemConsumable_UnderwaterEgg_Toad_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Toad
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnderwaterEgg_Toad_C::ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Toad(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnderwaterEgg_Toad.PrimalItemConsumable_UnderwaterEgg_Toad_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Toad");

	UPrimalItemConsumable_UnderwaterEgg_Toad_C_ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Toad_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
