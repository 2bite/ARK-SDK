// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlug_Tracker_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPReactivateWithDamageCauser
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 ForDamageCauser                (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_Tracker_C::BPReactivateWithDamageCauser(class AActor** ForInstigator, class AActor** ForDamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPReactivateWithDamageCauser");

	ABuff_BrainSlug_Tracker_C_BPReactivateWithDamageCauser_Params params;
	params.ForInstigator = ForInstigator;
	params.ForDamageCauser = ForDamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_Tracker_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPDeactivated");

	ABuff_BrainSlug_Tracker_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPClientDoMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           ClientUseIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_Tracker_C::BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPClientDoMultiUse");

	ABuff_BrainSlug_Tracker_C_BPClientDoMultiUse_Params params;
	params.ForPC = ForPC;
	params.ClientUseIndex = ClientUseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_Tracker_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.DrawBuffFloatingHUD");

	ABuff_BrainSlug_Tracker_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPGetMultiUseEntries
// (NetRequest, Exec, Native, Static, NetMulticast, MulticastDelegate, Public, DLLImport, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> ABuff_BrainSlug_Tracker_C::STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BPGetMultiUseEntries");

	ABuff_BrainSlug_Tracker_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_Tracker_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.BuffTickServer");

	ABuff_BrainSlug_Tracker_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.UserConstructionScript
// ()

void ABuff_BrainSlug_Tracker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.UserConstructionScript");

	ABuff_BrainSlug_Tracker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.Server_Deactivate
// ()

void ABuff_BrainSlug_Tracker_C::Server_Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.Server_Deactivate");

	ABuff_BrainSlug_Tracker_C_Server_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ReceiveBeginPlay
// ()

void ABuff_BrainSlug_Tracker_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ReceiveBeginPlay");

	ABuff_BrainSlug_Tracker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ExecuteUbergraph_Buff_BrainSlug_Tracker
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BrainSlug_Tracker_C::ExecuteUbergraph_Buff_BrainSlug_Tracker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BrainSlug_Tracker.Buff_BrainSlug_Tracker_C.ExecuteUbergraph_Buff_BrainSlug_Tracker");

	ABuff_BrainSlug_Tracker_C_ExecuteUbergraph_Buff_BrainSlug_Tracker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
