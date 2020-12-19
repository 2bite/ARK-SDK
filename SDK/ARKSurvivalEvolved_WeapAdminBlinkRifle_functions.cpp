// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapAdminBlinkRifle_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetBuffDetails
// (Net, NetRequest, Native, Event, NetResponse, Static, MulticastDelegate, Public, Delegate, HasOutParms, NetClient, BlueprintEvent, Const)
// Parameters:
// class APrimalCharacter*        Character                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          BuffInfo                       (Parm, OutParm, ZeroConstructor)

void AWeapAdminBlinkRifle_C::STATIC_GetBuffDetails(class APrimalCharacter* Character, TArray<class FString>* BuffInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetBuffDetails");

	AWeapAdminBlinkRifle_C_GetBuffDetails_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BuffInfo != nullptr)
		*BuffInfo = params.BuffInfo;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetInspectText
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Component                      (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          Desc                           (Parm, OutParm, ZeroConstructor)

void AWeapAdminBlinkRifle_C::GetInspectText(class AActor* Actor, class UObject* Component, TArray<class FString>* Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetInspectText");

	AWeapAdminBlinkRifle_C_GetInspectText_Params params;
	params.Actor = Actor;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Desc != nullptr)
		*Desc = params.Desc;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorDescriptiveName
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Desc                           (Parm, OutParm, ZeroConstructor)

void AWeapAdminBlinkRifle_C::GetActorDescriptiveName(class AActor* Actor, class FString* Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorDescriptiveName");

	AWeapAdminBlinkRifle_C_GetActorDescriptiveName_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Desc != nullptr)
		*Desc = params.Desc;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorScreenLocation
// ()
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               ScreenLoc                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::GetActorScreenLocation(class AActor* TargetActor, struct FVector2D* ScreenLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.GetActorScreenLocation");

	AWeapAdminBlinkRifle_C_GetActorScreenLocation_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScreenLoc != nullptr)
		*ScreenLoc = params.ScreenLoc;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.InspectTrace
// (NetRequest, Native, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, Const)
// Parameters:
// struct FVector2D               Start                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          End                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              OutHit                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapAdminBlinkRifle_C::STATIC_InspectTrace(const struct FVector2D& Start, float End, struct FHitResult* OutHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.InspectTrace");

	AWeapAdminBlinkRifle_C_InspectTrace_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;

	return params.ReturnValue;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.HasAdminPermission
// ()
// Parameters:
// bool                           IsAdmin                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::HasAdminPermission(bool* IsAdmin)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.HasAdminPermission");

	AWeapAdminBlinkRifle_C_HasAdminPermission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAdmin != nullptr)
		*IsAdmin = params.IsAdmin;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Destroy
// (NetRequest, Exec, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, Const)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::STATIC_Tick_Destroy(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Destroy");

	AWeapAdminBlinkRifle_C_Tick_Destroy_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Inspect
// (NetReliable, Native, Event, NetResponse, Static, NetMulticast, MulticastDelegate, Private, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintEvent, Const)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::STATIC_Tick_Inspect(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Inspect");

	AWeapAdminBlinkRifle_C_Tick_Inspect_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Blink
// (NetReliable, NetRequest, Exec, Native, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::Tick_Blink(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.Tick_Blink");

	AWeapAdminBlinkRifle_C_Tick_Blink_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveBeginPlay
// ()

void AWeapAdminBlinkRifle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveBeginPlay");

	AWeapAdminBlinkRifle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPOnStartTargeting
// ()
// Parameters:
// bool*                          bFromGamepadLeft               (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::BPOnStartTargeting(bool* bFromGamepadLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPOnStartTargeting");

	AWeapAdminBlinkRifle_C_BPOnStartTargeting_Params params;
	params.bFromGamepadLeft = bFromGamepadLeft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ReceiveTick");

	AWeapAdminBlinkRifle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPFiredWeapon
// (NetReliable, NetRequest, Exec, NetResponse, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)

void AWeapAdminBlinkRifle_C::BPFiredWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPFiredWeapon");

	AWeapAdminBlinkRifle_C_BPFiredWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPAllowNativeFireWeapon
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AWeapAdminBlinkRifle_C::BPAllowNativeFireWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPAllowNativeFireWeapon");

	AWeapAdminBlinkRifle_C_BPAllowNativeFireWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPDrawHud
