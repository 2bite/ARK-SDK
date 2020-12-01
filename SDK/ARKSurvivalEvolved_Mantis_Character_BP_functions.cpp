// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Mantis_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mantis_Character_BP.Mantis_Character_BP_C.BPModifyForwardDirectionInput
// ()
// Parameters:
// struct FVector                 directionInput                 (Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FVector AMantis_Character_BP_C::BPModifyForwardDirectionInput(struct FVector* directionInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.BPModifyForwardDirectionInput");

	AMantis_Character_BP_C_BPModifyForwardDirectionInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (directionInput != nullptr)
		*directionInput = params.directionInput;

	return params.ReturnValue;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.BPTimerNonDedicated
// ()

void AMantis_Character_BP_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.BPTimerNonDedicated");

	AMantis_Character_BP_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.Update Mantis State
// ()

void AMantis_Character_BP_C::Update_Mantis_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.Update Mantis State");

	AMantis_Character_BP_C_Update_Mantis_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.BPTimerServer
// ()

void AMantis_Character_BP_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.BPTimerServer");

	AMantis_Character_BP_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.BPShouldLimitForwardDirection
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMantis_Character_BP_C::BPShouldLimitForwardDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.BPShouldLimitForwardDirection");

	AMantis_Character_BP_C_BPShouldLimitForwardDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.BPCanNotifyTeamAggroAI
// ()
// Parameters:
// class APrimalDinoCharacter**   Dino                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AMantis_Character_BP_C::BPCanNotifyTeamAggroAI(class APrimalDinoCharacter** Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.BPCanNotifyTeamAggroAI");

	AMantis_Character_BP_C_BPCanNotifyTeamAggroAI_Params params;
	params.Dino = Dino;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.Start Leap Attack
// (NetReliable, NetRequest, NetResponse, NetMulticast, Public, Delegate, HasDefaults, DLLImport)

void AMantis_Character_BP_C::Start_Leap_Attack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.Start Leap Attack");

	AMantis_Character_BP_C_Start_Leap_Attack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.CheckLeapAttackEnd
// (NetRequest, Exec, Native, Event, NetResponse, NetMulticast, Public, Delegate, HasDefaults, DLLImport)

void AMantis_Character_BP_C::CheckLeapAttackEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.CheckLeapAttackEnd");

	AMantis_Character_BP_C_CheckLeapAttackEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintOverrideHarvestDamageType
// ()
// Parameters:
// float                          OutHarvestDamageMultiplier     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* AMantis_Character_BP_C::BlueprintOverrideHarvestDamageType(float* OutHarvestDamageMultiplier)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintOverrideHarvestDamageType");

	AMantis_Character_BP_C_BlueprintOverrideHarvestDamageType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutHarvestDamageMultiplier != nullptr)
		*OutHarvestDamageMultiplier = params.OutHarvestDamageMultiplier;

	return params.ReturnValue;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.BPNotifyBumpedPawn
// ()
// Parameters:
// class APrimalCharacter**       BumpedPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void AMantis_Character_BP_C::BPNotifyBumpedPawn(class APrimalCharacter** BumpedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.BPNotifyBumpedPawn");

	AMantis_Character_BP_C_BPNotifyBumpedPawn_Params params;
	params.BumpedPawn = BumpedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.AddWeaponDamage
// ()
// Parameters:
// float                          OriginalDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OriginalDamageType             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ConsumeWeaponDurability        (Parm, ZeroConstructor, IsPlainOldData)
// float                          OutDamage                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AMantis_Character_BP_C::AddWeaponDamage(float OriginalDamage, class UClass* OriginalDamageType, bool ConsumeWeaponDurability, float* OutDamage, class UClass** OutDamageType)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.AddWeaponDamage");

	AMantis_Character_BP_C_AddWeaponDamage_Params params;
	params.OriginalDamage = OriginalDamage;
	params.OriginalDamageType = OriginalDamageType;
	params.ConsumeWeaponDurability = ConsumeWeaponDurability;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDamage != nullptr)
		*OutDamage = params.OutDamage;
	if (OutDamageType != nullptr)
		*OutDamageType = params.OutDamageType;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.OnRep_bDoingLeapAttack
// ()

void AMantis_Character_BP_C::OnRep_bDoingLeapAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.OnRep_bDoingLeapAttack");

	AMantis_Character_BP_C_OnRep_bDoingLeapAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.FinishLeapAttack
// ()

void AMantis_Character_BP_C::FinishLeapAttack()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.FinishLeapAttack");

	AMantis_Character_BP_C_FinishLeapAttack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.OnLanded
// ()
// Parameters:
// struct FHitResult              Hit                            (Parm, OutParm, ReferenceParm)

void AMantis_Character_BP_C::OnLanded(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.OnLanded");

	AMantis_Character_BP_C_OnLanded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Hit != nullptr)
		*Hit = params.Hit;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** meshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AMantis_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** meshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AMantis_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.meshComp = meshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintAdjustOutputDamage
// (NetReliable, MulticastDelegate, Private, Protected, Delegate, NetServer, HasOutParms, DLLImport)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AMantis_Character_BP_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.BlueprintAdjustOutputDamage");

	AMantis_Character_BP_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Mantis_Character_BP.Mantis_Character_BP_C.UserConstructionScript
// ()

void AMantis_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.UserConstructionScript");

	AMantis_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.PlayLeapAttackHitFX
// ()

void AMantis_Character_BP_C::PlayLeapAttackHitFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.PlayLeapAttackHitFX");

	AMantis_Character_BP_C_PlayLeapAttackHitFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void AMantis_Character_BP_C::BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature");

	AMantis_Character_BP_C_BndEvt__AttackCheckSphere_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Mantis_Character_BP.Mantis_Character_BP_C.ReceiveBeginPlay
// ()

void AMantis_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.ReceiveBeginPlay");

	AMantis_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.MulticastApplyLeapDownForce
// ()

void AMantis_Character_BP_C::MulticastApplyLeapDownForce()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.MulticastApplyLeapDownForce");

	AMantis_Character_BP_C_MulticastApplyLeapDownForce_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.StartLeapLoopSound
// ()

void AMantis_Character_BP_C::StartLeapLoopSound()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.StartLeapLoopSound");

	AMantis_Character_BP_C_StartLeapLoopSound_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.AnimNotify_CycleWeights
// ()

void AMantis_Character_BP_C::AnimNotify_CycleWeights()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.AnimNotify_CycleWeights");

	AMantis_Character_BP_C_AnimNotify_CycleWeights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.AnimNotify_GroundLanding
// ()

void AMantis_Character_BP_C::AnimNotify_GroundLanding()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.AnimNotify_GroundLanding");

	AMantis_Character_BP_C_AnimNotify_GroundLanding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mantis_Character_BP.Mantis_Character_BP_C.ExecuteUbergraph_Mantis_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMantis_Character_BP_C::ExecuteUbergraph_Mantis_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mantis_Character_BP.Mantis_Character_BP_C.ExecuteUbergraph_Mantis_Character_BP");

	AMantis_Character_BP_C_ExecuteUbergraph_Mantis_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
