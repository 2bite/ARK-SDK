// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_Chibis_Rare_TurkeyTrials_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Chibis_Rare_TurkeyTrials.LootItemSet_Chibis_Rare_TurkeyTrials_C.ExecuteUbergraph_LootItemSet_Chibis_Rare_TurkeyTrials
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Chibis_Rare_TurkeyTrials_C::ExecuteUbergraph_LootItemSet_Chibis_Rare_TurkeyTrials(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Chibis_Rare_TurkeyTrials.LootItemSet_Chibis_Rare_TurkeyTrials_C.ExecuteUbergraph_LootItemSet_Chibis_Rare_TurkeyTrials");

	ULootItemSet_Chibis_Rare_TurkeyTrials_C_ExecuteUbergraph_LootItemSet_Chibis_Rare_TurkeyTrials_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
