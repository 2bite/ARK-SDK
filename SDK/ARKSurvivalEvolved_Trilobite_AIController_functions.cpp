// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Trilobite_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Trilobite_AIController.Trilobite_AIController_C.UserConstructionScript
// ()

void ATrilobite_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trilobite_AIController.Trilobite_AIController_C.UserConstructionScript");

	ATrilobite_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Trilobite_AIController.Trilobite_AIController_C.ExecuteUbergraph_Trilobite_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATrilobite_AIController_C::ExecuteUbergraph_Trilobite_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Trilobite_AIController.Trilobite_AIController_C.ExecuteUbergraph_Trilobite_AIController");

	ATrilobite_AIController_C_ExecuteUbergraph_Trilobite_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
