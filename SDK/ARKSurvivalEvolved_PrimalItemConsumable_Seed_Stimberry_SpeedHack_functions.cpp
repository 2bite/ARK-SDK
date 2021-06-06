// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Seed_Stimberry_SpeedHack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Seed_Stimberry_SpeedHack.PrimalItemConsumable_Seed_Stimberry_SpeedHack_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry_SpeedHack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Seed_Stimberry_SpeedHack_C::ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry_SpeedHack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Seed_Stimberry_SpeedHack.PrimalItemConsumable_Seed_Stimberry_SpeedHack_C.ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry_SpeedHack");

	UPrimalItemConsumable_Seed_Stimberry_SpeedHack_C_ExecuteUbergraph_PrimalItemConsumable_Seed_Stimberry_SpeedHack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
