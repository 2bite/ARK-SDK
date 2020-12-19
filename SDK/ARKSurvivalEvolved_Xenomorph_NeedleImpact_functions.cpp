// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_NeedleImpact_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_NeedleImpact.Xenomorph_NeedleImpact_C.UserConstructionScript
// ()

void AXenomorph_NeedleImpact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_NeedleImpact.Xenomorph_NeedleImpact_C.UserConstructionScript");

	AXenomorph_NeedleImpact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_NeedleImpact.Xenomorph_NeedleImpact_C.ExecuteUbergraph_Xenomorph_NeedleImpact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_NeedleImpact_C::ExecuteUbergraph_Xenomorph_NeedleImpact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_NeedleImpact.Xenomorph_NeedleImpact_C.ExecuteUbergraph_Xenomorph_NeedleImpact");

	AXenomorph_NeedleImpact_C_ExecuteUbergraph_Xenomorph_NeedleImpact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
