// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Glider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Glider.Buff_Glider_C.GetGliderInactiveMeshTargetRotVals
// ()
// Parameters:
// struct FRotator                Rot                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          InterpSpeed                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::GetGliderInactiveMeshTargetRotVals(struct FRotator* Rot, float* InterpSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.GetGliderInactiveMeshTargetRotVals");

	ABuff_Glider_C_GetGliderInactiveMeshTargetRotVals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Rot != nullptr)
		*Rot = params.Rot;
	if (InterpSpeed != nullptr)
		*InterpSpeed = params.InterpSpeed;
}


// Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateHighestZ
// ()

void ABuff_Glider_C::ServerTick_UpdateHighestZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateHighestZ");

	ABuff_Glider_C_ServerTick_UpdateHighestZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.ServerTick_ReduceDurability
// ()

void ABuff_Glider_C::ServerTick_ReduceDurability()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.ServerTick_ReduceDurability");

	ABuff_Glider_C_ServerTick_ReduceDurability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.Tick_UpdatePlayerMesh
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::Tick_UpdatePlayerMesh(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.Tick_UpdatePlayerMesh");

	ABuff_Glider_C_Tick_UpdatePlayerMesh_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.UpdateIsPullingUp
// ()

void ABuff_Glider_C::UpdateIsPullingUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.UpdateIsPullingUp");

	ABuff_Glider_C_UpdateIsPullingUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.GetCurrentGliderRotationRate
// ()
// Parameters:
// struct FRotator                Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::GetCurrentGliderRotationRate(struct FRotator* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.GetCurrentGliderRotationRate");

	ABuff_Glider_C_GetCurrentGliderRotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Glider.Buff_Glider_C.UpdateSavedCameraView
// ()

void ABuff_Glider_C::UpdateSavedCameraView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.UpdateSavedCameraView");

	ABuff_Glider_C_UpdateSavedCameraView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.BPInitializedCharacterAnimScriptInstance
// ()

void ABuff_Glider_C::BPInitializedCharacterAnimScriptInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.BPInitializedCharacterAnimScriptInstance");

	ABuff_Glider_C_BPInitializedCharacterAnimScriptInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.BPCharacterDetach
// ()

void ABuff_Glider_C::BPCharacterDetach()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.BPCharacterDetach");

	ABuff_Glider_C_BPCharacterDetach_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.UpdateGliderSFX
// ()

void ABuff_Glider_C::UpdateGliderSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.UpdateGliderSFX");

	ABuff_Glider_C_UpdateGliderSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.ReceiveDestroyed
// ()

void ABuff_Glider_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.ReceiveDestroyed");

	ABuff_Glider_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.BPOverrideWeaponBob
// ()
// Parameters:
// struct FVector                 InWeaponBob                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_Glider_C::BPOverrideWeaponBob(struct FVector* InWeaponBob)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.BPOverrideWeaponBob");

	ABuff_Glider_C_BPOverrideWeaponBob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InWeaponBob != nullptr)
		*InWeaponBob = params.InWeaponBob;

	return params.ReturnValue;
}


// Function Buff_Glider.Buff_Glider_C.CheckForGliderStuckOnWall
// ()
// Parameters:
// bool                           CanKeepGliding                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::CheckForGliderStuckOnWall(bool* CanKeepGliding)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.CheckForGliderStuckOnWall");

	ABuff_Glider_C_CheckForGliderStuckOnWall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanKeepGliding != nullptr)
		*CanKeepGliding = params.CanKeepGliding;
}


