// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_MilkGlider_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_MilkGlider_Medium.PrimalItemConsumable_Egg_MilkGlider_Medium_C.ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_MilkGlider_Medium_C::ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_MilkGlider_Medium.PrimalItemConsumable_Egg_MilkGlider_Medium_C.ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Medium");

	UPrimalItemConsumable_Egg_MilkGlider_Medium_C_ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
