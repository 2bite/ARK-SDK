// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_LessWood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_LessWood.WoodHarvestComponent_LessWood_C.ExecuteUbergraph_WoodHarvestComponent_LessWood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_LessWood_C::ExecuteUbergraph_WoodHarvestComponent_LessWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_LessWood.WoodHarvestComponent_LessWood_C.ExecuteUbergraph_WoodHarvestComponent_LessWood");

	UWoodHarvestComponent_LessWood_C_ExecuteUbergraph_WoodHarvestComponent_LessWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