// Function Buff_Glider.Buff_Glider_C.GetGlideSpeedRatio
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::GetGlideSpeedRatio(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.GetGlideSpeedRatio");

	ABuff_Glider_C_GetGlideSpeedRatio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Glider.Buff_Glider_C.BP_ModifyCharacterFOV
// ()
// Parameters:
// float*                         inFOV                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Glider_C::BP_ModifyCharacterFOV(float* inFOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.BP_ModifyCharacterFOV");

	ABuff_Glider_C_BP_ModifyCharacterFOV_Params params;
	params.inFOV = inFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Glider.Buff_Glider_C.ServerTick_GlideFalling
// (NetRequest, Exec, NetResponse, Static, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)

void ABuff_Glider_C::STATIC_ServerTick_GlideFalling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.ServerTick_GlideFalling");

	ABuff_Glider_C_ServerTick_GlideFalling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.GetGliderMesh
// ()
// Parameters:
// bool                           foundMesh                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  meshRef                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::GetGliderMesh(bool* foundMesh, class USkeletalMeshComponent** meshRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.GetGliderMesh");

	ABuff_Glider_C_GetGliderMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (foundMesh != nullptr)
		*foundMesh = params.foundMesh;
	if (meshRef != nullptr)
		*meshRef = params.meshRef;
}


// Function Buff_Glider.Buff_Glider_C.AttachWingVFX
// ()

void ABuff_Glider_C::AttachWingVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.AttachWingVFX");

	ABuff_Glider_C_AttachWingVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.UpdateVelocityForVFX
// ()

void ABuff_Glider_C::UpdateVelocityForVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.UpdateVelocityForVFX");

	ABuff_Glider_C_UpdateVelocityForVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.StopUsingGlider
// ()

void ABuff_Glider_C::StopUsingGlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.StopUsingGlider");

	ABuff_Glider_C_StopUsingGlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.GetAngleDeltaBetweenVectors
// ()
// Parameters:
// struct FVector                 A                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 B                              (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 AroundAxis                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          angleFromA_ToB                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::GetAngleDeltaBetweenVectors(const struct FVector& A, const struct FVector& B, const struct FVector& AroundAxis, float* angleFromA_ToB)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.GetAngleDeltaBetweenVectors");

	ABuff_Glider_C_GetAngleDeltaBetweenVectors_Params params;
	params.A = A;
	params.B = B;
	params.AroundAxis = AroundAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (angleFromA_ToB != nullptr)
		*angleFromA_ToB = params.angleFromA_ToB;
}


// Function Buff_Glider.Buff_Glider_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_Glider_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.AllowPostProcessEffect");

	ABuff_Glider_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Glider.Buff_Glider_C.GetBuffPostprocessIntensity
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Glider_C::GetBuffPostprocessIntensity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.GetBuffPostprocessIntensity");

	ABuff_Glider_C_GetBuffPostprocessIntensity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_Glider.Buff_Glider_C.BuffAdjustDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm, OutParm, ReferenceParm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 TheDamgeType                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABuff_Glider_C::BuffAdjustDamage(float* Damage, class AController** EventInstigator, class AActor** DamageCauser, class UClass** TheDamgeType, struct FHitResult* HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.BuffAdjustDamage");

	ABuff_Glider_C_BuffAdjustDamage_Params params;
	params.Damage = Damage;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.TheDamgeType = TheDamgeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitInfo != nullptr)
		*HitInfo = params.HitInfo;

	return params.ReturnValue;
}


// Function Buff_Glider.Buff_Glider_C.AreRotatorsNearlyEqual
// ()
// Parameters:
// struct FRotator                rotA                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                RotB                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Error                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::AreRotatorsNearlyEqual(const struct FRotator& rotA, const struct FRotator& RotB, float Error, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.AreRotatorsNearlyEqual");

	ABuff_Glider_C_AreRotatorsNearlyEqual_Params params;
	params.rotA = rotA;
	params.RotB = RotB;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateGlideVelocity
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)

void ABuff_Glider_C::STATIC_ServerTick_UpdateGlideVelocity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateGlideVelocity");

	ABuff_Glider_C_ServerTick_UpdateGlideVelocity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_NonDedicated
// ()

void ABuff_Glider_C::UpdateGliderByState_NonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_NonDedicated");

	ABuff_Glider_C_UpdateGliderByState_NonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_ServerAndClient
