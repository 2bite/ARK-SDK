// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSets_Gacha_Tamed_Premium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSets_Gacha_Tamed_Premium.LootItemSets_Gacha_Tamed_Premium_C.ExecuteUbergraph_LootItemSets_Gacha_Tamed_Premium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSets_Gacha_Tamed_Premium_C::ExecuteUbergraph_LootItemSets_Gacha_Tamed_Premium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSets_Gacha_Tamed_Premium.LootItemSets_Gacha_Tamed_Premium_C.ExecuteUbergraph_LootItemSets_Gacha_Tamed_Premium");

	ULootItemSets_Gacha_Tamed_Premium_C_ExecuteUbergraph_LootItemSets_Gacha_Tamed_Premium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
