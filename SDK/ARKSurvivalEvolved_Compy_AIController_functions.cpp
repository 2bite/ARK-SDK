// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Compy_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Compy_AIController.Compy_AIController_C.UserConstructionScript
// ()

void ACompy_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Compy_AIController.Compy_AIController_C.UserConstructionScript");

	ACompy_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Compy_AIController.Compy_AIController_C.ExecuteUbergraph_Compy_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACompy_AIController_C::ExecuteUbergraph_Compy_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Compy_AIController.Compy_AIController_C.ExecuteUbergraph_Compy_AIController");

	ACompy_AIController_C_ExecuteUbergraph_Compy_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