// (NetReliable, Exec, Native, Event, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)

void ABuff_Glider_C::STATIC_UpdateGliderByState_ServerAndClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_ServerAndClient");

	ABuff_Glider_C_UpdateGliderByState_ServerAndClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_Server
// (Event, NetResponse, Static, NetMulticast, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)

void ABuff_Glider_C::STATIC_UpdateGliderByState_Server()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.UpdateGliderByState_Server");

	ABuff_Glider_C_UpdateGliderByState_Server_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.OnRep_GliderState_Current
// ()

void ABuff_Glider_C::OnRep_GliderState_Current()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.OnRep_GliderState_Current");

	ABuff_Glider_C_OnRep_GliderState_Current_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.IsGliderActive
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::IsGliderActive(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.IsGliderActive");

	ABuff_Glider_C_IsGliderActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Glider.Buff_Glider_C.GetGlideSpeedRatio_Pure
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::GetGlideSpeedRatio_Pure(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.GetGlideSpeedRatio_Pure");

	ABuff_Glider_C_GetGlideSpeedRatio_Pure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Glider.Buff_Glider_C.GetDefaultOwningPlayer
// ()
// Parameters:
// class AShooterCharacter*       Ref                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::GetDefaultOwningPlayer(class AShooterCharacter** Ref)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.GetDefaultOwningPlayer");

	ABuff_Glider_C_GetDefaultOwningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Ref != nullptr)
		*Ref = params.Ref;
}


