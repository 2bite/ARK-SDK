// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ammonite_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ammonite_AIController.Ammonite_AIController_C.BPShouldNotifyNeighbor
// ()
// Parameters:
// class APrimalDinoCharacter**   neighbor                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AAmmonite_AIController_C::BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammonite_AIController.Ammonite_AIController_C.BPShouldNotifyNeighbor");

	AAmmonite_AIController_C_BPShouldNotifyNeighbor_Params params;
	params.neighbor = neighbor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Ammonite_AIController.Ammonite_AIController_C.UserConstructionScript
// ()

void AAmmonite_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammonite_AIController.Ammonite_AIController_C.UserConstructionScript");

	AAmmonite_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ammonite_AIController.Ammonite_AIController_C.ExecuteUbergraph_Ammonite_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAmmonite_AIController_C::ExecuteUbergraph_Ammonite_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ammonite_AIController.Ammonite_AIController_C.ExecuteUbergraph_Ammonite_AIController");

	AAmmonite_AIController_C_ExecuteUbergraph_Ammonite_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
