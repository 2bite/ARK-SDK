// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekCruiseMissileVision_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPGetDebugInfoString
// (Exec, Native, Event, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, Const, NetValidate)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString ABuff_TekCruiseMissileVision_C::STATIC_BPGetDebugInfoString()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPGetDebugInfoString");

	ABuff_TekCruiseMissileVision_C_BPGetDebugInfoString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPOverrideTalkerCharacter
// ()
// Parameters:
// class APrimalCharacter*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APrimalCharacter* ABuff_TekCruiseMissileVision_C::BPOverrideTalkerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPOverrideTalkerCharacter");

	ABuff_TekCruiseMissileVision_C_BPOverrideTalkerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ReceiveBeginPlay
// ()

void ABuff_TekCruiseMissileVision_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ReceiveBeginPlay");

	ABuff_TekCruiseMissileVision_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.IsLocalScout
// ()
// Parameters:
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_TekCruiseMissileVision_C::IsLocalScout(bool* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.IsLocalScout");

	ABuff_TekCruiseMissileVision_C_IsLocalScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPIsValidUnStasisCaster
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekCruiseMissileVision_C::BPIsValidUnStasisCaster()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPIsValidUnStasisCaster");

	ABuff_TekCruiseMissileVision_C_BPIsValidUnStasisCaster_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPOverrideIsNetRelevantFor
// ()
// Parameters:
// class APlayerController**      RealViewer                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Viewer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SrcLocation                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekCruiseMissileVision_C::BPOverrideIsNetRelevantFor(class APlayerController** RealViewer, class AActor** Viewer, struct FVector* SrcLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPOverrideIsNetRelevantFor");

	ABuff_TekCruiseMissileVision_C_BPOverrideIsNetRelevantFor_Params params;
	params.RealViewer = RealViewer;
	params.Viewer = Viewer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SrcLocation != nullptr)
		*SrcLocation = params.SrcLocation;

	return params.ReturnValue;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.Missile Possession Change Pending
// ()
// Parameters:
// class ATekCruiseMissile_Character_BP_C* missile                        (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekCruiseMissileVision_C::Missile_Possession_Change_Pending(class ATekCruiseMissile_Character_BP_C* missile)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.Missile Possession Change Pending");

	ABuff_TekCruiseMissileVision_C_Missile_Possession_Change_Pending_Params params;
	params.missile = missile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekCruiseMissileVision_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BuffTickClient");

	ABuff_TekCruiseMissileVision_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPDrawBuffStatusHUD
// (Net, NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults, Const, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         XPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         YPos                           (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ScaleMult                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekCruiseMissileVision_C::STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.BPDrawBuffStatusHUD");

	ABuff_TekCruiseMissileVision_C_BPDrawBuffStatusHUD_Params params;
	params.HUD = HUD;
	params.XPos = XPos;
	params.YPos = YPos;
	params.ScaleMult = ScaleMult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.AllowPostProcessEffect
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_TekCruiseMissileVision_C::AllowPostProcessEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.AllowPostProcessEffect");

	ABuff_TekCruiseMissileVision_C_AllowPostProcessEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.UserConstructionScript
// ()

void ABuff_TekCruiseMissileVision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.UserConstructionScript");

	ABuff_TekCruiseMissileVision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekCruiseMissileVision_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ReceiveTick");

	ABuff_TekCruiseMissileVision_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.tick vision
// ()

void ABuff_TekCruiseMissileVision_C::tick_vision()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.tick vision");

	ABuff_TekCruiseMissileVision_C_tick_vision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ExecuteUbergraph_Buff_TekCruiseMissileVision
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_TekCruiseMissileVision_C::ExecuteUbergraph_Buff_TekCruiseMissileVision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_TekCruiseMissileVision.Buff_TekCruiseMissileVision_C.ExecuteUbergraph_Buff_TekCruiseMissileVision");

	ABuff_TekCruiseMissileVision_C_ExecuteUbergraph_Buff_TekCruiseMissileVision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
