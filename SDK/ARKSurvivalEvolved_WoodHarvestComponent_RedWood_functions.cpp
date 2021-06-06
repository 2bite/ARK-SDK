// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_RedWood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_RedWood.WoodHarvestComponent_RedWood_C.ExecuteUbergraph_WoodHarvestComponent_RedWood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_RedWood_C::ExecuteUbergraph_WoodHarvestComponent_RedWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_RedWood.WoodHarvestComponent_RedWood_C.ExecuteUbergraph_WoodHarvestComponent_RedWood");

	UWoodHarvestComponent_RedWood_C_ExecuteUbergraph_WoodHarvestComponent_RedWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
