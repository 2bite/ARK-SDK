// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_Ramming_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ToString
// (Net, NetRequest, NetResponse, Static, Public, Private, Protected, NetServer, HasOutParms, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// class FString                  CallerName                     (Parm, ZeroConstructor)
// class FString                  DebugText                      (Parm, OutParm, ZeroConstructor)

void ADino_Character_BP_Ramming_C::STATIC_ToString(const class FString& CallerName, class FString* DebugText)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ToString");

	ADino_Character_BP_Ramming_C_ToString_Params params;
	params.CallerName = CallerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugText != nullptr)
		*DebugText = params.DebugText;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BPNotifyClearRider");

	ADino_Character_BP_Ramming_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetStructureDamageScaled
// ()
// Parameters:
// float                          CurrentValue                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          MinValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          MaxValue                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          velocityAlpha                  (Parm, ZeroConstructor, IsPlainOldData)
// float                          ScaledDamage                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::GetStructureDamageScaled(float CurrentValue, float MinValue, float MaxValue, float velocityAlpha, float* ScaledDamage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetStructureDamageScaled");

	ADino_Character_BP_Ramming_C_GetStructureDamageScaled_Params params;
	params.CurrentValue = CurrentValue;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.velocityAlpha = velocityAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ScaledDamage != nullptr)
		*ScaledDamage = params.ScaledDamage;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRammingSpeedMax
// ()
// Parameters:
// float                          MaxSpeed                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::GetRammingSpeedMax(float* MaxSpeed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRammingSpeedMax");

	ADino_Character_BP_Ramming_C_GetRammingSpeedMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxSpeed != nullptr)
		*MaxSpeed = params.MaxSpeed;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanTickStartedRam
// ()
// Parameters:
// bool                           Tick                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::CanTickStartedRam(bool* Tick)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanTickStartedRam");

	ADino_Character_BP_Ramming_C_CanTickStartedRam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tick != nullptr)
		*Tick = params.Tick;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DrainStatusValue
// ()
// Parameters:
// TEnumAsByte<EPrimalCharacterStatusValue> Type                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          amount                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasRemainingValue              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::DrainStatusValue(TEnumAsByte<EPrimalCharacterStatusValue> Type, float amount, bool* HasRemainingValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DrainStatusValue");

	ADino_Character_BP_Ramming_C_DrainStatusValue_Params params;
	params.Type = Type;
	params.amount = amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasRemainingValue != nullptr)
		*HasRemainingValue = params.HasRemainingValue;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DoRamImpact
// ()
// Parameters:
// bool                           HitSomething                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::DoRamImpact(bool* HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.DoRamImpact");

	ADino_Character_BP_Ramming_C_DoRamImpact_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HitSomething != nullptr)
		*HitSomething = params.HitSomething;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanStartRamAttack
// ()
// Parameters:
// bool                           AllowedToRam                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::CanStartRamAttack(bool* AllowedToRam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CanStartRamAttack");

	ADino_Character_BP_Ramming_C_CanStartRamAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AllowedToRam != nullptr)
		*AllowedToRam = params.AllowedToRam;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Calculate Ram Duration
// ()
// Parameters:
// float                          HoldTime                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::Calculate_Ram_Duration(float HoldTime, float* Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Calculate Ram Duration");

	ADino_Character_BP_Ramming_C_Calculate_Ram_Duration_Params params;
	params.HoldTime = HoldTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Duration != nullptr)
		*Duration = params.Duration;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ReceiveTick
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Private, Protected, Delegate, HasOutParms, NetClient, BlueprintPure, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ReceiveTick");

	ADino_Character_BP_Ramming_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Ended
// ()
// Parameters:
// bool                           HitSomething                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::Handle_Ram_Ended(bool HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Ended");

	ADino_Character_BP_Ramming_C_Handle_Ram_Ended_Params params;
	params.HitSomething = HitSomething;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Started
// ()
// Parameters:
// float                          RamBuildupTime                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          RamDuration                    (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::Handle_Ram_Started(float RamBuildupTime, float RamDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Handle Ram Started");

	ADino_Character_BP_Ramming_C_Handle_Ram_Started_Params params;
	params.RamBuildupTime = RamBuildupTime;
	params.RamDuration = RamDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRamState
// ()
// Parameters:
// bool                           InRamBuildup                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          RamBuildupTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           InRamming                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::GetRamState(bool* InRamBuildup, float* RamBuildupTime, bool* InRamming)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.GetRamState");

	ADino_Character_BP_Ramming_C_GetRamState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRamBuildup != nullptr)
		*InRamBuildup = params.InRamBuildup;
	if (RamBuildupTime != nullptr)
		*RamBuildupTime = params.RamBuildupTime;
	if (InRamming != nullptr)
		*InRamming = params.InRamming;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Stop Ram Attack Buildup
