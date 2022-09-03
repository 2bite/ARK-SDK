// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_Missions_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Missions.LootItemSet_Missions_C.ExecuteUbergraph_LootItemSet_Missions
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Missions_C::ExecuteUbergraph_LootItemSet_Missions(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Missions.LootItemSet_Missions_C.ExecuteUbergraph_LootItemSet_Missions");

	ULootItemSet_Missions_C_ExecuteUbergraph_LootItemSet_Missions_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
