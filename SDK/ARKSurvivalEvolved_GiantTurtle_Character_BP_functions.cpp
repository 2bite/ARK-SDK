// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiantTurtle_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPCanBaseOnCharacter
// ()
// Parameters:
// class APrimalCharacter**       BaseCharacter                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGiantTurtle_Character_BP_C::BPCanBaseOnCharacter(class APrimalCharacter** BaseCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPCanBaseOnCharacter");

	AGiantTurtle_Character_BP_C_BPCanBaseOnCharacter_Params params;
	params.BaseCharacter = BaseCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeAdult
// ()

void AGiantTurtle_Character_BP_C::BPBecomeAdult()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeAdult");

	AGiantTurtle_Character_BP_C_BPBecomeAdult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeBaby
// ()

void AGiantTurtle_Character_BP_C::BPBecomeBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPBecomeBaby");

	AGiantTurtle_Character_BP_C_BPBecomeBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPUnstasis
// ()

void AGiantTurtle_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPUnstasis");

	AGiantTurtle_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOnDinoCheat
// ()
// Parameters:
// struct FName*                  CheatName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bSetValue                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOnDinoCheat");

	AGiantTurtle_Character_BP_C_BPOnDinoCheat_Params params;
	params.CheatName = CheatName;
	params.bSetValue = bSetValue;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyToggleHUD
// ()
// Parameters:
// bool*                          bHudHidden                     (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::BPNotifyToggleHUD(bool* bHudHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyToggleHUD");

	AGiantTurtle_Character_BP_C_BPNotifyToggleHUD_Params params;
	params.bHudHidden = bHudHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.OnRep_bAllowMating
// ()

void AGiantTurtle_Character_BP_C::OnRep_bAllowMating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.OnRep_bAllowMating");

	AGiantTurtle_Character_BP_C_OnRep_bAllowMating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveBeginPlay
// ()

void AGiantTurtle_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveBeginPlay");

	AGiantTurtle_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetAllowMating
// ()
// Parameters:
// bool                           Allow                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::GetAllowMating(bool* Allow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetAllowMating");

	AGiantTurtle_Character_BP_C_GetAllowMating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Allow != nullptr)
		*Allow = params.Allow;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintDrawFloatingHUD
// ()
// Parameters:
// class AShooterHUD**            HUD                            (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterX                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         CenterY                        (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DrawScale                      (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintDrawFloatingHUD");

	AGiantTurtle_Character_BP_C_BlueprintDrawFloatingHUD_Params params;
	params.HUD = HUD;
	params.CenterX = CenterX;
	params.CenterY = CenterY;
	params.DrawScale = DrawScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateAllowMating
// ()

void AGiantTurtle_Character_BP_C::UpdateAllowMating()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateAllowMating");

	AGiantTurtle_Character_BP_C_UpdateAllowMating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPTimerServer
// ()

void AGiantTurtle_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPTimerServer");

	AGiantTurtle_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveDestroyed
// ()

void AGiantTurtle_Character_BP_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveDestroyed");

	AGiantTurtle_Character_BP_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroyHUDWidget
// ()
// Parameters:
// bool                           DestroyNow                     (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::DestroyHUDWidget(bool DestroyNow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroyHUDWidget");

	AGiantTurtle_Character_BP_C_DestroyHUDWidget_Params params;
	params.DestroyNow = DestroyNow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyClearRider");

	AGiantTurtle_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifySetRider");

	AGiantTurtle_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyLevelUp
// ()
// Parameters:
// int*                           ExtraCharacterLevel            (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::BPNotifyLevelUp(int* ExtraCharacterLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyLevelUp");

	AGiantTurtle_Character_BP_C_BPNotifyLevelUp_Params params;
	params.ExtraCharacterLevel = ExtraCharacterLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AllowPlayMontage
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGiantTurtle_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AllowPlayMontage");

	AGiantTurtle_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_InterceptMoveForward
// ()
// Parameters:
// float*                         AxisValue                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGiantTurtle_Character_BP_C::BP_InterceptMoveForward(float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_InterceptMoveForward");

	AGiantTurtle_Character_BP_C_BP_InterceptMoveForward_Params params;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckRaftMode
