// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpineyNeedleImpact_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpineyNeedleImpact.SpineyNeedleImpact_C.UserConstructionScript
// ()

void ASpineyNeedleImpact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpineyNeedleImpact.SpineyNeedleImpact_C.UserConstructionScript");

	ASpineyNeedleImpact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpineyNeedleImpact.SpineyNeedleImpact_C.ExecuteUbergraph_SpineyNeedleImpact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpineyNeedleImpact_C::ExecuteUbergraph_SpineyNeedleImpact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpineyNeedleImpact.SpineyNeedleImpact_C.ExecuteUbergraph_SpineyNeedleImpact");

	ASpineyNeedleImpact_C_ExecuteUbergraph_SpineyNeedleImpact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
