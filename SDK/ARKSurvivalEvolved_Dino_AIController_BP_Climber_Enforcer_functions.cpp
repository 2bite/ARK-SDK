// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_AIController_BP_Climber_Enforcer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.ReceiveBeginPlay
// ()

void ADino_AIController_BP_Climber_Enforcer_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.ReceiveBeginPlay");

	ADino_AIController_BP_Climber_Enforcer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.BPSetupFindTarget
// ()

void ADino_AIController_BP_Climber_Enforcer_C::BPSetupFindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.BPSetupFindTarget");

	ADino_AIController_BP_Climber_Enforcer_C_BPSetupFindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADino_AIController_BP_Climber_Enforcer_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.BPGetTargetingDesire");

	ADino_AIController_BP_Climber_Enforcer_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.UserConstructionScript
// ()

void ADino_AIController_BP_Climber_Enforcer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.UserConstructionScript");

	ADino_AIController_BP_Climber_Enforcer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_AIController_BP_Climber_Enforcer_C::ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_AIController_BP_Climber_Enforcer.Dino_AIController_BP_Climber_Enforcer_C.ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer");

	ADino_AIController_BP_Climber_Enforcer_C_ExecuteUbergraph_Dino_AIController_BP_Climber_Enforcer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
