// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_Missions_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Missions_Medium.LootItemSet_Missions_Medium_C.ExecuteUbergraph_LootItemSet_Missions_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Missions_Medium_C::ExecuteUbergraph_LootItemSet_Missions_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Missions_Medium.LootItemSet_Missions_Medium_C.ExecuteUbergraph_LootItemSet_Missions_Medium");

	ULootItemSet_Missions_Medium_C_ExecuteUbergraph_LootItemSet_Missions_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
