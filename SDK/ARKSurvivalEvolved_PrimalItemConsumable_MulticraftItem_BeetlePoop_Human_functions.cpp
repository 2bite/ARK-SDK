// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_MulticraftItem_BeetlePoop_Human_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_MulticraftItem_BeetlePoop_Human.PrimalItemConsumable_MulticraftItem_BeetlePoop_Human_C.ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Human
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_MulticraftItem_BeetlePoop_Human_C::ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Human(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_MulticraftItem_BeetlePoop_Human.PrimalItemConsumable_MulticraftItem_BeetlePoop_Human_C.ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Human");

	UPrimalItemConsumable_MulticraftItem_BeetlePoop_Human_C_ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Human_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
