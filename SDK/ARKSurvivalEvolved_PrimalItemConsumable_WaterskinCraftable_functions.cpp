// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_WaterskinCraftable_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_WaterskinCraftable.PrimalItemConsumable_WaterskinCraftable_C.ExecuteUbergraph_PrimalItemConsumable_WaterskinCraftable
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_WaterskinCraftable_C::ExecuteUbergraph_PrimalItemConsumable_WaterskinCraftable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_WaterskinCraftable.PrimalItemConsumable_WaterskinCraftable_C.ExecuteUbergraph_PrimalItemConsumable_WaterskinCraftable");

	UPrimalItemConsumable_WaterskinCraftable_C_ExecuteUbergraph_PrimalItemConsumable_WaterskinCraftable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
