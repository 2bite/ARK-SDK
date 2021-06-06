// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BrainSlug_AIController_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BrainSlug_AIController.BrainSlug_AIController_C.ChangedAITarget
// ()

void ABrainSlug_AIController_C::ChangedAITarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_AIController.BrainSlug_AIController_C.ChangedAITarget");

	ABrainSlug_AIController_C_ChangedAITarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_AIController.BrainSlug_AIController_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABrainSlug_AIController_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_AIController.BrainSlug_AIController_C.BPGetTargetingDesire");

	ABrainSlug_AIController_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BrainSlug_AIController.BrainSlug_AIController_C.ReceiveDestroyed
// ()

void ABrainSlug_AIController_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_AIController.BrainSlug_AIController_C.ReceiveDestroyed");

	ABrainSlug_AIController_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_AIController.BrainSlug_AIController_C.UserConstructionScript
// ()

void ABrainSlug_AIController_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_AIController.BrainSlug_AIController_C.UserConstructionScript");

	ABrainSlug_AIController_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BrainSlug_AIController.BrainSlug_AIController_C.ExecuteUbergraph_BrainSlug_AIController
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABrainSlug_AIController_C::ExecuteUbergraph_BrainSlug_AIController(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BrainSlug_AIController.BrainSlug_AIController_C.ExecuteUbergraph_BrainSlug_AIController");

	ABrainSlug_AIController_C_ExecuteUbergraph_BrainSlug_AIController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
