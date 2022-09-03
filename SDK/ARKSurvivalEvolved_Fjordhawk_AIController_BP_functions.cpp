// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ResetAttackTimers
// ()

void AFjordhawk_AIController_BP_C::ResetAttackTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ResetAttackTimers");

	AFjordhawk_AIController_BP_C_ResetAttackTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.StartWaitingForRespawn
// ()

void AFjordhawk_AIController_BP_C::StartWaitingForRespawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.StartWaitingForRespawn");

	AFjordhawk_AIController_BP_C_StartWaitingForRespawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindTeleportLocation
// (Exec, Native, Event, Static, NetMulticast, MulticastDelegate, NetServer, HasDefaults, BlueprintEvent)
// Parameters:
// class AShooterCharacter*       InputPin                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FRotator                ReturnValue2                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

struct FVector AFjordhawk_AIController_BP_C::STATIC_FindTeleportLocation(class AShooterCharacter* InputPin, struct FRotator* ReturnValue2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindTeleportLocation");

	AFjordhawk_AIController_BP_C_FindTeleportLocation_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnValue2 != nullptr)
		*ReturnValue2 = params.ReturnValue2;

	return params.ReturnValue;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.OnPossess
// ()
// Parameters:
// class APawn**                  PossessedPawn                  (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_AIController_BP_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.OnPossess");

	AFjordhawk_AIController_BP_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.CheckForRespawnedPlayer
// (NetReliable, NetRequest, Exec, Event, MulticastDelegate, Public, NetServer, HasDefaults, BlueprintEvent)

void AFjordhawk_AIController_BP_C::CheckForRespawnedPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.CheckForRespawnedPlayer");

	AFjordhawk_AIController_BP_C_CheckForRespawnedPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveDestroyed
// ()

void AFjordhawk_AIController_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveDestroyed");

	AFjordhawk_AIController_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveBeginPlay
// ()

void AFjordhawk_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ReceiveBeginPlay");

	AFjordhawk_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.PerformanceThrottledTick
// ()

void AFjordhawk_AIController_BP_C::PerformanceThrottledTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.PerformanceThrottledTick");

	AFjordhawk_AIController_BP_C_PerformanceThrottledTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindLandingLocation
// ()
// Parameters:
// struct FVector                 DesiredLOocation               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_AIController_BP_C::FindLandingLocation(struct FVector* DesiredLOocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.FindLandingLocation");

	AFjordhawk_AIController_BP_C_FindLandingLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredLOocation != nullptr)
		*DesiredLOocation = params.DesiredLOocation;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPOnFleeEvent
// ()

void AFjordhawk_AIController_BP_C::BPOnFleeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPOnFleeEvent");

	AFjordhawk_AIController_BP_C_BPOnFleeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFjordhawk_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.BPGetTargetingDesire");

	AFjordhawk_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.UserConstructionScript
// ()

void AFjordhawk_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.UserConstructionScript");

	AFjordhawk_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ExecuteUbergraph_Fjordhawk_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_AIController_BP_C::ExecuteUbergraph_Fjordhawk_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_AIController_BP.Fjordhawk_AIController_BP_C.ExecuteUbergraph_Fjordhawk_AIController_BP");

	AFjordhawk_AIController_BP_C_ExecuteUbergraph_Fjordhawk_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
