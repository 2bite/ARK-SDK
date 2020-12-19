// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CrystalHarvestComponent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CrystalHarvestComponent.CrystalHarvestComponent_C.ExecuteUbergraph_CrystalHarvestComponent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCrystalHarvestComponent_C::ExecuteUbergraph_CrystalHarvestComponent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CrystalHarvestComponent.CrystalHarvestComponent_C.ExecuteUbergraph_CrystalHarvestComponent");

	UCrystalHarvestComponent_C_ExecuteUbergraph_CrystalHarvestComponent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