// ()
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::CheckRaftMode(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckRaftMode");

	AGiantTurtle_Character_BP_C_CheckRaftMode_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPostLoadedFromSaveGame
// ()

void AGiantTurtle_Character_BP_C::BPPostLoadedFromSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPostLoadedFromSaveGame");

	AGiantTurtle_Character_BP_C_BPPostLoadedFromSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ClearPreventHurtAnim
// ()

void AGiantTurtle_Character_BP_C::ClearPreventHurtAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ClearPreventHurtAnim");

	AGiantTurtle_Character_BP_C_ClearPreventHurtAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AnimBpSetBreathing
// ()
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::AnimBpSetBreathing(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AnimBpSetBreathing");

	AGiantTurtle_Character_BP_C_AnimBpSetBreathing_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroySaddle
// ()

void AGiantTurtle_Character_BP_C::DestroySaddle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.DestroySaddle");

	AGiantTurtle_Character_BP_C_DestroySaddle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPlayDying
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  InstigatingPawn                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPPlayDying");

	AGiantTurtle_Character_BP_C_BPPlayDying_Params params;
	params.KillingDamage = KillingDamage;
	params.InstigatingPawn = InstigatingPawn;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickWake
// ()

void AGiantTurtle_Character_BP_C::TickWake()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickWake");

	AGiantTurtle_Character_BP_C_TickWake_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateMaterial
// ()

void AGiantTurtle_Character_BP_C::UpdateMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateMaterial");

	AGiantTurtle_Character_BP_C_UpdateMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BubbleAttackToggle
// ()
// Parameters:
// bool                           On                             (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::BubbleAttackToggle(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BubbleAttackToggle");

	AGiantTurtle_Character_BP_C_BubbleAttackToggle_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AGiantTurtle_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOverrideHurtAnim
// ()
// Parameters:
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsLocalPath                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageLocation            (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                PointDamageHitNormal           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* AGiantTurtle_Character_BP_C::BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPOverrideHurtAnim");

	AGiantTurtle_Character_BP_C_BPOverrideHurtAnim_Params params;
	params.DamageTaken = DamageTaken;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsLocalPath = bIsLocalPath;
	params.bIsPointDamage = bIsPointDamage;
	params.PointDamageLocation = PointDamageLocation;
	params.PointDamageHitNormal = PointDamageHitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckCave
// ()

void AGiantTurtle_Character_BP_C::CheckCave()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckCave");

	AGiantTurtle_Character_BP_C_CheckCave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TurnOffFlock
// ()

void AGiantTurtle_Character_BP_C::TurnOffFlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TurnOffFlock");

	AGiantTurtle_Character_BP_C_TurnOffFlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGiantTurtle_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPAdjustDamage");

	AGiantTurtle_Character_BP_C_BPAdjustDamage_Params params;
	params.IncomingDamage = IncomingDamage;
	params.TheDamageEvent = TheDamageEvent;
	params.EventInstigator = EventInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup Flock
// (NetReliable, NetRequest, Event, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void AGiantTurtle_Character_BP_C::Setup_Flock()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup Flock");

	AGiantTurtle_Character_BP_C_Setup_Flock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckTurtleTargetForFollowers
// ()

void AGiantTurtle_Character_BP_C::CheckTurtleTargetForFollowers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckTurtleTargetForFollowers");

	AGiantTurtle_Character_BP_C_CheckTurtleTargetForFollowers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickTaming
// (NetRequest, Event, NetResponse, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::TickTaming(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickTaming");

	AGiantTurtle_Character_BP_C_TickTaming_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckFullyInWater
// ()

void AGiantTurtle_Character_BP_C::CheckFullyInWater()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.CheckFullyInWater");

	AGiantTurtle_Character_BP_C_CheckFullyInWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBirdsFlock
// (NetRequest, Native, Static, NetMulticast, Protected, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::STATIC_TickBirdsFlock(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBirdsFlock");

	AGiantTurtle_Character_BP_C_TickBirdsFlock_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.PushBackPawnNotInWater
// ()
// Parameters:
// class APrimalCharacter*        Pawn                           (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::PushBackPawnNotInWater(class APrimalCharacter* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.PushBackPawnNotInWater");

	AGiantTurtle_Character_BP_C_PushBackPawnNotInWater_Params params;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBubbleCooldown
// (Exec, Native, NetMulticast, MulticastDelegate, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::TickBubbleCooldown(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.TickBubbleCooldown");

	AGiantTurtle_Character_BP_C_TickBubbleCooldown_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AGiantTurtle_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetHUDElements");

	AGiantTurtle_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateBreath Rotation
// ()

void AGiantTurtle_Character_BP_C::UpdateBreath_Rotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateBreath Rotation");

	AGiantTurtle_Character_BP_C_UpdateBreath_Rotation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Tick Breathing
// ()
// Parameters:
// float                          DeltSeconds                    (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::Tick_Breathing(float DeltSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Tick Breathing");

	AGiantTurtle_Character_BP_C_Tick_Breathing_Params params;
	params.DeltSeconds = DeltSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetCrosshairAlpha
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGiantTurtle_Character_BP_C::BPGetCrosshairAlpha()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetCrosshairAlpha");

	AGiantTurtle_Character_BP_C_BPGetCrosshairAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleControllerInitiatedAttack
// (Net, NetReliable, Event, NetResponse, NetMulticast, MulticastDelegate, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGiantTurtle_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleControllerInitiatedAttack");

	AGiantTurtle_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleOnStopTargeting
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGiantTurtle_Character_BP_C::BPHandleOnStopTargeting()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPHandleOnStopTargeting");

	AGiantTurtle_Character_BP_C_BPHandleOnStopTargeting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetPlayersOnSeats
// (Static, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void AGiantTurtle_Character_BP_C::STATIC_GetPlayersOnSeats()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetPlayersOnSeats");

	AGiantTurtle_Character_BP_C_GetPlayersOnSeats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.K2_OnMovementModeChanged
// ()
// Parameters:
// TEnumAsByte<EMovementMode>*    PrevMovementMode               (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EMovementMode>*    NewMovementMode                (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 PrevCustomMode                 (Parm, ZeroConstructor, IsPlainOldData)
// unsigned char*                 NewCustomMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.K2_OnMovementModeChanged");

	AGiantTurtle_Character_BP_C_K2_OnMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.NewMovementMode = NewMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AGiantTurtle_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BlueprintCanRiderAttack");

	AGiantTurtle_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubble
// ()

void AGiantTurtle_Character_BP_C::SpawnBubble()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubble");

	AGiantTurtle_Character_BP_C_SpawnBubble_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_GetCustomModifier_RotationRate
// ()
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AGiantTurtle_Character_BP_C::BP_GetCustomModifier_RotationRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BP_GetCustomModifier_RotationRate");

	AGiantTurtle_Character_BP_C_BP_GetCustomModifier_RotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup New Crop DataStruct
// (NetReliable, Exec, Event, NetResponse, Static, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            LocationIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItemConsumableSeed_C* SeedItem                       (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::STATIC_Setup_New_Crop_DataStruct(int LocationIndex, class UPrimalItemConsumableSeed_C* SeedItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Setup New Crop DataStruct");

	AGiantTurtle_Character_BP_C_Setup_New_Crop_DataStruct_Params params;
	params.LocationIndex = LocationIndex;
	params.SeedItem = SeedItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Check Inventory for Seed Items
// ()

void AGiantTurtle_Character_BP_C::Check_Inventory_for_Seed_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Check Inventory for Seed Items");

	AGiantTurtle_Character_BP_C_Check_Inventory_for_Seed_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetCropGrowLocation
// ()
// Parameters:
// int                            LocationIndex                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::GetCropGrowLocation(int* LocationIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetCropGrowLocation");

	AGiantTurtle_Character_BP_C_GetCropGrowLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocationIndex != nullptr)
		*LocationIndex = params.LocationIndex;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnOxygenVFX
// ()

void AGiantTurtle_Character_BP_C::SpawnOxygenVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnOxygenVFX");

	AGiantTurtle_Character_BP_C_SpawnOxygenVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Update CropsVisuals
// (Exec, NetResponse, NetMulticast, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void AGiantTurtle_Character_BP_C::Update_CropsVisuals()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Update CropsVisuals");

	AGiantTurtle_Character_BP_C_Update_CropsVisuals_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateFlowerAndMushroom
// ()
// Parameters:
// float                          DeltaSecond                    (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::UpdateFlowerAndMushroom(float DeltaSecond)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateFlowerAndMushroom");

	AGiantTurtle_Character_BP_C_UpdateFlowerAndMushroom_Params params;
	params.DeltaSecond = DeltaSecond;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateCropStructs
// (NetReliable, NetResponse, Static, NetMulticast, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::STATIC_UpdateCropStructs(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UpdateCropStructs");

	AGiantTurtle_Character_BP_C_UpdateCropStructs_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AddOxygenBuff
// (NetRequest, Native, Event, NetResponse, Static, NetMulticast, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)

void AGiantTurtle_Character_BP_C::STATIC_AddOxygenBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.AddOxygenBuff");

	AGiantTurtle_Character_BP_C_AddOxygenBuff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyInventoryItemChange
// (NetReliable, Native, Event, Public, Private, NetServer, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// bool*                          bIsItemAdd                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimalItem**            theItem                        (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bEquipItem                     (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPNotifyInventoryItemChange");

	AGiantTurtle_Character_BP_C_BPNotifyInventoryItemChange_Params params;
	params.bIsItemAdd = bIsItemAdd;
	params.theItem = theItem;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetMovementMontage
// ()
// Parameters:
// TEnumAsByte<ERootMotionMovementMode> Mode                           (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::GetMovementMontage(TEnumAsByte<ERootMotionMovementMode> Mode, class UAnimMontage** Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.GetMovementMontage");

	AGiantTurtle_Character_BP_C_GetMovementMontage_Params params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Montage != nullptr)
		*Montage = params.Montage;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetRiderUnboardLocation
// ()
// Parameters:
// class APrimalCharacter**       RidingCharacter                (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AGiantTurtle_Character_BP_C::BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.BPGetRiderUnboardLocation");

	AGiantTurtle_Character_BP_C_BPGetRiderUnboardLocation_Params params;
	params.RidingCharacter = RidingCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UserConstructionScript
// ()

void AGiantTurtle_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.UserConstructionScript");

	AGiantTurtle_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ReceiveTick");

	AGiantTurtle_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubbles
// ()

void AGiantTurtle_Character_BP_C::SpawnBubbles()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.SpawnBubbles");

	AGiantTurtle_Character_BP_C_SpawnBubbles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetIsBreathing
// ()
// Parameters:
// bool                           bIsBreathing                   (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::Server_SetIsBreathing(bool bIsBreathing)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetIsBreathing");

	AGiantTurtle_Character_BP_C_Server_SetIsBreathing_Params params;
	params.bIsBreathing = bIsBreathing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetBreathDirection
// ()
// Parameters:
// struct FVector                 BreathViewStartLocation        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 BreathDirection                (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::Server_SetBreathDirection(const struct FVector& BreathViewStartLocation, const struct FVector& BreathDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_SetBreathDirection");

	AGiantTurtle_Character_BP_C_Server_SetBreathDirection_Params params;
	params.BreathViewStartLocation = BreathViewStartLocation;
	params.BreathDirection = BreathDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_TryBubbleAttack
// ()
// Parameters:
// class AShooterPlayerController* OwnerContoler                  (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::Server_TryBubbleAttack(class AShooterPlayerController* OwnerContoler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_TryBubbleAttack");

	AGiantTurtle_Character_BP_C_Server_TryBubbleAttack_Params params;
	params.OwnerContoler = OwnerContoler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_StopBubbleAttack
// ()

void AGiantTurtle_Character_BP_C::Server_StopBubbleAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Server_StopBubbleAttack");

	AGiantTurtle_Character_BP_C_Server_StopBubbleAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Multi_StopCurrentMontage
// ()

void AGiantTurtle_Character_BP_C::Multi_StopCurrentMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.Multi_StopCurrentMontage");

	AGiantTurtle_Character_BP_C_Multi_StopCurrentMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ExecuteUbergraph_GiantTurtle_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGiantTurtle_Character_BP_C::ExecuteUbergraph_GiantTurtle_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GiantTurtle_Character_BP.GiantTurtle_Character_BP_C.ExecuteUbergraph_GiantTurtle_Character_BP");

	AGiantTurtle_Character_BP_C_ExecuteUbergraph_GiantTurtle_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
