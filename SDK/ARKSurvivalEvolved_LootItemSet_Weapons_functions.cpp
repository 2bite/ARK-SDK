// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_Weapons_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Weapons.LootItemSet_Weapons_C.ExecuteUbergraph_LootItemSet_Weapons
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Weapons_C::ExecuteUbergraph_LootItemSet_Weapons(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Weapons.LootItemSet_Weapons_C.ExecuteUbergraph_LootItemSet_Weapons");

	ULootItemSet_Weapons_C_ExecuteUbergraph_LootItemSet_Weapons_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
