// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Chalico_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Chalico_Character_BP.Chalico_Character_BP_C.BPOnAnimPlayedNotify
// ()
// Parameters:
// class UAnimMontage**           AnimMontage                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         InPlayRate                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName*                  StartSectionName               (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicate                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bReplicateToOwner              (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseAndServerUpdateMesh (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bForceTickPoseOnServer         (Parm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::BPOnAnimPlayedNotify(class UAnimMontage** AnimMontage, float* InPlayRate, struct FName* StartSectionName, bool* bReplicate, bool* bReplicateToOwner, bool* bForceTickPoseAndServerUpdateMesh, bool* bForceTickPoseOnServer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.BPOnAnimPlayedNotify");

	AChalico_Character_BP_C_BPOnAnimPlayedNotify_Params params;
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


// Function Chalico_Character_BP.Chalico_Character_BP_C.BlueprintCanAttack
// ()
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AChalico_Character_BP_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.BlueprintCanAttack");

	AChalico_Character_BP_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.CheckForNewBiome
// ()

void AChalico_Character_BP_C::CheckForNewBiome()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.CheckForNewBiome");

	AChalico_Character_BP_C_CheckForNewBiome_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.SelectMudMesh
// ()

void AChalico_Character_BP_C::SelectMudMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.SelectMudMesh");

	AChalico_Character_BP_C_SelectMudMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.HasConflictWithAI
// ()
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::HasConflictWithAI(bool* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.HasConflictWithAI");

	AChalico_Character_BP_C_HasConflictWithAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.CanLookForChalicos
// ()
// Parameters:
// bool                           canLook                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::CanLookForChalicos(bool* canLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.CanLookForChalicos");

	AChalico_Character_BP_C_CanLookForChalicos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canLook != nullptr)
		*canLook = params.canLook;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.DeactivateThrowMode
// ()

void AChalico_Character_BP_C::DeactivateThrowMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.DeactivateThrowMode");

	AChalico_Character_BP_C_DeactivateThrowMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.ReactToMudHit
// ()
// Parameters:
// class AActor*                  Instigator                     (Parm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::ReactToMudHit(class AActor* Instigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.ReactToMudHit");

	AChalico_Character_BP_C_ReactToMudHit_Params params;
	params.Instigator = Instigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.Is FriendlyTarget in Range
// ()
// Parameters:
// class AActor*                  mudTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canUseMud                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::Is_FriendlyTarget_in_Range(class AActor* mudTarget, bool* canUseMud)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.Is FriendlyTarget in Range");

	AChalico_Character_BP_C_Is_FriendlyTarget_in_Range_Params params;
	params.mudTarget = mudTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canUseMud != nullptr)
		*canUseMud = params.canUseMud;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.CanThrowMud
// ()
// Parameters:
// class AActor*                  mudTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           canThrow                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::CanThrowMud(class AActor* mudTarget, bool* canThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.CanThrowMud");

	AChalico_Character_BP_C_CanThrowMud_Params params;
	params.mudTarget = mudTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canThrow != nullptr)
		*canThrow = params.canThrow;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.CanStandUp
// ()
// Parameters:
// bool                           canStand                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::CanStandUp(bool* canStand)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.CanStandUp");

	AChalico_Character_BP_C_CanStandUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canStand != nullptr)
		*canStand = params.canStand;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.BPPreventRiding
// ()
// Parameters:
// class AShooterCharacter**      ByPawn                         (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bDontCheckDistance             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AChalico_Character_BP_C::BPPreventRiding(class AShooterCharacter** ByPawn, bool* bDontCheckDistance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.BPPreventRiding");

	AChalico_Character_BP_C_BPPreventRiding_Params params;
	params.ByPawn = ByPawn;
	params.bDontCheckDistance = bDontCheckDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.BPGetMultiUseEntries
// (Native, Event, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, Const, NetValidate)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AChalico_Character_BP_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.BPGetMultiUseEntries");

	AChalico_Character_BP_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AChalico_Character_BP_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.BPTryMultiUse");

	AChalico_Character_BP_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.ShouldStandUp
