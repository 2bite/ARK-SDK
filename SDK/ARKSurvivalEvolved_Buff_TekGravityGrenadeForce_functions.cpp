// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekGravityGrenadeForce_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGravityGrenadeForce_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BuffTickServer");

	ABuff_TekGravityGrenadeForce_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGravityGrenadeForce_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPDeactivated");

	ABuff_TekGravityGrenadeForce_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGravityGrenadeForce_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPActivated");

	ABuff_TekGravityGrenadeForce_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPPreventInstigatorMovementMode
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekGravityGrenadeForce_C::BPPreventInstigatorMovementMode(TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPPreventInstigatorMovementMode");

	ABuff_TekGravityGrenadeForce_C_BPPreventInstigatorMovementMode_Params params;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_TekGravityGrenadeForce_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.BPOverrideCharacterNewFallVelocity");

	ABuff_TekGravityGrenadeForce_C_BPOverrideCharacterNewFallVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;

	return params.ReturnValue;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.SetupGravityForce
// ()
// Parameters:
// struct FVector                 GravityCenter                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          StrengthMultiplier             (Parm, ZeroConstructor, IsPlainOldData)
// float                          EffectRadius                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGravityGrenadeForce_C::SetupGravityForce(const struct FVector& GravityCenter, float StrengthMultiplier, float EffectRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.SetupGravityForce");

	ABuff_TekGravityGrenadeForce_C_SetupGravityForce_Params params;
	params.GravityCenter = GravityCenter;
	params.StrengthMultiplier = StrengthMultiplier;
	params.EffectRadius = EffectRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.UserConstructionScript
// ()

void ABuff_TekGravityGrenadeForce_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.UserConstructionScript");

	ABuff_TekGravityGrenadeForce_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.MultiOnSetupGravityForce
// ()
// Parameters:
// struct FVector                 GravityCenter                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ForceMult                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          EffectRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          InitialLaunchDuration          (Parm, ZeroConstructor, IsPlainOldData)
// double                         ExplodeNetworkTime             (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGravityGrenadeForce_C::MultiOnSetupGravityForce(const struct FVector& GravityCenter, float ForceMult, float EffectRadius, float InitialLaunchDuration, double ExplodeNetworkTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.MultiOnSetupGravityForce");

	ABuff_TekGravityGrenadeForce_C_MultiOnSetupGravityForce_Params params;
	params.GravityCenter = GravityCenter;
	params.ForceMult = ForceMult;
	params.EffectRadius = EffectRadius;
	params.InitialLaunchDuration = InitialLaunchDuration;
	params.ExplodeNetworkTime = ExplodeNetworkTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientUpdateVelocity
// ()
// Parameters:
// struct FVector                 NewVelocity                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGravityGrenadeForce_C::ClientUpdateVelocity(const struct FVector& NewVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientUpdateVelocity");

	ABuff_TekGravityGrenadeForce_C_ClientUpdateVelocity_Params params;
	params.NewVelocity = NewVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.StopGravityEffect
// ()

void ABuff_TekGravityGrenadeForce_C::StopGravityEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.StopGravityEffect");

	ABuff_TekGravityGrenadeForce_C_StopGravityEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ForceInstigatorNetUpdate
// ()

void ABuff_TekGravityGrenadeForce_C::ForceInstigatorNetUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ForceInstigatorNetUpdate");

	ABuff_TekGravityGrenadeForce_C_ForceInstigatorNetUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientSyncDesiredFallVelocity
// ()
// Parameters:
// struct FVector                 Vel                            (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGravityGrenadeForce_C::ClientSyncDesiredFallVelocity(const struct FVector& Vel)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ClientSyncDesiredFallVelocity");

	ABuff_TekGravityGrenadeForce_C_ClientSyncDesiredFallVelocity_Params params;
	params.Vel = Vel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ExecuteUbergraph_Buff_TekGravityGrenadeForce
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekGravityGrenadeForce_C::ExecuteUbergraph_Buff_TekGravityGrenadeForce(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekGravityGrenadeForce.Buff_TekGravityGrenadeForce_C.ExecuteUbergraph_Buff_TekGravityGrenadeForce");

	ABuff_TekGravityGrenadeForce_C_ExecuteUbergraph_Buff_TekGravityGrenadeForce_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
