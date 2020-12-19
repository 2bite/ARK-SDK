// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapClimbPick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify
// ()
// Parameters:
// struct FWeaponAnim             Animation                      (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPlayBothFirstAndThirdPerson   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToInstigator         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bPauseOnFinish1P               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void AWeapClimbPick_C::BPOnWeaponAnimPlayedNotify(float* InPlayRate, bool* bPlayBothFirstAndThirdPerson, bool* bReplicate, bool* bReplicateToInstigator, bool* bPauseOnFinish1P, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer, struct FWeaponAnim* Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.BPOnWeaponAnimPlayedNotify");

	AWeapClimbPick_C_BPOnWeaponAnimPlayedNotify_Params params;
	params.InPlayRate = InPlayRate;
	params.bPlayBothFirstAndThirdPerson = bPlayBothFirstAndThirdPerson;
	params.bReplicate = bReplicate;
	params.bReplicateToInstigator = bReplicateToInstigator;
	params.bPauseOnFinish1P = bPauseOnFinish1P;
	params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	params.bForceTickPoseOnServer = bForceTickPoseOnServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Animation != nullptr)
		*Animation = params.Animation;
}


// Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent
// ()

void AWeapClimbPick_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.StartUnequipEvent");

	AWeapClimbPick_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV
// ()
// Parameters:
// float*                         inFOV                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWeapClimbPick_C::BPModifyFOV(float* inFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.BPModifyFOV");

	AWeapClimbPick_C_BPModifyFOV_Params params;
	params.inFOV = inFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation
// ()
// Parameters:
// class UParticleSystemComponent* Particle_System                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NewSourcePoint                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapClimbPick_C::SetSourceLocation(class UParticleSystemComponent* Particle_System, const struct FVector& NewSourcePoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.SetSourceLocation");

	AWeapClimbPick_C_SetSourceLocation_Params params;
	params.Particle_System = Particle_System;
	params.NewSourcePoint = NewSourcePoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo
// ()
// Parameters:
// class UParticleSystemComponent* Particle_System                (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystem*         New_Template                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapClimbPick_C::SetTemplateTo(class UParticleSystemComponent* Particle_System, class UParticleSystem* New_Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.SetTemplateTo");

	AWeapClimbPick_C_SetTemplateTo_Params params;
	params.Particle_System = Particle_System;
	params.New_Template = New_Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bClimbing                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AnchorPosition                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 AnchorNormal                   (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bCanClimb                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bCanLand                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ClimbLocation                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ClimbNormal                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool*                          bHudVisible                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapClimbPick_C::BPUpdateClimbTarget(float* DeltaSeconds, bool* bClimbing, bool* bCanClimb, bool* bCanLand, bool* bHudVisible, struct FVector* AnchorPosition, struct FVector* AnchorNormal, struct FVector* ClimbLocation, struct FVector* ClimbNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.BPUpdateClimbTarget");

	AWeapClimbPick_C_BPUpdateClimbTarget_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.bClimbing = bClimbing;
	params.bCanClimb = bCanClimb;
	params.bCanLand = bCanLand;
	params.bHudVisible = bHudVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnchorPosition != nullptr)
		*AnchorPosition = params.AnchorPosition;
	if (AnchorNormal != nullptr)
		*AnchorNormal = params.AnchorNormal;
	if (ClimbLocation != nullptr)
		*ClimbLocation = params.ClimbLocation;
	if (ClimbNormal != nullptr)
		*ClimbNormal = params.ClimbNormal;
}


// Function WeapClimbPick.WeapClimbPick_C.UserConstructionScript
// ()

void AWeapClimbPick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.UserConstructionScript");

	AWeapClimbPick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapClimbPick.WeapClimbPick_C.ExecuteUbergraph_WeapClimbPick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapClimbPick_C::ExecuteUbergraph_WeapClimbPick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapClimbPick.WeapClimbPick_C.ExecuteUbergraph_WeapClimbPick");

	AWeapClimbPick_C_ExecuteUbergraph_WeapClimbPick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
