// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_SupplyDrop_Level45_StatsOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_SupplyDrop_Level45_StatsOnly.LootItemSet_SupplyDrop_Level45_StatsOnly_C.ExecuteUbergraph_LootItemSet_SupplyDrop_Level45_StatsOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_SupplyDrop_Level45_StatsOnly_C::ExecuteUbergraph_LootItemSet_SupplyDrop_Level45_StatsOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_SupplyDrop_Level45_StatsOnly.LootItemSet_SupplyDrop_Level45_StatsOnly_C.ExecuteUbergraph_LootItemSet_SupplyDrop_Level45_StatsOnly");

	ULootItemSet_SupplyDrop_Level45_StatsOnly_C_ExecuteUbergraph_LootItemSet_SupplyDrop_Level45_StatsOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
