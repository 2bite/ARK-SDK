// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpineyLizard_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpineyLizard_AIController_BP.SpineyLizard_AIController_BP_C.UserConstructionScript
// ()

void ASpineyLizard_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpineyLizard_AIController_BP.SpineyLizard_AIController_BP_C.UserConstructionScript");

	ASpineyLizard_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpineyLizard_AIController_BP.SpineyLizard_AIController_BP_C.ExecuteUbergraph_SpineyLizard_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpineyLizard_AIController_BP_C::ExecuteUbergraph_SpineyLizard_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpineyLizard_AIController_BP.SpineyLizard_AIController_BP_C.ExecuteUbergraph_SpineyLizard_AIController_BP");

	ASpineyLizard_AIController_BP_C_ExecuteUbergraph_SpineyLizard_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
