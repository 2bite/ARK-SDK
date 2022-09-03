// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Yuty_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Yuty.PrimalItemConsumable_Egg_Yuty_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Yuty
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Yuty_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Yuty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Yuty.PrimalItemConsumable_Egg_Yuty_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Yuty");

	UPrimalItemConsumable_Egg_Yuty_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Yuty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
