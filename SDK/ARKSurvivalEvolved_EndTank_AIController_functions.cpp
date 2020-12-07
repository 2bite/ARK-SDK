// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndTank_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndTank_AIController.EndTank_AIController_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEndTank_AIController_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_AIController.EndTank_AIController_C.BPGetTargetingDesire");

	AEndTank_AIController_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndTank_AIController.EndTank_AIController_C.UserConstructionScript
// ()

void AEndTank_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_AIController.EndTank_AIController_C.UserConstructionScript");

	AEndTank_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndTank_AIController.EndTank_AIController_C.ExecuteUbergraph_EndTank_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndTank_AIController_C::ExecuteUbergraph_EndTank_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndTank_AIController.EndTank_AIController_C.ExecuteUbergraph_EndTank_AIController");

	AEndTank_AIController_C_ExecuteUbergraph_EndTank_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
