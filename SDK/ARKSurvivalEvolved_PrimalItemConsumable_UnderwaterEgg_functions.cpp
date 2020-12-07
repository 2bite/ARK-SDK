// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_UnderwaterEgg_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_UnderwaterEgg.PrimalItemConsumable_UnderwaterEgg_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_UnderwaterEgg_C::ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_UnderwaterEgg.PrimalItemConsumable_UnderwaterEgg_C.ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg");

	UPrimalItemConsumable_UnderwaterEgg_C_ExecuteUbergraph_PrimalItemConsumable_UnderwaterEgg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
