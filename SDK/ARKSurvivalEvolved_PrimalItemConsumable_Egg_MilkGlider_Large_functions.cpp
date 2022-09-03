// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_MilkGlider_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_MilkGlider_Large.PrimalItemConsumable_Egg_MilkGlider_Large_C.ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_MilkGlider_Large_C::ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_MilkGlider_Large.PrimalItemConsumable_Egg_MilkGlider_Large_C.ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Large");

	UPrimalItemConsumable_Egg_MilkGlider_Large_C_ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
