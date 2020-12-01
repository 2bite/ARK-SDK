// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_MulticraftItem_BeetlePoop_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_MulticraftItem_BeetlePoop_Small.PrimalItemConsumable_MulticraftItem_BeetlePoop_Small_C.ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_MulticraftItem_BeetlePoop_Small_C::ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_MulticraftItem_BeetlePoop_Small.PrimalItemConsumable_MulticraftItem_BeetlePoop_Small_C.ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Small");

	UPrimalItemConsumable_MulticraftItem_BeetlePoop_Small_C_ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
