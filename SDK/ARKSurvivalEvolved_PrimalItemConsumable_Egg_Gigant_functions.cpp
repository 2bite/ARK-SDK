// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Gigant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Gigant.PrimalItemConsumable_Egg_Gigant_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Gigant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Gigant_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Gigant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Gigant.PrimalItemConsumable_Egg_Gigant_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Gigant");

	UPrimalItemConsumable_Egg_Gigant_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Gigant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
