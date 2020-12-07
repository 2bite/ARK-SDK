// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Wyvern_Fertilized_Poison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Wyvern_Fertilized_Poison.PrimalItemConsumable_Egg_Wyvern_Fertilized_Poison_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Poison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Wyvern_Fertilized_Poison_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Poison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Wyvern_Fertilized_Poison.PrimalItemConsumable_Egg_Wyvern_Fertilized_Poison_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Poison");

	UPrimalItemConsumable_Egg_Wyvern_Fertilized_Poison_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Poison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
