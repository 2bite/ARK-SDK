// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fenrir_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fenrir_Character_BP.Fenrir_Character_BP_C.AllowPlayMontage
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFenrir_Character_BP_C::AllowPlayMontage(class UAnimMontage** AnimMontage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.AllowPlayMontage");

	AFenrir_Character_BP_C_AllowPlayMontage_Params params;
	params.AnimMontage = AnimMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTimerServer
// ()

void AFenrir_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTimerServer");

	AFenrir_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BoostNearbyDirewolves
// ()

void AFenrir_Character_BP_C::BoostNearbyDirewolves()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BoostNearbyDirewolves");

	AFenrir_Character_BP_C_BoostNearbyDirewolves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDinoPostBeginPlay
// ()

void AFenrir_Character_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDinoPostBeginPlay");

	AFenrir_Character_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPSetupTamed
// ()
// Parameters:
// bool*                          bWasJustTamed                  (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::BPSetupTamed(bool* bWasJustTamed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPSetupTamed");

	AFenrir_Character_BP_C_BPSetupTamed_Params params;
	params.bWasJustTamed = bWasJustTamed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateNaturalArmor
// (NetRequest, Native, NetMulticast, Public, Delegate, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)

void AFenrir_Character_BP_C::UpdateNaturalArmor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateNaturalArmor");

	AFenrir_Character_BP_C_UpdateNaturalArmor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPServerHandleNetExecCommand
// ()
// Parameters:
// class APlayerController**      FromPC                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  CommandName                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FBPNetExecParams        ExecParams                     (Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFenrir_Character_BP_C::BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPServerHandleNetExecCommand");

	AFenrir_Character_BP_C_BPServerHandleNetExecCommand_Params params;
	params.FromPC = FromPC;
	params.CommandName = CommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecParams != nullptr)
		*ExecParams = params.ExecParams;

	return params.ReturnValue;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateRiderBuff
// ()
// Parameters:
// bool                           remove                         (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter*       Rider                          (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::UpdateRiderBuff(bool remove, class AShooterCharacter* Rider)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.UpdateRiderBuff");

	AFenrir_Character_BP_C_UpdateRiderBuff_Params params;
	params.remove = remove;
	params.Rider = Rider;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFenrir_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPAdjustDamage");

	AFenrir_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPGetHUDElements
// (NetRequest, Native, Event, NetResponse, NetMulticast, Public, Delegate, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AFenrir_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPGetHUDElements");

	AFenrir_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.SpawnIceBiteVFX
// ()

void AFenrir_Character_BP_C::SpawnIceBiteVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.SpawnIceBiteVFX");

	AFenrir_Character_BP_C_SpawnIceBiteVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BP_OnSetDeath
// ()

void AFenrir_Character_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BP_OnSetDeath");

	AFenrir_Character_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetupSpineMats
// ()

void AFenrir_Character_BP_C::SetupSpineMats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetupSpineMats");

	AFenrir_Character_BP_C_SetupSpineMats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifyClearRider");

	AFenrir_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanJumpInternal
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFenrir_Character_BP_C::CanJumpInternal()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanJumpInternal");

	AFenrir_Character_BP_C_CanJumpInternal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPNotifySetRider");

	AFenrir_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTriggerStasisEvent
// ()

void AFenrir_Character_BP_C::BPTriggerStasisEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPTriggerStasisEvent");

	AFenrir_Character_BP_C_BPTriggerStasisEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPDoAttack");

	AFenrir_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, NetRequest, Exec, NetResponse, Static, NetMulticast, Public, Delegate, NetClient, DLLImport, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AFenrir_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAdjustOutputDamage");

	AFenrir_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.UnriddenEndIceState
// ()

void AFenrir_Character_BP_C::UnriddenEndIceState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.UnriddenEndIceState");

	AFenrir_Character_BP_C_UnriddenEndIceState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPOnStaminaDrained
// ()

void AFenrir_Character_BP_C::BPOnStaminaDrained()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BPOnStaminaDrained");

	AFenrir_Character_BP_C_BPOnStaminaDrained_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFenrir_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanAttack");

	AFenrir_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanRiderAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AFenrir_Character_BP_C::BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintCanRiderAttack");

	AFenrir_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina
// ()
// Parameters:
// float                          needsStamina                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::Does_Fenrir_Have_Enough_Stamina(float needsStamina, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina");

	AFenrir_Character_BP_C_Does_Fenrir_Have_Enough_Stamina_Params params;
	params.needsStamina = needsStamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina Pure
// ()
// Parameters:
// float                          needsStamina                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::Does_Fenrir_Have_Enough_Stamina_Pure(float needsStamina, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Does Fenrir Have Enough Stamina Pure");

	AFenrir_Character_BP_C_Does_Fenrir_Have_Enough_Stamina_Pure_Params params;
	params.needsStamina = needsStamina;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanUseIceState
// ()
// Parameters:
// bool                           isForStart                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::CanUseIceState(bool isForStart, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.CanUseIceState");

	AFenrir_Character_BP_C_CanUseIceState_Params params;
	params.isForStart = isForStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.NetSetUseSpines
