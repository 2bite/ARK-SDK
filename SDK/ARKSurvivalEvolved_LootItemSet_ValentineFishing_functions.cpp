// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_ValentineFishing_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_ValentineFishing.LootItemSet_ValentineFishing_C.ExecuteUbergraph_LootItemSet_ValentineFishing
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_ValentineFishing_C::ExecuteUbergraph_LootItemSet_ValentineFishing(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_ValentineFishing.LootItemSet_ValentineFishing_C.ExecuteUbergraph_LootItemSet_ValentineFishing");

	ULootItemSet_ValentineFishing_C_ExecuteUbergraph_LootItemSet_ValentineFishing_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
