// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_Ex_RedWood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_Ex_RedWood.WoodHarvestComponent_Ex_RedWood_C.ExecuteUbergraph_WoodHarvestComponent_Ex_RedWood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_Ex_RedWood_C::ExecuteUbergraph_WoodHarvestComponent_Ex_RedWood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_Ex_RedWood.WoodHarvestComponent_Ex_RedWood_C.ExecuteUbergraph_WoodHarvestComponent_Ex_RedWood");

	UWoodHarvestComponent_Ex_RedWood_C_ExecuteUbergraph_WoodHarvestComponent_Ex_RedWood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
