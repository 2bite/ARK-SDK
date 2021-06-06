// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium.PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C.ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C::ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium.PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C.ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium");

	UPrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_C_ExecuteUbergraph_PrimalItemConsumable_MulticraftItem_BeetlePoop_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
