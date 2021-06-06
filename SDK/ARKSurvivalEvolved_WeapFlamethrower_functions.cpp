// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFlamethrower_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapFlamethrower.WeapFlamethrower_C.TogglePilotLight
// ()
// Parameters:
// bool                           IsActive                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFlamethrower_C::TogglePilotLight(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower.WeapFlamethrower_C.TogglePilotLight");

	AWeapFlamethrower_C_TogglePilotLight_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlamethrower.WeapFlamethrower_C.StartUnequipEvent
// ()

void AWeapFlamethrower_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower.WeapFlamethrower_C.StartUnequipEvent");

	AWeapFlamethrower_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlamethrower.WeapFlamethrower_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapFlamethrower_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower.WeapFlamethrower_C.BPAnimNotifyCustomEvent");

	AWeapFlamethrower_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlamethrower.WeapFlamethrower_C.RefreshLighterState
// ()

void AWeapFlamethrower_C::RefreshLighterState()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower.WeapFlamethrower_C.RefreshLighterState");

	AWeapFlamethrower_C_RefreshLighterState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlamethrower.WeapFlamethrower_C.UserConstructionScript
// ()

void AWeapFlamethrower_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower.WeapFlamethrower_C.UserConstructionScript");

	AWeapFlamethrower_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlamethrower.WeapFlamethrower_C.ReceiveBeginPlay
// ()

void AWeapFlamethrower_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower.WeapFlamethrower_C.ReceiveBeginPlay");

	AWeapFlamethrower_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlamethrower.WeapFlamethrower_C.AnimNotify_Pilot_On
// ()

void AWeapFlamethrower_C::AnimNotify_Pilot_On()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower.WeapFlamethrower_C.AnimNotify_Pilot_On");

	AWeapFlamethrower_C_AnimNotify_Pilot_On_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlamethrower.WeapFlamethrower_C.AnimNotify_Pilot_Off
// ()

void AWeapFlamethrower_C::AnimNotify_Pilot_Off()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower.WeapFlamethrower_C.AnimNotify_Pilot_Off");

	AWeapFlamethrower_C_AnimNotify_Pilot_Off_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapFlamethrower.WeapFlamethrower_C.ExecuteUbergraph_WeapFlamethrower
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapFlamethrower_C::ExecuteUbergraph_WeapFlamethrower(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapFlamethrower.WeapFlamethrower_C.ExecuteUbergraph_WeapFlamethrower");

	AWeapFlamethrower_C_ExecuteUbergraph_WeapFlamethrower_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
