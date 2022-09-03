// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RemoteCameraVision_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPCheckPreventInput
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterInputType>* inputType                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RemoteCameraVision_C::BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPCheckPreventInput");

	ABuff_RemoteCameraVision_C_BPCheckPreventInput_Params params;
	params.inputType = inputType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.ResetInterference
// ()

void ABuff_RemoteCameraVision_C::ResetInterference()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.ResetInterference");

	ABuff_RemoteCameraVision_C_ResetInterference_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.StartFade
// ()
// Parameters:
// bool                           FadeIn                         (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RemoteCameraVision_C::StartFade(bool FadeIn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.StartFade");

	ABuff_RemoteCameraVision_C_StartFade_Params params;
	params.FadeIn = FadeIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPDeactivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RemoteCameraVision_C::BPDeactivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPDeactivated");

	ABuff_RemoteCameraVision_C_BPDeactivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPForceCameraStyle
// ()
// Parameters:
// class APrimalCharacter**       ForViewTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECameraStyle>      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ECameraStyle> ABuff_RemoteCameraVision_C::BPForceCameraStyle(class APrimalCharacter** ForViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPForceCameraStyle");

	ABuff_RemoteCameraVision_C_BPForceCameraStyle_Params params;
	params.ForViewTarget = ForViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPOverrideTalkerCharacter
// ()
// Parameters:
// class APrimalCharacter*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APrimalCharacter* ABuff_RemoteCameraVision_C::BPOverrideTalkerCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPOverrideTalkerCharacter");

	ABuff_RemoteCameraVision_C_BPOverrideTalkerCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.IsLocalCamera
// ()
// Parameters:
// bool                           retVal                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_RemoteCameraVision_C::IsLocalCamera(bool* retVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.IsLocalCamera");

	ABuff_RemoteCameraVision_C_IsLocalCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (retVal != nullptr)
		*retVal = params.retVal;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.PossessionChangePending
// ()
// Parameters:
// class ARemoteCamera_Character_BP_C* NewCamera                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RemoteCameraVision_C::PossessionChangePending(class ARemoteCamera_Character_BP_C* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.PossessionChangePending");

	ABuff_RemoteCameraVision_C_PossessionChangePending_Params params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPOverrideIsNetRelevantFor
// ()
// Parameters:
// class APlayerController**      RealViewer                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Viewer                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SrcLocation                    (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_RemoteCameraVision_C::BPOverrideIsNetRelevantFor(class APlayerController** RealViewer, class AActor** Viewer, struct FVector* SrcLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BPOverrideIsNetRelevantFor");

	ABuff_RemoteCameraVision_C_BPOverrideIsNetRelevantFor_Params params;
	params.RealViewer = RealViewer;
	params.Viewer = Viewer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SrcLocation != nullptr)
		*SrcLocation = params.SrcLocation;

	return params.ReturnValue;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BuffTickClient
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RemoteCameraVision_C::BuffTickClient(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.BuffTickClient");

	ABuff_RemoteCameraVision_C_BuffTickClient_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.UserConstructionScript
// ()

void ABuff_RemoteCameraVision_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.UserConstructionScript");

	ABuff_RemoteCameraVision_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.ExecuteUbergraph_Buff_RemoteCameraVision
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_RemoteCameraVision_C::ExecuteUbergraph_Buff_RemoteCameraVision(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_RemoteCameraVision.Buff_RemoteCameraVision_C.ExecuteUbergraph_Buff_RemoteCameraVision");

	ABuff_RemoteCameraVision_C_ExecuteUbergraph_Buff_RemoteCameraVision_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
