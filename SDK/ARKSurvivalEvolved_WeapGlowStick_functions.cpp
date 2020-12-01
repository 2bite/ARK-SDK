// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGlowStick_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapGlowStick.WeapGlowStick_C.BPHandleMeleeAttack
// ()

void AWeapGlowStick_C::BPHandleMeleeAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPHandleMeleeAttack");

	AWeapGlowStick_C_BPHandleMeleeAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.BPAnimNotifyCustomEvent
// (NetRequest, Exec, Native, Event, NetResponse, MulticastDelegate, Public, Private, Protected, Delegate, NetServer, BlueprintEvent)
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPAnimNotifyCustomEvent");

	AWeapGlowStick_C_BPAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.BPLostController
// ()

void AWeapGlowStick_C::BPLostController()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPLostController");

	AWeapGlowStick_C_BPLostController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.ReceiveTick");

	AWeapGlowStick_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.IsColorized
// ()
// Parameters:
// struct FLinearColor            currColor                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::IsColorized(const struct FLinearColor& currColor, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.IsColorized");

	AWeapGlowStick_C_IsColorized_Params params;
	params.currColor = currColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function WeapGlowStick.WeapGlowStick_C.ClampMinColorVals
// ()
// Parameters:
// struct FLinearColor            Color                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinVal                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            clampedColor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::ClampMinColorVals(const struct FLinearColor& Color, float MinVal, struct FLinearColor* clampedColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.ClampMinColorVals");

	AWeapGlowStick_C_ClampMinColorVals_Params params;
	params.Color = Color;
	params.MinVal = MinVal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (clampedColor != nullptr)
		*clampedColor = params.clampedColor;
}


// Function WeapGlowStick.WeapGlowStick_C.BPAppliedPrimalItemToWeapon
// ()

void AWeapGlowStick_C::BPAppliedPrimalItemToWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPAppliedPrimalItemToWeapon");

	AWeapGlowStick_C_BPAppliedPrimalItemToWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.PullOutNewGlowStick
// ()

void AWeapGlowStick_C::PullOutNewGlowStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.PullOutNewGlowStick");

	AWeapGlowStick_C_PullOutNewGlowStick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.BPWeaponCanFire
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapGlowStick_C::BPWeaponCanFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPWeaponCanFire");

	AWeapGlowStick_C_BPWeaponCanFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapGlowStick.WeapGlowStick_C.InitGlowStick
// ()

void AWeapGlowStick_C::InitGlowStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.InitGlowStick");

	AWeapGlowStick_C_InitGlowStick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.NetSetIsBroken
// ()
// Parameters:
// bool                           newIsBroken                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::NetSetIsBroken(bool newIsBroken)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.NetSetIsBroken");

	AWeapGlowStick_C_NetSetIsBroken_Params params;
	params.newIsBroken = newIsBroken;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.TurnOnGlowStick
// ()

void AWeapGlowStick_C::TurnOnGlowStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.TurnOnGlowStick");

	AWeapGlowStick_C_TurnOnGlowStick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.BPStartEquippedNotify
// ()

void AWeapGlowStick_C::BPStartEquippedNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPStartEquippedNotify");

	AWeapGlowStick_C_BPStartEquippedNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.BP_OnReloadNotify
// ()

void AWeapGlowStick_C::BP_OnReloadNotify()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BP_OnReloadNotify");

	AWeapGlowStick_C_BP_OnReloadNotify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.PlayCameraShake
// ()
// Parameters:
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::PlayCameraShake(float Intensity)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.PlayCameraShake");

	AWeapGlowStick_C_PlayCameraShake_Params params;
	params.Intensity = Intensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.OnRep_IsBroken
// ()

void AWeapGlowStick_C::OnRep_IsBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.OnRep_IsBroken");

	AWeapGlowStick_C_OnRep_IsBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.Create Dynamic Material
// ()

void AWeapGlowStick_C::Create_Dynamic_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.Create Dynamic Material");

	AWeapGlowStick_C_Create_Dynamic_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.TurnOffGlowStick
// ()

void AWeapGlowStick_C::TurnOffGlowStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.TurnOffGlowStick");

	AWeapGlowStick_C_TurnOffGlowStick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.SetMaterialEmissiveness
