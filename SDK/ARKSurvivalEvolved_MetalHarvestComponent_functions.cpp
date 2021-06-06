// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MetalHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MetalHarvestComponent.MetalHarvestComponent_C.ExecuteUbergraph_MetalHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMetalHarvestComponent_C::ExecuteUbergraph_MetalHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MetalHarvestComponent.MetalHarvestComponent_C.ExecuteUbergraph_MetalHarvestComponent");

	UMetalHarvestComponent_C_ExecuteUbergraph_MetalHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
