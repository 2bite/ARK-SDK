// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_BaseMeatFishing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_BaseMeatFishing.LootItemSet_BaseMeatFishing_C.ExecuteUbergraph_LootItemSet_BaseMeatFishing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_BaseMeatFishing_C::ExecuteUbergraph_LootItemSet_BaseMeatFishing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_BaseMeatFishing.LootItemSet_BaseMeatFishing_C.ExecuteUbergraph_LootItemSet_BaseMeatFishing");

	ULootItemSet_BaseMeatFishing_C_ExecuteUbergraph_LootItemSet_BaseMeatFishing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
