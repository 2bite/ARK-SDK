// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_NetFishing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_NetFishing.LootItemSet_NetFishing_C.ExecuteUbergraph_LootItemSet_NetFishing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_NetFishing_C::ExecuteUbergraph_LootItemSet_NetFishing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_NetFishing.LootItemSet_NetFishing_C.ExecuteUbergraph_LootItemSet_NetFishing");

	ULootItemSet_NetFishing_C_ExecuteUbergraph_LootItemSet_NetFishing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