// Function Buff_Glider.Buff_Glider_C.IsPlayerGrounded
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::IsPlayerGrounded(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.IsPlayerGrounded");

	ABuff_Glider_C_IsPlayerGrounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Glider.Buff_Glider_C.Can Use Glider
// ()
// Parameters:
// bool                           isToStart                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::Can_Use_Glider(bool isToStart, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.Can Use Glider");

	ABuff_Glider_C_Can_Use_Glider_Params params;
	params.isToStart = isToStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Buff_Glider.Buff_Glider_C.BPOverrideCharacterNewFallVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_Glider_C::BPOverrideCharacterNewFallVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.BPOverrideCharacterNewFallVelocity");

	ABuff_Glider_C_BPOverrideCharacterNewFallVelocity_Params params;
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


// Function Buff_Glider.Buff_Glider_C.Clamp LocationZ
// ()

void ABuff_Glider_C::Clamp_LocationZ()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.Clamp LocationZ");

	ABuff_Glider_C_Clamp_LocationZ_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.UpdateGliderFX
// ()

void ABuff_Glider_C::UpdateGliderFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.UpdateGliderFX");

	ABuff_Glider_C_UpdateGliderFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.BPDeactivated");

	ABuff_Glider_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.Reset Owning PlayerVariables
// ()

void ABuff_Glider_C::Reset_Owning_PlayerVariables()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.Reset Owning PlayerVariables");

	ABuff_Glider_C_Reset_Owning_PlayerVariables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.ClampPlayerVelocity
// ()
// Parameters:
// float                          MaxVelocity                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::ClampPlayerVelocity(float MaxVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.ClampPlayerVelocity");

	ABuff_Glider_C_ClampPlayerVelocity_Params params;
	params.MaxVelocity = MaxVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.NetSetCurrentGliderState
// ()
// Parameters:
// TEnumAsByte<E_GliderStates>    NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::NetSetCurrentGliderState(TEnumAsByte<E_GliderStates> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.NetSetCurrentGliderState");

	ABuff_Glider_C_NetSetCurrentGliderState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.BuffTickServer");

	ABuff_Glider_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateGlidingRotation
// (Native, Event, NetResponse, Static, MulticastDelegate, Protected, NetServer, HasOutParms, HasDefaults, BlueprintPure, NetValidate)

void ABuff_Glider_C::STATIC_ServerTick_UpdateGlidingRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.ServerTick_UpdateGlidingRotation");

	ABuff_Glider_C_ServerTick_UpdateGlidingRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.BuffTickClient");

	ABuff_Glider_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.ClientSetGlidingState
// ()
// Parameters:
// TEnumAsByte<E_GliderStates>    NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::ClientSetGlidingState(TEnumAsByte<E_GliderStates> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.ClientSetGlidingState");

	ABuff_Glider_C_ClientSetGlidingState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.UserConstructionScript
// ()

void ABuff_Glider_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.UserConstructionScript");

	ABuff_Glider_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.InpActEvt_Jump_K2Node_InputActionEvent_104
// ()

void ABuff_Glider_C::InpActEvt_Jump_K2Node_InputActionEvent_104()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.InpActEvt_Jump_K2Node_InputActionEvent_104");

	ABuff_Glider_C_InpActEvt_Jump_K2Node_InputActionEvent_104_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.InpActEvt_Run_K2Node_InputActionEvent_103
// ()

void ABuff_Glider_C::InpActEvt_Run_K2Node_InputActionEvent_103()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.InpActEvt_Run_K2Node_InputActionEvent_103");

	ABuff_Glider_C_InpActEvt_Run_K2Node_InputActionEvent_103_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.InpActEvt_Run_K2Node_InputActionEvent_102
// ()

void ABuff_Glider_C::InpActEvt_Run_K2Node_InputActionEvent_102()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.InpActEvt_Run_K2Node_InputActionEvent_102");

	ABuff_Glider_C_InpActEvt_Run_K2Node_InputActionEvent_102_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.InpActEvt_RunToggle_K2Node_InputActionEvent_101
// ()

void ABuff_Glider_C::InpActEvt_RunToggle_K2Node_InputActionEvent_101()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.InpActEvt_RunToggle_K2Node_InputActionEvent_101");

	ABuff_Glider_C_InpActEvt_RunToggle_K2Node_InputActionEvent_101_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_45
// ()

void ABuff_Glider_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_45()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_45");

	ABuff_Glider_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_45_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.Server_RequestSetThrusterState
// ()
// Parameters:
// TEnumAsByte<E_GliderStates>    NewState                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::Server_RequestSetThrusterState(TEnumAsByte<E_GliderStates> NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.Server_RequestSetThrusterState");

	ABuff_Glider_C_Server_RequestSetThrusterState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.ReceiveBeginPlay
// ()

void ABuff_Glider_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.ReceiveBeginPlay");

	ABuff_Glider_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.Multi_GlideStart
// ()
// Parameters:
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          newGlideMult                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::Multi_GlideStart(const struct FRotator& NewRotation, float newGlideMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.Multi_GlideStart");

	ABuff_Glider_C_Multi_GlideStart_Params params;
	params.NewRotation = NewRotation;
	params.newGlideMult = newGlideMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.Client_SyncGlidingVars
// ()
// Parameters:
// struct FVector                 NewVelocity                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                NewRotation                    (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::Client_SyncGlidingVars(const struct FVector& NewVelocity, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.Client_SyncGlidingVars");

	ABuff_Glider_C_Client_SyncGlidingVars_Params params;
	params.NewVelocity = NewVelocity;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.OnPlayerCapsuleHit
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 NormalImpulse                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void ABuff_Glider_C::OnPlayerCapsuleHit(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.OnPlayerCapsuleHit");

	ABuff_Glider_C_OnPlayerCapsuleHit_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Buff_Glider.Buff_Glider_C.InitGlider
// ()

void ABuff_Glider_C::InitGlider()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.InitGlider");

	ABuff_Glider_C_InitGlider_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Glider.Buff_Glider_C.ExecuteUbergraph_Buff_Glider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Glider_C::ExecuteUbergraph_Buff_Glider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Glider.Buff_Glider_C.ExecuteUbergraph_Buff_Glider");

	ABuff_Glider_C_ExecuteUbergraph_Buff_Glider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
