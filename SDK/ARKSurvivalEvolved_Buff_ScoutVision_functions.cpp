// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ScoutVision_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ScoutVision.Buff_ScoutVision_C.BPGetDebugInfoString
// (Net, Native, NetResponse, Static, NetMulticast, Public, NetClient, BlueprintEvent, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ABuff_ScoutVision_C::STATIC_BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.BPGetDebugInfoString");

	ABuff_ScoutVision_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.BPOverrideTalkerCharacter
// ()
// Parameters:
// class APrimalCharacter*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APrimalCharacter* ABuff_ScoutVision_C::BPOverrideTalkerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.BPOverrideTalkerCharacter");

	ABuff_ScoutVision_C_BPOverrideTalkerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.ReceiveBeginPlay
// ()

void ABuff_ScoutVision_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.ReceiveBeginPlay");

	ABuff_ScoutVision_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.IsLocalScout
// ()
// Parameters:
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutVision_C::IsLocalScout(bool* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.IsLocalScout");

	ABuff_ScoutVision_C_IsLocalScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.BPIsValidUnStasisCaster
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ScoutVision_C::BPIsValidUnStasisCaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.BPIsValidUnStasisCaster");

	ABuff_ScoutVision_C_BPIsValidUnStasisCaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.BPOverrideIsNetRelevantFor
// ()
// Parameters:
// class APlayerController**      RealViewer                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Viewer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SrcLocation                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ScoutVision_C::BPOverrideIsNetRelevantFor(class APlayerController** RealViewer, class AActor** Viewer, struct FVector* SrcLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.BPOverrideIsNetRelevantFor");

	ABuff_ScoutVision_C_BPOverrideIsNetRelevantFor_Params params;
	params.RealViewer = RealViewer;
	params.Viewer = Viewer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SrcLocation != nullptr)
		*SrcLocation = params.SrcLocation;

	return params.ReturnValue;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.Scout PossessionChange Pending
// ()
// Parameters:
// class AScout_Character_BP_C*   Scout                          (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutVision_C::Scout_PossessionChange_Pending(class AScout_Character_BP_C* Scout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.Scout PossessionChange Pending");

	ABuff_ScoutVision_C_Scout_PossessionChange_Pending_Params params;
	params.Scout = Scout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutVision_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.BuffTickClient");

	ABuff_ScoutVision_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.BPDrawBuffStatusHUD
// (Net, NetReliable, NetRequest, Exec, Native, Event, NetResponse, Static, NetMulticast, Public, NetClient, BlueprintEvent, Const)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutVision_C::STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.BPDrawBuffStatusHUD");

	ABuff_ScoutVision_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ScoutVision_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.AllowPostProcessEffect");

	ABuff_ScoutVision_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.UserConstructionScript
// ()

void ABuff_ScoutVision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.UserConstructionScript");

	ABuff_ScoutVision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutVision_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.ReceiveTick");

	ABuff_ScoutVision_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ScoutVision.Buff_ScoutVision_C.ExecuteUbergraph_Buff_ScoutVision
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ScoutVision_C::ExecuteUbergraph_Buff_ScoutVision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ScoutVision.Buff_ScoutVision_C.ExecuteUbergraph_Buff_ScoutVision");

	ABuff_ScoutVision_C_ExecuteUbergraph_Buff_ScoutVision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
