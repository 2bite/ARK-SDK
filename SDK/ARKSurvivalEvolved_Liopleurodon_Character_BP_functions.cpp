// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Liopleurodon_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALiopleurodon_Character_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPCanCryo");

	ALiopleurodon_Character_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPTimerServer
// ()

void ALiopleurodon_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPTimerServer");

	ALiopleurodon_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BlueprintDrawFloatingHUD
// (NetRequest, Exec, Native, NetResponse, Static, NetMulticast, Delegate, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_Character_BP_C::STATIC_BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BlueprintDrawFloatingHUD");

	ALiopleurodon_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.Find Remaining Tame Time
// ()
// Parameters:
// float                          TimeLeft                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_Character_BP_C::Find_Remaining_Tame_Time(float* TimeLeft)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.Find Remaining Tame Time");

	ALiopleurodon_Character_BP_C_Find_Remaining_Tame_Time_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimeLeft != nullptr)
		*TimeLeft = params.TimeLeft;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPSetupTamed");

	ALiopleurodon_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPNotifyClearRider");

	ALiopleurodon_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.BPNotifySetRider");

	ALiopleurodon_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.UserConstructionScript
// ()

void ALiopleurodon_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.UserConstructionScript");

	ALiopleurodon_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.DisappearTimeline__FinishedFunc
// ()

void ALiopleurodon_Character_BP_C::DisappearTimeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.DisappearTimeline__FinishedFunc");

	ALiopleurodon_Character_BP_C_DisappearTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.DisappearTimeline__UpdateFunc
// ()

void ALiopleurodon_Character_BP_C::DisappearTimeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.DisappearTimeline__UpdateFunc");

	ALiopleurodon_Character_BP_C_DisappearTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.StartDisappear
// ()

void ALiopleurodon_Character_BP_C::StartDisappear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.StartDisappear");

	ALiopleurodon_Character_BP_C_StartDisappear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ReceiveAnyDamage
// ()
// Parameters:
// float*                         Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType**            DamageType                     (Parm, ZeroConstructor, IsPlainOldData)
// class AController**            InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_Character_BP_C::ReceiveAnyDamage(float* Damage, class UDamageType** DamageType, class AController** InstigatedBy, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ReceiveAnyDamage");

	ALiopleurodon_Character_BP_C_ReceiveAnyDamage_Params params;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.AnimNotify_SpawnSpinEffect
// ()

void ALiopleurodon_Character_BP_C::AnimNotify_SpawnSpinEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.AnimNotify_SpawnSpinEffect");

	ALiopleurodon_Character_BP_C_AnimNotify_SpawnSpinEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.RefreshMagicBuffTimers
// ()

void ALiopleurodon_Character_BP_C::RefreshMagicBuffTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.RefreshMagicBuffTimers");

	ALiopleurodon_Character_BP_C_RefreshMagicBuffTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ReceiveBeginPlay
// ()

void ALiopleurodon_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ReceiveBeginPlay");

	ALiopleurodon_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.OnDied_ClearParticles
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_Character_BP_C::OnDied_ClearParticles(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.OnDied_ClearParticles");

	ALiopleurodon_Character_BP_C_OnDied_ClearParticles_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ExecuteUbergraph_Liopleurodon_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALiopleurodon_Character_BP_C::ExecuteUbergraph_Liopleurodon_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Liopleurodon_Character_BP.Liopleurodon_Character_BP_C.ExecuteUbergraph_Liopleurodon_Character_BP");

	ALiopleurodon_Character_BP_C_ExecuteUbergraph_Liopleurodon_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
