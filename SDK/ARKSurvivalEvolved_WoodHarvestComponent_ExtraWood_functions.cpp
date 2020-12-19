// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_ExtraWood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_ExtraWood.WoodHarvestComponent_ExtraWood_C.ExecuteUbergraph_WoodHarvestComponent_ExtraWood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_ExtraWood_C::ExecuteUbergraph_WoodHarvestComponent_ExtraWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_ExtraWood.WoodHarvestComponent_ExtraWood_C.ExecuteUbergraph_WoodHarvestComponent_ExtraWood");

	UWoodHarvestComponent_ExtraWood_C_ExecuteUbergraph_WoodHarvestComponent_ExtraWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
