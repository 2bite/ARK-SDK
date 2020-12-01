// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_SupplyDrop_Level35_StatsOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_SupplyDrop_Level35_StatsOnly.LootItemSet_SupplyDrop_Level35_StatsOnly_C.ExecuteUbergraph_LootItemSet_SupplyDrop_Level35_StatsOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_SupplyDrop_Level35_StatsOnly_C::ExecuteUbergraph_LootItemSet_SupplyDrop_Level35_StatsOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_SupplyDrop_Level35_StatsOnly.LootItemSet_SupplyDrop_Level35_StatsOnly_C.ExecuteUbergraph_LootItemSet_SupplyDrop_Level35_StatsOnly");

	ULootItemSet_SupplyDrop_Level35_StatsOnly_C_ExecuteUbergraph_LootItemSet_SupplyDrop_Level35_StatsOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
