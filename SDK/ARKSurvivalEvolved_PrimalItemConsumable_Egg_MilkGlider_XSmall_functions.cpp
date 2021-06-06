// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_MilkGlider_XSmall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_MilkGlider_XSmall.PrimalItemConsumable_Egg_MilkGlider_XSmall_C.ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_XSmall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_MilkGlider_XSmall_C::ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_XSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_MilkGlider_XSmall.PrimalItemConsumable_Egg_MilkGlider_XSmall_C.ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_XSmall");

	UPrimalItemConsumable_Egg_MilkGlider_XSmall_C_ExecuteUbergraph_PrimalItemConsumable_Egg_MilkGlider_XSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
