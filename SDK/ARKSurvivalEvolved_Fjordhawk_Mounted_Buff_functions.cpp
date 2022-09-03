// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_Mounted_Buff_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.HideCrosshair
// ()

void AFjordhawk_Mounted_Buff_C::HideCrosshair()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.HideCrosshair");

	AFjordhawk_Mounted_Buff_C_HideCrosshair_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Mounted_Buff_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BuffTickClient");

	AFjordhawk_Mounted_Buff_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.CheckForTarget
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Delegate, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void AFjordhawk_Mounted_Buff_C::STATIC_CheckForTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.CheckForTarget");

	AFjordhawk_Mounted_Buff_C_CheckForTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFjordhawk_Mounted_Buff_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPTryMultiUse");

	AFjordhawk_Mounted_Buff_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPGetMultiUseEntries
// (NetRequest, Public, Delegate, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AFjordhawk_Mounted_Buff_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPGetMultiUseEntries");

	AFjordhawk_Mounted_Buff_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.UpdateNearbyTargets
// ()

void AFjordhawk_Mounted_Buff_C::UpdateNearbyTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.UpdateNearbyTargets");

	AFjordhawk_Mounted_Buff_C_UpdateNearbyTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.DrawBuffFloatingHUD
// ()
// Parameters:
// int*                           BuffIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Mounted_Buff_C::DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.DrawBuffFloatingHUD");

	AFjordhawk_Mounted_Buff_C_DrawBuffFloatingHUD_Params params;
	params.BuffIndex = BuffIndex;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Mounted_Buff_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.BPSetupForInstigator");

	AFjordhawk_Mounted_Buff_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.UserConstructionScript
// ()

void AFjordhawk_Mounted_Buff_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.UserConstructionScript");

	AFjordhawk_Mounted_Buff_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.ExecuteUbergraph_Fjordhawk_Mounted_Buff
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFjordhawk_Mounted_Buff_C::ExecuteUbergraph_Fjordhawk_Mounted_Buff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C.ExecuteUbergraph_Fjordhawk_Mounted_Buff");

	AFjordhawk_Mounted_Buff_C_ExecuteUbergraph_Fjordhawk_Mounted_Buff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
