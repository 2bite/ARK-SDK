// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Iguanodon_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Iguanodon.PrimalItemConsumable_Egg_Iguanodon_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Iguanodon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Iguanodon_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Iguanodon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Iguanodon.PrimalItemConsumable_Egg_Iguanodon_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Iguanodon");

	UPrimalItemConsumable_Egg_Iguanodon_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Iguanodon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
