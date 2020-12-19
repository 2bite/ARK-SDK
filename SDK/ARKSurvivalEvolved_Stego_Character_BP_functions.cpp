// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Stego_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stego_Character_BP.Stego_Character_BP_C.BPOverrideMoveToOrder
// ()
// Parameters:
// struct FVector*                MoveToLocation                 (Parm, ZeroConstructor, IsPlainOldData)
// class AShooterCharacter**      OrderingPlayer                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStego_Character_BP_C::BPOverrideMoveToOrder(struct FVector* MoveToLocation, class AShooterCharacter** OrderingPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPOverrideMoveToOrder");

	AStego_Character_BP_C_BPOverrideMoveToOrder_Params params;
	params.MoveToLocation = MoveToLocation;
	params.OrderingPlayer = OrderingPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPGetCrosshairColor
// ()
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor AStego_Character_BP_C::BPGetCrosshairColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPGetCrosshairColor");

	AStego_Character_BP_C_BPGetCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustImpulseFromDamage
// ()
// Parameters:
// struct FVector*                DesiredImpulse                 (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DamageTaken                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class APawn**                  PawnInstigator                 (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AStego_Character_BP_C::BPAdjustImpulseFromDamage(struct FVector* DesiredImpulse, float* DamageTaken, struct FDamageEvent* TheDamageEvent, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustImpulseFromDamage");

	AStego_Character_BP_C_BPAdjustImpulseFromDamage_Params params;
	params.DesiredImpulse = DesiredImpulse;
	params.DamageTaken = DamageTaken;
	params.TheDamageEvent = TheDamageEvent;
	params.PawnInstigator = PawnInstigator;
	params.DamageCauser = DamageCauser;
	params.bIsPointDamage = bIsPointDamage;
	params.PointHitInfo = PointHitInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPHandleControllerInitiatedAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStego_Character_BP_C::BPHandleControllerInitiatedAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPHandleControllerInitiatedAttack");

	AStego_Character_BP_C_BPHandleControllerInitiatedAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Stego_Character_BP.Stego_Character_BP_C.OnRep_Impaling
// ()

void AStego_Character_BP_C::OnRep_Impaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.OnRep_Impaling");

	AStego_Character_BP_C_OnRep_Impaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustAttackIndex
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStego_Character_BP_C::BPAdjustAttackIndex(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustAttackIndex");

	AStego_Character_BP_C_BPAdjustAttackIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Stego_Character_BP.Stego_Character_BP_C.CheckCanImpaleActor
// ()
// Parameters:
// class APrimalCharacter*        Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanImpale                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::CheckCanImpaleActor(class APrimalCharacter* Actor, bool* CanImpale)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.CheckCanImpaleActor");

	AStego_Character_BP_C_CheckCanImpaleActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanImpale != nullptr)
		*CanImpale = params.CanImpale;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPGetDragSocketName
// ()
// Parameters:
// class APrimalCharacter**       DraggingChar                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AStego_Character_BP_C::BPGetDragSocketName(class APrimalCharacter** DraggingChar)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPGetDragSocketName");

	AStego_Character_BP_C_BPGetDragSocketName_Params params;
	params.DraggingChar = DraggingChar;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPGetDragSocketDinoName
// ()
// Parameters:
// class APrimalDinoCharacter**   aGrabbedDino                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName AStego_Character_BP_C::BPGetDragSocketDinoName(class APrimalDinoCharacter** aGrabbedDino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPGetDragSocketDinoName");

	AStego_Character_BP_C_BPGetDragSocketDinoName_Params params;
	params.aGrabbedDino = aGrabbedDino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Stego_Character_BP.Stego_Character_BP_C.ReceiveTick
// (NetRequest, Exec, Native, NetResponse, NetMulticast, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.ReceiveTick");

	AStego_Character_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPOverrideGetAttackAnimationIndex
// (NetReliable, NetRequest, Exec, Event, Static, NetMulticast, Protected, Delegate, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UAnimMontage*>    AnimationArray                 (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int AStego_Character_BP_C::STATIC_BPOverrideGetAttackAnimationIndex(int* AttackIndex, TArray<class UAnimMontage*>* AnimationArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPOverrideGetAttackAnimationIndex");

	AStego_Character_BP_C_BPOverrideGetAttackAnimationIndex_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimationArray != nullptr)
		*AnimationArray = params.AnimationArray;

	return params.ReturnValue;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AStego_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPHandleUseButtonPress
// ()
// Parameters:
// class AShooterPlayerController** RiderController                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStego_Character_BP_C::BPHandleUseButtonPress(class AShooterPlayerController** RiderController)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPHandleUseButtonPress");

	AStego_Character_BP_C_BPHandleUseButtonPress_Params params;
	params.RiderController = RiderController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPNotifyClearRider
// ()
// Parameters:
// class AShooterCharacter**      RiderClearing                  (Parm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::BPNotifyClearRider(class AShooterCharacter** RiderClearing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPNotifyClearRider");

	AStego_Character_BP_C_BPNotifyClearRider_Params params;
	params.RiderClearing = RiderClearing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPNotifySetRider
