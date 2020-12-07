// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootItemSet_BaseMeatFishingNet_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootItemSet_BaseMeatFishingNet.LootItemSet_BaseMeatFishingNet_C.ExecuteUbergraph_LootItemSet_BaseMeatFishingNet
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ULootItemSet_BaseMeatFishingNet_C::ExecuteUbergraph_LootItemSet_BaseMeatFishingNet(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootItemSet_BaseMeatFishingNet.LootItemSet_BaseMeatFishingNet_C.ExecuteUbergraph_LootItemSet_BaseMeatFishingNet");

	ULootItemSet_BaseMeatFishingNet_C_ExecuteUbergraph_LootItemSet_BaseMeatFishingNet_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
