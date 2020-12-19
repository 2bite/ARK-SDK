// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_RootMotion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.WantsLocomotionTransition
// ()
// Parameters:
// bool                           WantsTransition                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_RootMotion_C::WantsLocomotionTransition(bool* WantsTransition)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.WantsLocomotionTransition");

	ADino_Character_BP_RootMotion_C_WantsLocomotionTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WantsTransition != nullptr)
		*WantsTransition = params.WantsTransition;
}


// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.GetMovementMontage
// ()
// Parameters:
// TEnumAsByte<ERootMotionMovementMode> Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_RootMotion_C::GetMovementMontage(TEnumAsByte<ERootMotionMovementMode> Mode, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.GetMovementMontage");

	ADino_Character_BP_RootMotion_C_GetMovementMontage_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.IsLocomotionBlocked
// ()
// Parameters:
// bool                           bLocked                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_RootMotion_C::IsLocomotionBlocked(bool* bLocked)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.IsLocomotionBlocked");

	ADino_Character_BP_RootMotion_C_IsLocomotionBlocked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bLocked != nullptr)
		*bLocked = params.bLocked;
}


// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.TickLocomotion
// ()

void ADino_Character_BP_RootMotion_C::TickLocomotion()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.TickLocomotion");

	ADino_Character_BP_RootMotion_C_TickLocomotion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.UserConstructionScript
// ()

void ADino_Character_BP_RootMotion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.UserConstructionScript");

	ADino_Character_BP_RootMotion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_RootMotion_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.ReceiveTick");

	ADino_Character_BP_RootMotion_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.DeltaBlockTransition
// ()
// Parameters:
// int                            Delta                          (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_RootMotion_C::DeltaBlockTransition(int Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.DeltaBlockTransition");

	ADino_Character_BP_RootMotion_C_DeltaBlockTransition_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.AnimNotify_LocomotionDone
// ()

void ADino_Character_BP_RootMotion_C::AnimNotify_LocomotionDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.AnimNotify_LocomotionDone");

	ADino_Character_BP_RootMotion_C_AnimNotify_LocomotionDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.ExecuteUbergraph_Dino_Character_BP_RootMotion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_RootMotion_C::ExecuteUbergraph_Dino_Character_BP_RootMotion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_RootMotion.Dino_Character_BP_RootMotion_C.ExecuteUbergraph_Dino_Character_BP_RootMotion");

	ADino_Character_BP_RootMotion_C_ExecuteUbergraph_Dino_Character_BP_RootMotion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
