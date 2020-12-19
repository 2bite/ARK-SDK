// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mantis_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mantis_AIController.Mantis_AIController_C.UserConstructionScript
// ()

void AMantis_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_AIController.Mantis_AIController_C.UserConstructionScript");

	AMantis_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_AIController.Mantis_AIController_C.ExecuteUbergraph_Mantis_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMantis_AIController_C::ExecuteUbergraph_Mantis_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_AIController.Mantis_AIController_C.ExecuteUbergraph_Mantis_AIController");

	AMantis_AIController_C_ExecuteUbergraph_Mantis_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
