// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSets_Gacha_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSets_Gacha.LootItemSets_Gacha_C.ExecuteUbergraph_LootItemSets_Gacha
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSets_Gacha_C::ExecuteUbergraph_LootItemSets_Gacha(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSets_Gacha.LootItemSets_Gacha_C.ExecuteUbergraph_LootItemSets_Gacha");

	ULootItemSets_Gacha_C_ExecuteUbergraph_LootItemSets_Gacha_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
