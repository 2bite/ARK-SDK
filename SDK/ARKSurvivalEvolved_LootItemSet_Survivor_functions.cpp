// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_Survivor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_Survivor.LootItemSet_Survivor_C.ExecuteUbergraph_LootItemSet_Survivor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_Survivor_C::ExecuteUbergraph_LootItemSet_Survivor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_Survivor.LootItemSet_Survivor_C.ExecuteUbergraph_LootItemSet_Survivor");

	ULootItemSet_Survivor_C_ExecuteUbergraph_LootItemSet_Survivor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
