// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodHarvestComponent_LessWood_Swamp_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodHarvestComponent_LessWood_Swamp.WoodHarvestComponent_LessWood_Swamp_C.ExecuteUbergraph_WoodHarvestComponent_LessWood_Swamp
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWoodHarvestComponent_LessWood_Swamp_C::ExecuteUbergraph_WoodHarvestComponent_LessWood_Swamp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodHarvestComponent_LessWood_Swamp.WoodHarvestComponent_LessWood_Swamp_C.ExecuteUbergraph_WoodHarvestComponent_LessWood_Swamp");

	UWoodHarvestComponent_LessWood_Swamp_C_ExecuteUbergraph_WoodHarvestComponent_LessWood_Swamp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