// ()
// Parameters:
// class AShooterCharacter**      RiderSetting                   (Parm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::BPNotifySetRider(class AShooterCharacter** RiderSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPNotifySetRider");

	AStego_Character_BP_C_BPNotifySetRider_Params params;
	params.RiderSetting = RiderSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPModifyHarvestingWeightsArray
// ()
// Parameters:
// TArray<float>                  resourceWeightsIn              (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UPrimalItem*>     resourceItems                  (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                  resourceWeightsOut             (Parm, OutParm, ZeroConstructor)

void AStego_Character_BP_C::BPModifyHarvestingWeightsArray(TArray<float>* resourceWeightsIn, TArray<class UPrimalItem*>* resourceItems, TArray<float>* resourceWeightsOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPModifyHarvestingWeightsArray");

	AStego_Character_BP_C_BPModifyHarvestingWeightsArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (resourceWeightsIn != nullptr)
		*resourceWeightsIn = params.resourceWeightsIn;
	if (resourceItems != nullptr)
		*resourceItems = params.resourceItems;
	if (resourceWeightsOut != nullptr)
		*resourceWeightsOut = params.resourceWeightsOut;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, Exec, Native, MulticastDelegate, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStego_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BlueprintAdjustOutputDamage");

	AStego_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
	params.AttackIndex = AttackIndex;
	params.OriginalDamageAmount = OriginalDamageAmount;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
	if (OutDamageImpulse != nullptr)
		*OutDamageImpulse = params.OutDamageImpulse;

	return params.ReturnValue;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStego_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPAdjustDamage");

	AStego_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Stego_Character_BP.Stego_Character_BP_C.OnRep_BackplateMode
// ()

void AStego_Character_BP_C::OnRep_BackplateMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.OnRep_BackplateMode");

	AStego_Character_BP_C_OnRep_BackplateMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPGetHUDElements
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHUDElement>     OutElements                    (Parm, OutParm, ZeroConstructor)

void AStego_Character_BP_C::BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPGetHUDElements");

	AStego_Character_BP_C_BPGetHUDElements_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutElements != nullptr)
		*OutElements = params.OutElements;
}


// Function Stego_Character_BP.Stego_Character_BP_C.SetBackplateMode
// (NetReliable, NetRequest, Native, Event, NetResponse, MulticastDelegate, Private, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintPure, NetValidate)
// Parameters:
// TEnumAsByte<E_StegoBackplateMode> BackplateMode                  (Parm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::SetBackplateMode(TEnumAsByte<E_StegoBackplateMode> BackplateMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.SetBackplateMode");

	AStego_Character_BP_C_SetBackplateMode_Params params;
	params.BackplateMode = BackplateMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.SwitchBackplateMode
// ()

void AStego_Character_BP_C::SwitchBackplateMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.SwitchBackplateMode");

	AStego_Character_BP_C_SwitchBackplateMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.BPDoAttack");

	AStego_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.UserConstructionScript
// ()

void AStego_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.UserConstructionScript");

	AStego_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.ReceiveBeginPlay
// ()

void AStego_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.ReceiveBeginPlay");

	AStego_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.Dismount
// ()

void AStego_Character_BP_C::Dismount()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.Dismount");

	AStego_Character_BP_C_Dismount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.TryImpaleTarget
// ()
// Parameters:
// class APrimalCharacter*        ImpaledTarget                  (Parm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::TryImpaleTarget(class APrimalCharacter* ImpaledTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.TryImpaleTarget");

	AStego_Character_BP_C_TryImpaleTarget_Params params;
	params.ImpaledTarget = ImpaledTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.ReleaseImpalingTarget
// ()

void AStego_Character_BP_C::ReleaseImpalingTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.ReleaseImpalingTarget");

	AStego_Character_BP_C_ReleaseImpalingTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.HandleStopImpaling
// ()

void AStego_Character_BP_C::HandleStopImpaling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.HandleStopImpaling");

	AStego_Character_BP_C_HandleStopImpaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.SetBleedingVFXLocation
// ()
// Parameters:
// struct FVector                 NewLocation                    (Parm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::SetBleedingVFXLocation(const struct FVector& NewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.SetBleedingVFXLocation");

	AStego_Character_BP_C_SetBleedingVFXLocation_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.DoImpaleTarget
// ()
// Parameters:
// class APrimalCharacter*        ImpaledTarget                  (Parm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::DoImpaleTarget(class APrimalCharacter* ImpaledTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.DoImpaleTarget");

	AStego_Character_BP_C_DoImpaleTarget_Params params;
	params.ImpaledTarget = ImpaledTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.PlayPreventDismountVFX
// ()

void AStego_Character_BP_C::PlayPreventDismountVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.PlayPreventDismountVFX");

	AStego_Character_BP_C_PlayPreventDismountVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stego_Character_BP.Stego_Character_BP_C.ExecuteUbergraph_Stego_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStego_Character_BP_C::ExecuteUbergraph_Stego_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stego_Character_BP.Stego_Character_BP_C.ExecuteUbergraph_Stego_Character_BP");

	AStego_Character_BP_C_ExecuteUbergraph_Stego_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
