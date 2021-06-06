// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSets_LootCrate_lvl1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSets_LootCrate_lvl1.LootItemSets_LootCrate_lvl1_C.ExecuteUbergraph_LootItemSets_LootCrate_lvl1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSets_LootCrate_lvl1_C::ExecuteUbergraph_LootItemSets_LootCrate_lvl1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSets_LootCrate_lvl1.LootItemSets_LootCrate_lvl1_C.ExecuteUbergraph_LootItemSets_LootCrate_lvl1");

	ULootItemSets_LootCrate_lvl1_C_ExecuteUbergraph_LootItemSets_LootCrate_lvl1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
