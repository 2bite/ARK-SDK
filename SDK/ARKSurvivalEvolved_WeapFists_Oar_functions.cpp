// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFists_Oar_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFists_Oar.WeapFists_Oar_C.SendOarInputsToServer
// (NetRequest, Native, Event, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintPure, Const, NetValidate)

void AWeapFists_Oar_C::STATIC_SendOarInputsToServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.SendOarInputsToServer");

	AWeapFists_Oar_C_SendOarInputsToServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.HandleViewModeChange
// ()

void AWeapFists_Oar_C::HandleViewModeChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.HandleViewModeChange");

	AWeapFists_Oar_C_HandleViewModeChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.InterpToSocket
// (NetReliable, Exec, NetResponse, Static, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, HasOutParms, NetClient, DLLImport, BlueprintPure, Const, NetValidate)

void AWeapFists_Oar_C::STATIC_InterpToSocket()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.InterpToSocket");

	AWeapFists_Oar_C_InterpToSocket_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.OnChangedViewMode
// ()
// Parameters:
// bool                           bIsFirstPerson                 (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Oar_C::OnChangedViewMode(bool bIsFirstPerson)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.OnChangedViewMode");

	AWeapFists_Oar_C_OnChangedViewMode_Params params;
	params.bIsFirstPerson = bIsFirstPerson;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.PlayPaddleAnim
// ()
// Parameters:
// struct FWeaponAnim             AnimToPlay                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Oar_C::PlayPaddleAnim(const struct FWeaponAnim& AnimToPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.PlayPaddleAnim");

	AWeapFists_Oar_C_PlayPaddleAnim_Params params;
	params.AnimToPlay = AnimToPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideFPVMasterPoseComponent
// ()
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USkeletalMeshComponent* AWeapFists_Oar_C::BPOverrideFPVMasterPoseComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideFPVMasterPoseComponent");

	AWeapFists_Oar_C_BPOverrideFPVMasterPoseComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapFists_Oar.WeapFists_Oar_C.ReceiveDestroyed
// ()

void AWeapFists_Oar_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.ReceiveDestroyed");

	AWeapFists_Oar_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.HandlePaddleAnimation
// ()

void AWeapFists_Oar_C::HandlePaddleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.HandlePaddleAnimation");

	AWeapFists_Oar_C_HandlePaddleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.GetCurrentPaddleAnimation
// ()
// Parameters:
// struct FWeaponAnim             AnimToPlay                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bFoundAnim                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ECardinal_Directions_Enum> Direction                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Oar_C::GetCurrentPaddleAnimation(struct FWeaponAnim* AnimToPlay, bool* bFoundAnim, TEnumAsByte<ECardinal_Directions_Enum>* Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.GetCurrentPaddleAnimation");

	AWeapFists_Oar_C_GetCurrentPaddleAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimToPlay != nullptr)
		*AnimToPlay = params.AnimToPlay;
	if (bFoundAnim != nullptr)
		*bFoundAnim = params.bFoundAnim;
	if (Direction != nullptr)
		*Direction = params.Direction;
}


// Function WeapFists_Oar.WeapFists_Oar_C.GetStandingAnimation
// ()
// Parameters:
// float                          OutBlendInTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutBlendOutTime                (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UAnimSequence*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimSequence* AWeapFists_Oar_C::GetStandingAnimation(float* OutBlendInTime, float* OutBlendOutTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.GetStandingAnimation");

	AWeapFists_Oar_C_GetStandingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutBlendInTime != nullptr)
		*OutBlendInTime = params.OutBlendInTime;
	if (OutBlendOutTime != nullptr)
		*OutBlendOutTime = params.OutBlendOutTime;

	return params.ReturnValue;
}


// Function WeapFists_Oar.WeapFists_Oar_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Oar_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.BPAnimNotifyCustomEvent");

	AWeapFists_Oar_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideRootRotationOffset
// ()
// Parameters:
// struct FRotator*               InRootRotation                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FRotator AWeapFists_Oar_C::BPOverrideRootRotationOffset(struct FRotator* InRootRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.BPOverrideRootRotationOffset");

	AWeapFists_Oar_C_BPOverrideRootRotationOffset_Params params;
	params.InRootRotation = InRootRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapFists_Oar.WeapFists_Oar_C.BPHandleMeleeAttack
// ()

void AWeapFists_Oar_C::BPHandleMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.BPHandleMeleeAttack");

	AWeapFists_Oar_C_BPHandleMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.UserConstructionScript
// ()

void AWeapFists_Oar_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.UserConstructionScript");

	AWeapFists_Oar_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_245
// ()

void AWeapFists_Oar_C::InpActEvt_AltFire_K2Node_InputActionEvent_245()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_245");

	AWeapFists_Oar_C_InpActEvt_AltFire_K2Node_InputActionEvent_245_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_244
// ()

void AWeapFists_Oar_C::InpActEvt_AltFire_K2Node_InputActionEvent_244()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.InpActEvt_AltFire_K2Node_InputActionEvent_244");

	AWeapFists_Oar_C_InpActEvt_AltFire_K2Node_InputActionEvent_244_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.ReceiveBeginPlay
// ()

void AWeapFists_Oar_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.ReceiveBeginPlay");

	AWeapFists_Oar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Oar_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272");

	AWeapFists_Oar_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_272_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153
// ()
// Parameters:
// float                          AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Oar_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153(float AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153");

	AWeapFists_Oar_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_153_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Oar_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.ReceiveTick");

	AWeapFists_Oar_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.Server_ReceiveOarInputs
// ()
// Parameters:
// struct FCanoePassengerClientInputAxes SavedInputs                    (Parm)

void AWeapFists_Oar_C::Server_ReceiveOarInputs(const struct FCanoePassengerClientInputAxes& SavedInputs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.Server_ReceiveOarInputs");

	AWeapFists_Oar_C_Server_ReceiveOarInputs_Params params;
	params.SavedInputs = SavedInputs;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.Server_SetCanoeWantsToBeach
// ()
// Parameters:
// bool                           bNewVal                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Oar_C::Server_SetCanoeWantsToBeach(bool bNewVal)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.Server_SetCanoeWantsToBeach");

	AWeapFists_Oar_C_Server_SetCanoeWantsToBeach_Params params;
	params.bNewVal = bNewVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.ReceiveOarInputAxes
// ()
// Parameters:
// float                          Forward                        (Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Oar_C::ReceiveOarInputAxes(float Forward, float Right)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.ReceiveOarInputAxes");

	AWeapFists_Oar_C_ReceiveOarInputAxes_Params params;
	params.Forward = Forward;
	params.Right = Right;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFists_Oar.WeapFists_Oar_C.ExecuteUbergraph_WeapFists_Oar
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFists_Oar_C::ExecuteUbergraph_WeapFists_Oar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFists_Oar.WeapFists_Oar_C.ExecuteUbergraph_WeapFists_Oar");

	AWeapFists_Oar_C_ExecuteUbergraph_WeapFists_Oar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