// ()

void ADino_Character_BP_Ramming_C::Stop_Ram_Attack_Buildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Stop Ram Attack Buildup");

	ADino_Character_BP_Ramming_C_Stop_Ram_Attack_Buildup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Start Ram Attack Buildup
// ()

void ADino_Character_BP_Ramming_C::Start_Ram_Attack_Buildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Start Ram Attack Buildup");

	ADino_Character_BP_Ramming_C_Start_Ram_Attack_Buildup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.UserConstructionScript
// ()

void ADino_Character_BP_Ramming_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.UserConstructionScript");

	ADino_Character_BP_Ramming_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStopRamBuildup
// ()

void ADino_Character_BP_Ramming_C::ServerStopRamBuildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStopRamBuildup");

	ADino_Character_BP_Ramming_C_ServerStopRamBuildup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStartRamBuildup
// ()

void ADino_Character_BP_Ramming_C::ServerStartRamBuildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerStartRamBuildup");

	ADino_Character_BP_Ramming_C_ServerStartRamBuildup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamStarted
// ()
// Parameters:
// float                          Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::OnRamStarted(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamStarted");

	ADino_Character_BP_Ramming_C_OnRamStarted_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEnded
// ()

void ADino_Character_BP_Ramming_C::OnRamEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEnded");

	ADino_Character_BP_Ramming_C_OnRamEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ClientOnRamEnded
// ()
// Parameters:
// bool                           HitSomething                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::ClientOnRamEnded(bool HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ClientOnRamEnded");

	ADino_Character_BP_Ramming_C_ClientOnRamEnded_Params params;
	params.HitSomething = HitSomething;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEndedEarly
// ()
// Parameters:
// bool                           HitSomething                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::OnRamEndedEarly(bool HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnRamEndedEarly");

	ADino_Character_BP_Ramming_C_OnRamEndedEarly_Params params;
	params.HitSomething = HitSomething;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Private__RamEnded
// ()
// Parameters:
// bool                           HitSomething                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::Private__RamEnded(bool HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.Private__RamEnded");

	ADino_Character_BP_Ramming_C_Private__RamEnded_Params params;
	params.HitSomething = HitSomething;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature
// ()
// Parameters:
// class APhysicsVolume*          NewVolume                      (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature(class APhysicsVolume* NewVolume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature");

	ADino_Character_BP_Ramming_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_162_PhysicsVolumeChanged__DelegateSignature_Params params;
	params.NewVolume = NewVolume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnComponentBeginOverlap_Event
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void ADino_Character_BP_Ramming_C::OnComponentBeginOverlap_Event(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.OnComponentBeginOverlap_Event");

	ADino_Character_BP_Ramming_C_OnComponentBeginOverlap_Event_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SweepResult != nullptr)
		*SweepResult = params.SweepResult;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerRequestRamEndEarly
// ()
// Parameters:
// bool                           HitSomething                   (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::ServerRequestRamEndEarly(bool HitSomething)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerRequestRamEndEarly");

	ADino_Character_BP_Ramming_C_ServerRequestRamEndEarly_Params params;
	params.HitSomething = HitSomething;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerCancelRamBuildup
// ()

void ADino_Character_BP_Ramming_C::ServerCancelRamBuildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ServerCancelRamBuildup");

	ADino_Character_BP_Ramming_C_ServerCancelRamBuildup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CancelRamBuildup
// ()

void ADino_Character_BP_Ramming_C::CancelRamBuildup()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.CancelRamBuildup");

	ADino_Character_BP_Ramming_C_CancelRamBuildup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.MultiStartRam
// ()
// Parameters:
// float                          BuildUpDuration                (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::MultiStartRam(float BuildUpDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.MultiStartRam");

	ADino_Character_BP_Ramming_C_MultiStartRam_Params params;
	params.BuildUpDuration = BuildUpDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ExecuteUbergraph_Dino_Character_BP_Ramming
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADino_Character_BP_Ramming_C::ExecuteUbergraph_Dino_Character_BP_Ramming(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dino_Character_BP_Ramming.Dino_Character_BP_Ramming_C.ExecuteUbergraph_Dino_Character_BP_Ramming");

	ADino_Character_BP_Ramming_C_ExecuteUbergraph_Dino_Character_BP_Ramming_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
