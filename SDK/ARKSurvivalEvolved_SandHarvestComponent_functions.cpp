// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SandHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SandHarvestComponent.SandHarvestComponent_C.ExecuteUbergraph_SandHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USandHarvestComponent_C::ExecuteUbergraph_SandHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SandHarvestComponent.SandHarvestComponent_C.ExecuteUbergraph_SandHarvestComponent");

	USandHarvestComponent_C_ExecuteUbergraph_SandHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
