// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Kairuku_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Kairuku.PrimalItemConsumable_Egg_Kairuku_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Kairuku
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Kairuku_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Kairuku(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Kairuku.PrimalItemConsumable_Egg_Kairuku_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Kairuku");

	UPrimalItemConsumable_Egg_Kairuku_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Kairuku_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
