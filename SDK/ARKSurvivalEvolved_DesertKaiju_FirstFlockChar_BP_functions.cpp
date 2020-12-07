// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DesertKaiju_FirstFlockChar_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPCanCryo
// ()
// Parameters:
// class AShooterPlayerController** ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ADesertKaiju_FirstFlockChar_BP_C::BPCanCryo(class AShooterPlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPCanCryo");

	ADesertKaiju_FirstFlockChar_BP_C_BPCanCryo_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPOnLethalDamage
// ()
// Parameters:
// float*                         KillingDamage                  (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent            DamageEvent                    (Parm, OutParm, ReferenceParm)
// class AController**            Killer                         (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bPreventDeath                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_FirstFlockChar_BP_C::BPOnLethalDamage(float* KillingDamage, class AController** Killer, class AActor** DamageCauser, struct FDamageEvent* DamageEvent, bool* bPreventDeath)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPOnLethalDamage");

	ADesertKaiju_FirstFlockChar_BP_C_BPOnLethalDamage_Params params;
	params.KillingDamage = KillingDamage;
	params.Killer = Killer;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DamageEvent != nullptr)
		*DamageEvent = params.DamageEvent;
	if (bPreventDeath != nullptr)
		*bPreventDeath = params.bPreventDeath;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.OwnerKaijuCheck
// ()

void ADesertKaiju_FirstFlockChar_BP_C::OwnerKaijuCheck()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.OwnerKaijuCheck");

	ADesertKaiju_FirstFlockChar_BP_C_OwnerKaijuCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPTimerServer
// ()

void ADesertKaiju_FirstFlockChar_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPTimerServer");

	ADesertKaiju_FirstFlockChar_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockGroupMaterial
// ()
// Parameters:
// int                            Group                          (Parm, ZeroConstructor, IsPlainOldData)
// class UMaterialInstanceDynamic* Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_FirstFlockChar_BP_C::GetFlockGroupMaterial(int Group, class UMaterialInstanceDynamic** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockGroupMaterial");

	ADesertKaiju_FirstFlockChar_BP_C_GetFlockGroupMaterial_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.TickFlockGroup
// ()
// Parameters:
// int                            Shape                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    Group                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FBoidBehavior           Behavior                       (Parm, OutParm, ReferenceParm)
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            groupIndex                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_FirstFlockChar_BP_C::TickFlockGroup(int Shape, float DeltaTime, int groupIndex, TArray<int>* Group, struct FBoidBehavior* Behavior)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.TickFlockGroup");

	ADesertKaiju_FirstFlockChar_BP_C_TickFlockGroup_Params params;
	params.Shape = Shape;
	params.DeltaTime = DeltaTime;
	params.groupIndex = groupIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Group != nullptr)
		*Group = params.Group;
	if (Behavior != nullptr)
		*Behavior = params.Behavior;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockAvoidanceArea
// (NetRequest, Event, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// TArray<struct FAvoidanceArea>  Return                         (Parm, OutParm, ZeroConstructor)

void ADesertKaiju_FirstFlockChar_BP_C::GetFlockAvoidanceArea(TArray<struct FAvoidanceArea>* Return)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.GetFlockAvoidanceArea");

	ADesertKaiju_FirstFlockChar_BP_C_GetFlockAvoidanceArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return != nullptr)
		*Return = params.Return;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DistanceToKaiju
// (Exec, Native, Event, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float                          Distance                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_FirstFlockChar_BP_C::DistanceToKaiju(float* Distance)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DistanceToKaiju");

	ADesertKaiju_FirstFlockChar_BP_C_DistanceToKaiju_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesertKaiju_FirstFlockChar_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPAdjustDamage");

	ADesertKaiju_FirstFlockChar_BP_C_BPAdjustDamage_Params params;
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


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPDinoPostBeginPlay
// (NetReliable, NetRequest, Native, Event, NetResponse, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)

void ADesertKaiju_FirstFlockChar_BP_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BPDinoPostBeginPlay");

	ADesertKaiju_FirstFlockChar_BP_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveTick
// (Exec, NetResponse, Static, NetMulticast, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_FirstFlockChar_BP_C::STATIC_ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveTick");

	ADesertKaiju_FirstFlockChar_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BP_OnSetDeath
// ()

void ADesertKaiju_FirstFlockChar_BP_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BP_OnSetDeath");

	ADesertKaiju_FirstFlockChar_BP_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BlueprintAdjustOutputDamage
// (NetRequest, NetResponse, Public, Private, Protected, NetServer, HasOutParms, DLLImport, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ADesertKaiju_FirstFlockChar_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.BlueprintAdjustOutputDamage");

	ADesertKaiju_FirstFlockChar_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.UserConstructionScript
// ()

void ADesertKaiju_FirstFlockChar_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.UserConstructionScript");

	ADesertKaiju_FirstFlockChar_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveBeginPlay
// ()

void ADesertKaiju_FirstFlockChar_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ReceiveBeginPlay");

	ADesertKaiju_FirstFlockChar_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MulticastUpdateShape
// ()
// Parameters:
// int                            NewShape                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FRotator                Rotation                       (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_FirstFlockChar_BP_C::MulticastUpdateShape(int NewShape, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MulticastUpdateShape");

	ADesertKaiju_FirstFlockChar_BP_C_MulticastUpdateShape_Params params;
	params.NewShape = NewShape;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Multi_UpdateAttackShape
// ()

void ADesertKaiju_FirstFlockChar_BP_C::Multi_UpdateAttackShape()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Multi_UpdateAttackShape");

	ADesertKaiju_FirstFlockChar_BP_C_Multi_UpdateAttackShape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DelayedTurnBoolOff
// ()

void ADesertKaiju_FirstFlockChar_BP_C::DelayedTurnBoolOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.DelayedTurnBoolOff");

	ADesertKaiju_FirstFlockChar_BP_C_DelayedTurnBoolOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiUpdateKaijuOwner
// ()
// Parameters:
// class AActor*                  KaijuOwner                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_FirstFlockChar_BP_C::MultiUpdateKaijuOwner(class AActor* KaijuOwner)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiUpdateKaijuOwner");

	ADesertKaiju_FirstFlockChar_BP_C_MultiUpdateKaijuOwner_Params params;
	params.KaijuOwner = KaijuOwner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Delayed_DealDamage
// ()
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 HitFromDirection               (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              HitInfo                        (Parm)
// class UClass*                  DmgTypeClass                   (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_FirstFlockChar_BP_C::Delayed_DealDamage(class AActor* DamagedActor, const struct FVector& HitFromDirection, const struct FHitResult& HitInfo, class UClass* DmgTypeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.Delayed_DealDamage");

	ADesertKaiju_FirstFlockChar_BP_C_Delayed_DealDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.HitFromDirection = HitFromDirection;
	params.HitInfo = HitInfo;
	params.DmgTypeClass = DmgTypeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.CleanupBoids
// ()

void ADesertKaiju_FirstFlockChar_BP_C::CleanupBoids()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.CleanupBoids");

	ADesertKaiju_FirstFlockChar_BP_C_CleanupBoids_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiOnLethalDamage
// ()

void ADesertKaiju_FirstFlockChar_BP_C::MultiOnLethalDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.MultiOnLethalDamage");

	ADesertKaiju_FirstFlockChar_BP_C_MultiOnLethalDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADesertKaiju_FirstFlockChar_BP_C::ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DesertKaiju_FirstFlockChar_BP.DesertKaiju_FirstFlockChar_BP_C.ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP");

	ADesertKaiju_FirstFlockChar_BP_C_ExecuteUbergraph_DesertKaiju_FirstFlockChar_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