// ()
// Parameters:
// bool                           newUse                         (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::NetSetUseSpines(bool newUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.NetSetUseSpines");

	AFenrir_Character_BP_C_NetSetUseSpines_Params params;
	params.newUse = newUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.OnRep_IsIcey
// ()

void AFenrir_Character_BP_C::OnRep_IsIcey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.OnRep_IsIcey");

	AFenrir_Character_BP_C_OnRep_IsIcey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir
// ()

void AFenrir_Character_BP_C::InitFenrir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir");

	AFenrir_Character_BP_C_InitFenrir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetIceStateActive
// ()
// Parameters:
// bool                           IsActive                       (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::SetIceStateActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetIceStateActive");

	AFenrir_Character_BP_C_SetIceStateActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AFenrir_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.UserConstructionScript
// ()

void AFenrir_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.UserConstructionScript");

	AFenrir_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__FinishedFunc
// ()

void AFenrir_Character_BP_C::Fade_IceSpines__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__FinishedFunc");

	AFenrir_Character_BP_C_Fade_IceSpines__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__UpdateFunc
// ()

void AFenrir_Character_BP_C::Fade_IceSpines__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Fade_IceSpines__UpdateFunc");

	AFenrir_Character_BP_C_Fade_IceSpines__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__FinishedFunc
// ()

void AFenrir_Character_BP_C::Timeline_PlayDissolve__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__FinishedFunc");

	AFenrir_Character_BP_C_Timeline_PlayDissolve__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__UpdateFunc
// ()

void AFenrir_Character_BP_C::Timeline_PlayDissolve__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_PlayDissolve__UpdateFunc");

	AFenrir_Character_BP_C_Timeline_PlayDissolve__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__FinishedFunc
// ()

void AFenrir_Character_BP_C::Timeline_ClearEmissive__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__FinishedFunc");

	AFenrir_Character_BP_C_Timeline_ClearEmissive__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__UpdateFunc
// ()

void AFenrir_Character_BP_C::Timeline_ClearEmissive__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Timeline_ClearEmissive__UpdateFunc");

	AFenrir_Character_BP_C_Timeline_ClearEmissive__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayFadeIceSpines
// ()

void AFenrir_Character_BP_C::PlayFadeIceSpines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayFadeIceSpines");

	AFenrir_Character_BP_C_PlayFadeIceSpines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReverseFadeIceSpines
// ()

void AFenrir_Character_BP_C::ReverseFadeIceSpines()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReverseFadeIceSpines");

	AFenrir_Character_BP_C_ReverseFadeIceSpines_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetNewTime_Fade_IceSpines
// ()
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::SetNewTime_Fade_IceSpines(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.SetNewTime_Fade_IceSpines");

	AFenrir_Character_BP_C_SetNewTime_Fade_IceSpines_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_SetNewTime_Fade_IceSpines
// ()
// Parameters:
// float                          NewTime                        (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::Multi_SetNewTime_Fade_IceSpines(float NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_SetNewTime_Fade_IceSpines");

	AFenrir_Character_BP_C_Multi_SetNewTime_Fade_IceSpines_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PlayFade
// ()

void AFenrir_Character_BP_C::Multi_PlayFade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PlayFade");

	AFenrir_Character_BP_C_Multi_PlayFade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_HardSetSpinesActive
// ()
// Parameters:
// bool                           IsActive                       (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::Multi_HardSetSpinesActive(bool IsActive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_HardSetSpinesActive");

	AFenrir_Character_BP_C_Multi_HardSetSpinesActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReceiveBeginPlay
// ()

void AFenrir_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.ReceiveBeginPlay");

	AFenrir_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir_NextTick
// ()

void AFenrir_Character_BP_C::InitFenrir_NextTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenrir_NextTick");

	AFenrir_Character_BP_C_InitFenrir_NextTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenir_Event
// ()

void AFenrir_Character_BP_C::InitFenir_Event()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.InitFenir_Event");

	AFenrir_Character_BP_C_InitFenir_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PrepIceState
// ()
// Parameters:
// bool                           Prevent                        (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::Multi_PrepIceState(bool Prevent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.Multi_PrepIceState");

	AFenrir_Character_BP_C_Multi_PrepIceState_Params params;
	params.Prevent = Prevent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayDissolve
// ()
// Parameters:
// bool                           Is0To1                         (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::PlayDissolve(bool Is0To1)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.PlayDissolve");

	AFenrir_Character_BP_C_PlayDissolve_Params params;
	params.Is0To1 = Is0To1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.ClearEmissive
// ()
// Parameters:
// float                          StartingEmissive               (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::ClearEmissive(float StartingEmissive)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.ClearEmissive");

	AFenrir_Character_BP_C_ClearEmissive_Params params;
	params.StartingEmissive = StartingEmissive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fenrir_Character_BP.Fenrir_Character_BP_C.ExecuteUbergraph_Fenrir_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFenrir_Character_BP_C::ExecuteUbergraph_Fenrir_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fenrir_Character_BP.Fenrir_Character_BP_C.ExecuteUbergraph_Fenrir_Character_BP");

	AFenrir_Character_BP_C_ExecuteUbergraph_Fenrir_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
