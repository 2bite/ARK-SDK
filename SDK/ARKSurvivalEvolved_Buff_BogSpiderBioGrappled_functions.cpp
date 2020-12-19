// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BogSpiderBioGrappled_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderBioGrappled_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPDeactivated");

	ABuff_BogSpiderBioGrappled_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReleaseBioGrapple
// ()

void ABuff_BogSpiderBioGrappled_C::ReleaseBioGrapple()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReleaseBioGrapple");

	ABuff_BogSpiderBioGrappled_C_ReleaseBioGrapple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderBioGrappled_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickServer");

	ABuff_BogSpiderBioGrappled_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void ABuff_BogSpiderBioGrappled_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPGetHUDElements");

	ABuff_BogSpiderBioGrappled_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BogSpiderBioGrappled_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPServerHandleNetExecCommand");

	ABuff_BogSpiderBioGrappled_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ToggleEnsnareVFX
// (NetReliable, NetRequest, Event, NetResponse, Static, MulticastDelegate, Public, Private, Delegate, DLLImport, BlueprintCallable, BlueprintPure, NetValidate)

void ABuff_BogSpiderBioGrappled_C::STATIC_ToggleEnsnareVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ToggleEnsnareVFX");

	ABuff_BogSpiderBioGrappled_C_ToggleEnsnareVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderBioGrappled_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BuffTickClient");

	ABuff_BogSpiderBioGrappled_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_BogSpiderBioGrappled_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPCheckPreventInput");

	ABuff_BogSpiderBioGrappled_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartAltFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderBioGrappled_C::BPHandleOnStartAltFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartAltFire");

	ABuff_BogSpiderBioGrappled_C_BPHandleOnStartAltFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartFire
// ()
// Parameters:
// bool*                          bFromGamepad                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderBioGrappled_C::BPHandleOnStartFire(bool* bFromGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.BPHandleOnStartFire");

	ABuff_BogSpiderBioGrappled_C_BPHandleOnStartFire_Params params;
	params.bFromGamepad = bFromGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnEnsnared
// ()

void ABuff_BogSpiderBioGrappled_C::OnEnsnared()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnEnsnared");

	ABuff_BogSpiderBioGrappled_C_OnEnsnared_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnBioGrappled
// ()

void ABuff_BogSpiderBioGrappled_C::OnBioGrappled()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.OnBioGrappled");

	ABuff_BogSpiderBioGrappled_C_OnBioGrappled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.SyncGrapplingBogSpider
// ()
// Parameters:
// class ABogSpider_Character_BP_C* SpiderRef                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderBioGrappled_C::SyncGrapplingBogSpider(class ABogSpider_Character_BP_C* SpiderRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.SyncGrapplingBogSpider");

	ABuff_BogSpiderBioGrappled_C_SyncGrapplingBogSpider_Params params;
	params.SpiderRef = SpiderRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.TryStruggle
// ()
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderBioGrappled_C::TryStruggle(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.TryStruggle");

	ABuff_BogSpiderBioGrappled_C_TryStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.UserConstructionScript
// ()

void ABuff_BogSpiderBioGrappled_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.UserConstructionScript");

	ABuff_BogSpiderBioGrappled_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__FinishedFunc
// ()

void ABuff_BogSpiderBioGrappled_C::StruggleShake__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__FinishedFunc");

	ABuff_BogSpiderBioGrappled_C_StruggleShake__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__UpdateFunc
// ()

void ABuff_BogSpiderBioGrappled_C::StruggleShake__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.StruggleShake__UpdateFunc");

	ABuff_BogSpiderBioGrappled_C_StruggleShake__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Server_TryStruggle
// ()

void ABuff_BogSpiderBioGrappled_C::Server_TryStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Server_TryStruggle");

	ABuff_BogSpiderBioGrappled_C_Server_TryStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Multi_OnBioGrappleEvent
// ()
// Parameters:
// bool                           bEnsnare                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderBioGrappled_C::Multi_OnBioGrappleEvent(bool bEnsnare)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Multi_OnBioGrappleEvent");

	ABuff_BogSpiderBioGrappled_C_Multi_OnBioGrappleEvent_Params params;
	params.bEnsnare = bEnsnare;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReceiveBeginPlay
// ()

void ABuff_BogSpiderBioGrappled_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ReceiveBeginPlay");

	ABuff_BogSpiderBioGrappled_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.DoHudShake
// ()

void ABuff_BogSpiderBioGrappled_C::DoHudShake()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.DoHudShake");

	ABuff_BogSpiderBioGrappled_C_DoHudShake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Client_DidStruggle
// ()

void ABuff_BogSpiderBioGrappled_C::Client_DidStruggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.Client_DidStruggle");

	ABuff_BogSpiderBioGrappled_C_Client_DidStruggle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ExecuteUbergraph_Buff_BogSpiderBioGrappled
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BogSpiderBioGrappled_C::ExecuteUbergraph_Buff_BogSpiderBioGrappled(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_BogSpiderBioGrappled.Buff_BogSpiderBioGrappled_C.ExecuteUbergraph_Buff_BogSpiderBioGrappled");

	ABuff_BogSpiderBioGrappled_C_ExecuteUbergraph_Buff_BogSpiderBioGrappled_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
