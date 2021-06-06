// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire.PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Wyvern_Fertilized_Fire_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire.PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire");

	UPrimalItemConsumable_Egg_Wyvern_Fertilized_Fire_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Wyvern_Fertilized_Fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
