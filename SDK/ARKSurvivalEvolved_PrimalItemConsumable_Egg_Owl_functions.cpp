// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Owl_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Owl.PrimalItemConsumable_Egg_Owl_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Owl
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Owl_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Owl(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Owl.PrimalItemConsumable_Egg_Owl_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Owl");

	UPrimalItemConsumable_Egg_Owl_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Owl_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
