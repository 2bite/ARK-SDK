// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Megatherium_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegatherium_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPPreventRiding");

	AMegatherium_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPTimerServer
// ()

void AMegatherium_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPTimerServer");

	AMegatherium_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.ShouldStandUp
// ()
// Parameters:
// bool                           megaShouldStand                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_C::ShouldStandUp(bool* megaShouldStand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.ShouldStandUp");

	AMegatherium_Character_BP_C_ShouldStandUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (megaShouldStand != nullptr)
		*megaShouldStand = params.megaShouldStand;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPOnAnimPlayedNotify
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPOnAnimPlayedNotify");

	AMegatherium_Character_BP_C_BPOnAnimPlayedNotify_Params params;
	params.AnimMontage = AnimMontage;
	params.InPlayRate = InPlayRate;
	params.StartSectionName = StartSectionName;
	params.bReplicate = bReplicate;
	params.bReplicateToOwner = bReplicateToOwner;
	params.bForceTickPoseAndServerUpdateMesh = bForceTickPoseAndServerUpdateMesh;
	params.bForceTickPoseOnServer = bForceTickPoseOnServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPGetMultiUseEntries
// (NetRequest, Native, NetMulticast, MulticastDelegate, HasDefaults, NetClient)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AMegatherium_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPGetMultiUseEntries");

	AMegatherium_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegatherium_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPTryMultiUse");

	AMegatherium_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.CanStandUp
// ()
// Parameters:
// bool                           canStand                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_C::CanStandUp(bool* canStand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.CanStandUp");

	AMegatherium_Character_BP_C_CanStandUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canStand != nullptr)
		*canStand = params.canStand;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.HasConflictWithAI
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_C::HasConflictWithAI(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.HasConflictWithAI");

	AMegatherium_Character_BP_C_HasConflictWithAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.CanSitDown
// ()
// Parameters:
// bool                           canSit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_C::CanSitDown(bool* canSit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.CanSitDown");

	AMegatherium_Character_BP_C_CanSitDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSit != nullptr)
		*canSit = params.canSit;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPDoAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_C::BPDoAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPDoAttack");

	AMegatherium_Character_BP_C_BPDoAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BlueprintCanRiderAttack
// (NetReliable, Exec, Static, NetMulticast, MulticastDelegate, HasDefaults, NetClient)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMegatherium_Character_BP_C::STATIC_BlueprintCanRiderAttack(int* AttackIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BlueprintCanRiderAttack");

	AMegatherium_Character_BP_C_BlueprintCanRiderAttack_Params params;
	params.AttackIndex = AttackIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPModifyHarvestingQuantity
// ()
// Parameters:
// float*                         originalQuantity               (Parm, ZeroConstructor, IsPlainOldData)
// class UClass**                 resourceSelected               (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMegatherium_Character_BP_C::BPModifyHarvestingQuantity(float* originalQuantity, class UClass** resourceSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPModifyHarvestingQuantity");

	AMegatherium_Character_BP_C_BPModifyHarvestingQuantity_Params params;
	params.originalQuantity = originalQuantity;
	params.resourceSelected = resourceSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPKilledSomethingEvent
// ()
// Parameters:
// class APrimalCharacter**       killedTarget                   (Parm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_C::BPKilledSomethingEvent(class APrimalCharacter** killedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPKilledSomethingEvent");

	AMegatherium_Character_BP_C_BPKilledSomethingEvent_Params params;
	params.killedTarget = killedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.OnNewTarget
// ()

void AMegatherium_Character_BP_C::OnNewTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.OnNewTarget");

	AMegatherium_Character_BP_C_OnNewTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BlueprintAdjustOutputDamage
// (NetRequest, NetResponse, Static, NetMulticast, MulticastDelegate, HasDefaults, NetClient)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMegatherium_Character_BP_C::STATIC_BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BlueprintAdjustOutputDamage");

	AMegatherium_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMegatherium_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPAdjustDamage");

	AMegatherium_Character_BP_C_BPAdjustDamage_Params params;
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


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.IsInsect
// ()
// Parameters:
// class APrimalDinoCharacter*    Character                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_C::IsInsect(class APrimalDinoCharacter* Character, bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.IsInsect");

	AMegatherium_Character_BP_C_IsInsect_Params params;
	params.Character = Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.UserConstructionScript
// ()

void AMegatherium_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.UserConstructionScript");

	AMegatherium_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.SitDown
// ()
// Parameters:
// bool                           PlayAnim                       (Parm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_C::SitDown(bool PlayAnim)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.SitDown");

	AMegatherium_Character_BP_C_SitDown_Params params;
	params.PlayAnim = PlayAnim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.TryStandUp
// ()

void AMegatherium_Character_BP_C::TryStandUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.TryStandUp");

	AMegatherium_Character_BP_C_TryStandUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.TrySitDown
// ()

void AMegatherium_Character_BP_C::TrySitDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.TrySitDown");

	AMegatherium_Character_BP_C_TrySitDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.standUp
// ()

void AMegatherium_Character_BP_C::standUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.standUp");

	AMegatherium_Character_BP_C_standUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.QuickSitDown
// ()

void AMegatherium_Character_BP_C::QuickSitDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.QuickSitDown");

	AMegatherium_Character_BP_C_QuickSitDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.ReceiveBeginPlay
// ()

void AMegatherium_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.ReceiveBeginPlay");

	AMegatherium_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPUnstasis
// ()

void AMegatherium_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.BPUnstasis");

	AMegatherium_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Megatherium_Character_BP.Megatherium_Character_BP_C.ExecuteUbergraph_Megatherium_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMegatherium_Character_BP_C::ExecuteUbergraph_Megatherium_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Megatherium_Character_BP.Megatherium_Character_BP_C.ExecuteUbergraph_Megatherium_Character_BP");

	AMegatherium_Character_BP_C_ExecuteUbergraph_Megatherium_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
