// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Enforcer_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.IsDinoRunning
// ()
// Parameters:
// class ADino_Character_BP_Climber_C** Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Running                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEnforcer_AnimBlueprint_C::IsDinoRunning(class ADino_Character_BP_Climber_C** Dino, bool* Running)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.IsDinoRunning");

	UEnforcer_AnimBlueprint_C_IsDinoRunning_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Running != nullptr)
		*Running = params.Running;
}


// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.GetStrafeBlendspacePlayRate
// ()
// Parameters:
// float*                         forwardVelocity                (Parm, ZeroConstructor, IsPlainOldData)
// float*                         RightVelocity                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D*              BlendspaceInputs               (Parm, ZeroConstructor, IsPlainOldData)
// float                          BlendspacePlayRate             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEnforcer_AnimBlueprint_C::GetStrafeBlendspacePlayRate(float* forwardVelocity, float* RightVelocity, struct FVector2D* BlendspaceInputs, float* BlendspacePlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.GetStrafeBlendspacePlayRate");

	UEnforcer_AnimBlueprint_C_GetStrafeBlendspacePlayRate_Params params;
	params.forwardVelocity = forwardVelocity;
	params.RightVelocity = RightVelocity;
	params.BlendspaceInputs = BlendspaceInputs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BlendspacePlayRate != nullptr)
		*BlendspacePlayRate = params.BlendspacePlayRate;
}


// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ShouldPlayClimbRunAnim
// ()
// Parameters:
// bool                           PlayClimbRun                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEnforcer_AnimBlueprint_C::ShouldPlayClimbRunAnim(bool* PlayClimbRun)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ShouldPlayClimbRunAnim");

	UEnforcer_AnimBlueprint_C_ShouldPlayClimbRunAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayClimbRun != nullptr)
		*PlayClimbRun = params.PlayClimbRun;
}


// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintUpdateAnimation
// ()
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UEnforcer_AnimBlueprint_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintUpdateAnimation");

	UEnforcer_AnimBlueprint_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintInitializeAnimation
// ()

void UEnforcer_AnimBlueprint_C::BlueprintInitializeAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.BlueprintInitializeAnimation");

	UEnforcer_AnimBlueprint_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ExecuteUbergraph_Enforcer_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEnforcer_AnimBlueprint_C::ExecuteUbergraph_Enforcer_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enforcer_AnimBlueprint.Enforcer_AnimBlueprint_C.ExecuteUbergraph_Enforcer_AnimBlueprint");

	UEnforcer_AnimBlueprint_C_ExecuteUbergraph_Enforcer_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
