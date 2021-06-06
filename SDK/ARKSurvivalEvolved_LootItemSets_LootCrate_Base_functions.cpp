// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSets_LootCrate_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSets_LootCrate_Base.LootItemSets_LootCrate_Base_C.ExecuteUbergraph_LootItemSets_LootCrate_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSets_LootCrate_Base_C::ExecuteUbergraph_LootItemSets_LootCrate_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSets_LootCrate_Base.LootItemSets_LootCrate_Base_C.ExecuteUbergraph_LootItemSets_LootCrate_Base");

	ULootItemSets_LootCrate_Base_C_ExecuteUbergraph_LootItemSets_LootCrate_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
