// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_VolcanicCrystal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_VolcanicCrystal.LootItemSet_VolcanicCrystal_C.ExecuteUbergraph_LootItemSet_VolcanicCrystal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_VolcanicCrystal_C::ExecuteUbergraph_LootItemSet_VolcanicCrystal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_VolcanicCrystal.LootItemSet_VolcanicCrystal_C.ExecuteUbergraph_LootItemSet_VolcanicCrystal");

	ULootItemSet_VolcanicCrystal_C_ExecuteUbergraph_LootItemSet_VolcanicCrystal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
