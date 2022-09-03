// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_Missions_Secondary_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Missions_Secondary.LootItemSet_Missions_Secondary_C.ExecuteUbergraph_LootItemSet_Missions_Secondary
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Missions_Secondary_C::ExecuteUbergraph_LootItemSet_Missions_Secondary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Missions_Secondary.LootItemSet_Missions_Secondary_C.ExecuteUbergraph_LootItemSet_Missions_Secondary");

	ULootItemSet_Missions_Secondary_C_ExecuteUbergraph_LootItemSet_Missions_Secondary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
