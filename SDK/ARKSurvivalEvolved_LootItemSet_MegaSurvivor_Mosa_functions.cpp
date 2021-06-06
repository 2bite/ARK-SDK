// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_MegaSurvivor_Mosa_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_MegaSurvivor_Mosa.LootItemSet_MegaSurvivor_Mosa_C.ExecuteUbergraph_LootItemSet_MegaSurvivor_Mosa
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_MegaSurvivor_Mosa_C::ExecuteUbergraph_LootItemSet_MegaSurvivor_Mosa(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_MegaSurvivor_Mosa.LootItemSet_MegaSurvivor_Mosa_C.ExecuteUbergraph_LootItemSet_MegaSurvivor_Mosa");

	ULootItemSet_MegaSurvivor_Mosa_C_ExecuteUbergraph_LootItemSet_MegaSurvivor_Mosa_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
