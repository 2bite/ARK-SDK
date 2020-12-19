// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_MegaSurvivor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_MegaSurvivor.LootItemSet_MegaSurvivor_C.ExecuteUbergraph_LootItemSet_MegaSurvivor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_MegaSurvivor_C::ExecuteUbergraph_LootItemSet_MegaSurvivor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_MegaSurvivor.LootItemSet_MegaSurvivor_C.ExecuteUbergraph_LootItemSet_MegaSurvivor");

	ULootItemSet_MegaSurvivor_C_ExecuteUbergraph_LootItemSet_MegaSurvivor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