// ()
// Parameters:
// class UMaterialInstanceDynamic* Material                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::SetMaterialEmissiveness(class UMaterialInstanceDynamic* Material, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.SetMaterialEmissiveness");

	AWeapGlowStick_C_SetMaterialEmissiveness_Params params;
	params.Material = Material;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.SetLightIntensityAndAttenuationRadius
// ()
// Parameters:
// class UPointLightComponent*    Light                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::SetLightIntensityAndAttenuationRadius(class UPointLightComponent* Light, float Intensity, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.SetLightIntensityAndAttenuationRadius");

	AWeapGlowStick_C_SetLightIntensityAndAttenuationRadius_Params params;
	params.Light = Light;
	params.Intensity = Intensity;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.UserConstructionScript
// ()

void AWeapGlowStick_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.UserConstructionScript");

	AWeapGlowStick_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.ProjectileFired
// ()

void AWeapGlowStick_C::ProjectileFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.ProjectileFired");

	AWeapGlowStick_C_ProjectileFired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.ReceiveBeginPlay
// ()

void AWeapGlowStick_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.ReceiveBeginPlay");

	AWeapGlowStick_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.StartUnequipEvent
// ()

void AWeapGlowStick_C::StartUnequipEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.StartUnequipEvent");

	AWeapGlowStick_C_StartUnequipEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.Multi_FakeReload
// ()

void AWeapGlowStick_C::Multi_FakeReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.Multi_FakeReload");

	AWeapGlowStick_C_Multi_FakeReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.BPFireWeapon
// ()

void AWeapGlowStick_C::BPFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.BPFireWeapon");

	AWeapGlowStick_C_BPFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.AfterProjectileFired_ROS
// ()

void AWeapGlowStick_C::AfterProjectileFired_ROS()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.AfterProjectileFired_ROS");

	AWeapGlowStick_C_AfterProjectileFired_ROS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.CrackGlowStickAfterDelay
// ()

void AWeapGlowStick_C::CrackGlowStickAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.CrackGlowStickAfterDelay");

	AWeapGlowStick_C_CrackGlowStickAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.Multi_UnequipGlowStick
// ()

void AWeapGlowStick_C::Multi_UnequipGlowStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.Multi_UnequipGlowStick");

	AWeapGlowStick_C_Multi_UnequipGlowStick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.PlayTPVShakeAnimAfterDelay
// ()

void AWeapGlowStick_C::PlayTPVShakeAnimAfterDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.PlayTPVShakeAnimAfterDelay");

	AWeapGlowStick_C_PlayTPVShakeAnimAfterDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.CrackGlowStick
// ()

void AWeapGlowStick_C::CrackGlowStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.CrackGlowStick");

	AWeapGlowStick_C_CrackGlowStick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.OnMeleeAttack_Multicast
// ()

void AWeapGlowStick_C::OnMeleeAttack_Multicast()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.OnMeleeAttack_Multicast");

	AWeapGlowStick_C_OnMeleeAttack_Multicast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.MultiFakeReloadAfterDelay
// ()
// Parameters:
// float                          Delay                          (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::MultiFakeReloadAfterDelay(float Delay)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.MultiFakeReloadAfterDelay");

	AWeapGlowStick_C_MultiFakeReloadAfterDelay_Params params;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.PreventUsingGlowstickForDuration
// ()
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::PreventUsingGlowstickForDuration(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.PreventUsingGlowstickForDuration");

	AWeapGlowStick_C_PreventUsingGlowstickForDuration_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.Multi_BeginCrackingGlowstick
// ()

void AWeapGlowStick_C::Multi_BeginCrackingGlowstick()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.Multi_BeginCrackingGlowstick");

	AWeapGlowStick_C_Multi_BeginCrackingGlowstick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapGlowStick.WeapGlowStick_C.ExecuteUbergraph_WeapGlowStick
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapGlowStick_C::ExecuteUbergraph_WeapGlowStick(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapGlowStick.WeapGlowStick_C.ExecuteUbergraph_WeapGlowStick");

	AWeapGlowStick_C_ExecuteUbergraph_WeapGlowStick_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
