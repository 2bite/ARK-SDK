// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_RockDrake_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_RockDrake.PrimalItemConsumable_Egg_RockDrake_C.ExecuteUbergraph_PrimalItemConsumable_Egg_RockDrake
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_RockDrake_C::ExecuteUbergraph_PrimalItemConsumable_Egg_RockDrake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_RockDrake.PrimalItemConsumable_Egg_RockDrake_C.ExecuteUbergraph_PrimalItemConsumable_Egg_RockDrake");

	UPrimalItemConsumable_Egg_RockDrake_C_ExecuteUbergraph_PrimalItemConsumable_Egg_RockDrake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
