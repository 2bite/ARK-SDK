// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapTekGravityGrenade_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.SetupNewGravityMode
// ()
// Parameters:
// int                            ForMode                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IncludingVFX                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGravityGrenade_C::SetupNewGravityMode(int ForMode, bool IncludingVFX)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.SetupNewGravityMode");

	AWeapTekGravityGrenade_C_SetupNewGravityMode_Params params;
	params.ForMode = ForMode;
	params.IncludingVFX = IncludingVFX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.UserConstructionScript
// ()

void AWeapTekGravityGrenade_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.UserConstructionScript");

	AWeapTekGravityGrenade_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ReceiveBeginPlay
// ()

void AWeapTekGravityGrenade_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ReceiveBeginPlay");

	AWeapTekGravityGrenade_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.StartSecondaryActionEvent
// ()

void AWeapTekGravityGrenade_C::StartSecondaryActionEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.StartSecondaryActionEvent");

	AWeapTekGravityGrenade_C_StartSecondaryActionEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ServerRequestModeChange
// ()
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGravityGrenade_C::ServerRequestModeChange(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ServerRequestModeChange");

	AWeapTekGravityGrenade_C_ServerRequestModeChange_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.MultiUpdateCurrentMode
// ()
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGravityGrenade_C::MultiUpdateCurrentMode(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.MultiUpdateCurrentMode");

	AWeapTekGravityGrenade_C_MultiUpdateCurrentMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.BPAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGravityGrenade_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.BPAnimNotifyCustomEvent");

	AWeapTekGravityGrenade_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.BPFiredWeapon
// ()

void AWeapTekGravityGrenade_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.BPFiredWeapon");

	AWeapTekGravityGrenade_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ExecuteUbergraph_WeapTekGravityGrenade
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapTekGravityGrenade_C::ExecuteUbergraph_WeapTekGravityGrenade(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapTekGravityGrenade.WeapTekGravityGrenade_C.ExecuteUbergraph_WeapTekGravityGrenade");

	AWeapTekGravityGrenade_C_ExecuteUbergraph_WeapTekGravityGrenade_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
