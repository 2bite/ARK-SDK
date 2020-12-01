// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ObsidianHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObsidianHarvestComponent.ObsidianHarvestComponent_C.ExecuteUbergraph_ObsidianHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UObsidianHarvestComponent_C::ExecuteUbergraph_ObsidianHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ObsidianHarvestComponent.ObsidianHarvestComponent_C.ExecuteUbergraph_ObsidianHarvestComponent");

	UObsidianHarvestComponent_C_ExecuteUbergraph_ObsidianHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