// ()
// Parameters:
// bool                           StandUp                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::ShouldStandUp(bool* StandUp)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.ShouldStandUp");

	AChalico_Character_BP_C_ShouldStandUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StandUp != nullptr)
		*StandUp = params.StandUp;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.BPTimerServer
// ()

void AChalico_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.BPTimerServer");

	AChalico_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.CanSitDown
// ()
// Parameters:
// bool                           canSit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::CanSitDown(bool* canSit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.CanSitDown");

	AChalico_Character_BP_C_CanSitDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (canSit != nullptr)
		*canSit = params.canSit;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.Look for Chalicos
// (NetRequest, Static, NetMulticast, MulticastDelegate, Public, Protected, Delegate, NetServer, HasDefaults, NetClient, DLLImport, Const, NetValidate)

void AChalico_Character_BP_C::STATIC_Look_for_Chalicos()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.Look for Chalicos");

	AChalico_Character_BP_C_Look_for_Chalicos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.UserConstructionScript
// ()

void AChalico_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.UserConstructionScript");

	AChalico_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AChalico_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.StandUp
// ()

void AChalico_Character_BP_C::StandUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.StandUp");

	AChalico_Character_BP_C_StandUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.TrySittingDown
// ()

void AChalico_Character_BP_C::TrySittingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.TrySittingDown");

	AChalico_Character_BP_C_TrySittingDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.TryStandingUp
// ()

void AChalico_Character_BP_C::TryStandingUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.TryStandingUp");

	AChalico_Character_BP_C_TryStandingUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.SetChalicoFocus
// ()
// Parameters:
// class AActor*                  NewFocus                       (Parm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::SetChalicoFocus(class AActor* NewFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.SetChalicoFocus");

	AChalico_Character_BP_C_SetChalicoFocus_Params params;
	params.NewFocus = NewFocus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.ClearChalicoFocus
// ()

void AChalico_Character_BP_C::ClearChalicoFocus()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.ClearChalicoFocus");

	AChalico_Character_BP_C_ClearChalicoFocus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.StartMudThrow
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::StartMudThrow(class AActor* Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.StartMudThrow");

	AChalico_Character_BP_C_StartMudThrow_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.CloseRetaliation
// ()

void AChalico_Character_BP_C::CloseRetaliation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.CloseRetaliation");

	AChalico_Character_BP_C_CloseRetaliation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.TryThrowMud
// ()

void AChalico_Character_BP_C::TryThrowMud()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.TryThrowMud");

	AChalico_Character_BP_C_TryThrowMud_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.OnSittingEvent
// ()

void AChalico_Character_BP_C::OnSittingEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.OnSittingEvent");

	AChalico_Character_BP_C_OnSittingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.OnThrowMudEvent
// ()

void AChalico_Character_BP_C::OnThrowMudEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.OnThrowMudEvent");

	AChalico_Character_BP_C_OnThrowMudEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.ReceiveBeginPlay
// ()

void AChalico_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.ReceiveBeginPlay");

	AChalico_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.BPUnstasis
// ()

void AChalico_Character_BP_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.BPUnstasis");

	AChalico_Character_BP_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.SitDown
// ()

void AChalico_Character_BP_C::SitDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.SitDown");

	AChalico_Character_BP_C_SitDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.QuickLoadSitState
// ()

void AChalico_Character_BP_C::QuickLoadSitState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.QuickLoadSitState");

	AChalico_Character_BP_C_QuickLoadSitState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Chalico_Character_BP.Chalico_Character_BP_C.ExecuteUbergraph_Chalico_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AChalico_Character_BP_C::ExecuteUbergraph_Chalico_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Chalico_Character_BP.Chalico_Character_BP_C.ExecuteUbergraph_Chalico_Character_BP");

	AChalico_Character_BP_C_ExecuteUbergraph_Chalico_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
