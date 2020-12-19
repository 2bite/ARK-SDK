// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BubbleHazard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BubbleHazard_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPDeactivated");

	ABuff_BubbleHazard_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BP_OverrideCharacterFlyingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_BubbleHazard_C::BP_OverrideCharacterFlyingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.BP_OverrideCharacterFlyingVelocity");

	ABuff_BubbleHazard_C_BP_OverrideCharacterFlyingVelocity_Params params;
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


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.PopBubble
// ()

void ABuff_BubbleHazard_C::PopBubble()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.PopBubble");

	ABuff_BubbleHazard_C_PopBubble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BubbleHazard_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPServerHandleNetExecCommand");

	ABuff_BubbleHazard_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPHandleOnStartFire
// (NetReliable, Exec, Native, Event, NetResponse, Static, NetMulticast, Protected, Delegate, NetServer, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BubbleHazard_C::STATIC_BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPHandleOnStartFire");

	ABuff_BubbleHazard_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BubbleHazard_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.BuffTickClient");

	ABuff_BubbleHazard_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.AttachBubble
// ()
// Parameters:
// struct FVector                 BubbleLocation                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BubbleHazard_C::AttachBubble(const struct FVector& BubbleLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.AttachBubble");

	ABuff_BubbleHazard_C_AttachBubble_Params params;
	params.BubbleLocation = BubbleLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BP_OverrideCharacterSwimmingVelocity
// ()
// Parameters:
// struct FVector                 InitialVelocity                (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 Gravity                        (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          FluidFriction                  (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float                          NetBuoyancy                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector ABuff_BubbleHazard_C::BP_OverrideCharacterSwimmingVelocity(float* DeltaTime, struct FVector* InitialVelocity, struct FVector* Gravity, float* FluidFriction, float* NetBuoyancy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.BP_OverrideCharacterSwimmingVelocity");

	ABuff_BubbleHazard_C_BP_OverrideCharacterSwimmingVelocity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InitialVelocity != nullptr)
		*InitialVelocity = params.InitialVelocity;
	if (Gravity != nullptr)
		*Gravity = params.Gravity;
	if (FluidFriction != nullptr)
		*FluidFriction = params.FluidFriction;
	if (NetBuoyancy != nullptr)
		*NetBuoyancy = params.NetBuoyancy;

	return params.ReturnValue;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BubbleHazard_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.BuffTickServer");

	ABuff_BubbleHazard_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BubbleHazard_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.BPSetupForInstigator");

	ABuff_BubbleHazard_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.UserConstructionScript
// ()

void ABuff_BubbleHazard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.UserConstructionScript");

	ABuff_BubbleHazard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.InitLocation
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BubbleHazard_C::InitLocation(const struct FVector& Location, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.InitLocation");

	ABuff_BubbleHazard_C_InitLocation_Params params;
	params.Location = Location;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BubbleHazard.Buff_BubbleHazard_C.ExecuteUbergraph_Buff_BubbleHazard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BubbleHazard_C::ExecuteUbergraph_Buff_BubbleHazard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BubbleHazard.Buff_BubbleHazard_C.ExecuteUbergraph_Buff_BubbleHazard");

	ABuff_BubbleHazard_C_ExecuteUbergraph_Buff_BubbleHazard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