// (NetReliable, NetRequest, Exec, Native, Event, Static, MulticastDelegate, Public, Protected, Delegate, NetServer, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintEvent, NetValidate)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::STATIC_BPDrawHud(class AShooterHUD** HUD)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.BPDrawHud");

	AWeapAdminBlinkRifle_C_BPDrawHud_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.UserConstructionScript
// ()

void AWeapAdminBlinkRifle_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.UserConstructionScript");

	AWeapAdminBlinkRifle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestBlinkToTarget
// ()
// Parameters:
// struct FVector                 Location                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAirTarget                    (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::ServerRequestBlinkToTarget(const struct FVector& Location, bool IsAirTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestBlinkToTarget");

	AWeapAdminBlinkRifle_C_ServerRequestBlinkToTarget_Params params;
	params.Location = Location;
	params.IsAirTarget = IsAirTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetMode
// ()
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::ServerRequestSetMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetMode");

	AWeapAdminBlinkRifle_C_ServerRequestSetMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.MultiUpdateCurrentMode
// ()
// Parameters:
// int                            Mode                           (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::MultiUpdateCurrentMode(int Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.MultiUpdateCurrentMode");

	AWeapAdminBlinkRifle_C_MultiUpdateCurrentMode_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeEntered
// ()
// Parameters:
// int                            NewMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::OnModeEntered(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeEntered");

	AWeapAdminBlinkRifle_C_OnModeEntered_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeExited
// ()
// Parameters:
// int                            OldMode                        (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::OnModeExited(int OldMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.OnModeExited");

	AWeapAdminBlinkRifle_C_OnModeExited_Params params;
	params.OldMode = OldMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientUpdatePermissionCheck
// ()
// Parameters:
// bool                           CanOwnerCheat                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::ClientUpdatePermissionCheck(bool CanOwnerCheat)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientUpdatePermissionCheck");

	AWeapAdminBlinkRifle_C_ClientUpdatePermissionCheck_Params params;
	params.CanOwnerCheat = CanOwnerCheat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetInspectTarget
// ()
// Parameters:
// class AActor*                  InspectTarget                  (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 InspectComponent               (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::ServerRequestSetInspectTarget(class AActor* InspectTarget, class UObject* InspectComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestSetInspectTarget");

	AWeapAdminBlinkRifle_C_ServerRequestSetInspectTarget_Params params;
	params.InspectTarget = InspectTarget;
	params.InspectComponent = InspectComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestDestroyTarget
// ()
// Parameters:
// class AActor*                  DestroyTarget                  (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::ServerRequestDestroyTarget(class AActor* DestroyTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestDestroyTarget");

	AWeapAdminBlinkRifle_C_ServerRequestDestroyTarget_Params params;
	params.DestroyTarget = DestroyTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestActorDescription
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Component                      (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::ServerRequestActorDescription(class AActor* Actor, class UObject* Component)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ServerRequestActorDescription");

	AWeapAdminBlinkRifle_C_ServerRequestActorDescription_Params params;
	params.Actor = Actor;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientReceiveActorDescription
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          Desc                           (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class FString>          Buffs                          (Parm, OutParm, ZeroConstructor, ReferenceParm)

void AWeapAdminBlinkRifle_C::ClientReceiveActorDescription(class AActor* Actor, TArray<class FString>* Desc, TArray<class FString>* Buffs)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ClientReceiveActorDescription");

	AWeapAdminBlinkRifle_C_ClientReceiveActorDescription_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Desc != nullptr)
		*Desc = params.Desc;
	if (Buffs != nullptr)
		*Buffs = params.Buffs;
}


// Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ExecuteUbergraph_WeapAdminBlinkRifle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWeapAdminBlinkRifle_C::ExecuteUbergraph_WeapAdminBlinkRifle(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WeapAdminBlinkRifle.WeapAdminBlinkRifle_C.ExecuteUbergraph_WeapAdminBlinkRifle");

	AWeapAdminBlinkRifle_C_ExecuteUbergraph_WeapAdminBlinkRifle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
