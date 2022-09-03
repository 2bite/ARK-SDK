// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MetalHarvestComponent_Rich_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MetalHarvestComponent_Rich.MetalHarvestComponent_Rich_C.ExecuteUbergraph_MetalHarvestComponent_Rich
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMetalHarvestComponent_Rich_C::ExecuteUbergraph_MetalHarvestComponent_Rich(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MetalHarvestComponent_Rich.MetalHarvestComponent_Rich_C.ExecuteUbergraph_MetalHarvestComponent_Rich");

	UMetalHarvestComponent_Rich_C_ExecuteUbergraph_MetalHarvestComponent_Rich_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
