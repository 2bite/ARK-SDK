// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Euryp_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Euryp_AIController.Euryp_AIController_C.UserConstructionScript
// ()

void AEuryp_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Euryp_AIController.Euryp_AIController_C.UserConstructionScript");

	AEuryp_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Euryp_AIController.Euryp_AIController_C.ExecuteUbergraph_Euryp_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEuryp_AIController_C::ExecuteUbergraph_Euryp_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Euryp_AIController.Euryp_AIController_C.ExecuteUbergraph_Euryp_AIController");

	AEuryp_AIController_C_ExecuteUbergraph_Euryp_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
