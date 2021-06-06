// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_SupplyDrop_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_SupplyDrop_Ocean.LootItemSet_SupplyDrop_Ocean_C.ExecuteUbergraph_LootItemSet_SupplyDrop_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_SupplyDrop_Ocean_C::ExecuteUbergraph_LootItemSet_SupplyDrop_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_SupplyDrop_Ocean.LootItemSet_SupplyDrop_Ocean_C.ExecuteUbergraph_LootItemSet_SupplyDrop_Ocean");

	ULootItemSet_SupplyDrop_Ocean_C_ExecuteUbergraph_LootItemSet_SupplyDrop_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
