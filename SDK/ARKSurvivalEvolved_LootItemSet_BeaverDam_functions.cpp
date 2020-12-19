// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_BeaverDam_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_BeaverDam.LootItemSet_BeaverDam_C.ExecuteUbergraph_LootItemSet_BeaverDam
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_BeaverDam_C::ExecuteUbergraph_LootItemSet_BeaverDam(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_BeaverDam.LootItemSet_BeaverDam_C.ExecuteUbergraph_LootItemSet_BeaverDam");

	ULootItemSet_BeaverDam_C_ExecuteUbergraph_LootItemSet_BeaverDam_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
