// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossGorilla_Character_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.BlueprintAnimNotifyCustomEvent
// ()
// Parameters:
// struct FName*                  CustomEventName                (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent** MeshComp                       (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (Parm, ZeroConstructor, IsPlainOldData)
// class UAnimNotify**            AnimNotifyObject               (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void AEndBossGorilla_Character_BP_C::BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.BlueprintAnimNotifyCustomEvent");

	AEndBossGorilla_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params params;
	params.CustomEventName = CustomEventName;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.AnimNotifyObject = AnimNotifyObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEndBossGorilla_Character_BP_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.BPAdjustDamage");

	AEndBossGorilla_Character_BP_C_BPAdjustDamage_Params params;
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


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.UserConstructionScript
// ()

void AEndBossGorilla_Character_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.UserConstructionScript");

	AEndBossGorilla_Character_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_0__FinishedFunc
// ()

void AEndBossGorilla_Character_BP_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_0__FinishedFunc");

	AEndBossGorilla_Character_BP_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_0__UpdateFunc
// ()

void AEndBossGorilla_Character_BP_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_0__UpdateFunc");

	AEndBossGorilla_Character_BP_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_1__FinishedFunc
// ()

void AEndBossGorilla_Character_BP_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_1__FinishedFunc");

	AEndBossGorilla_Character_BP_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_1__UpdateFunc
// ()

void AEndBossGorilla_Character_BP_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.Timeline_1__UpdateFunc");

	AEndBossGorilla_Character_BP_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.StartRipple
// ()

void AEndBossGorilla_Character_BP_C::StartRipple()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.StartRipple");

	AEndBossGorilla_Character_BP_C_StartRipple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.OnDied_Event
// ()
// Parameters:
// class APrimalCharacter*        DiedCharacter                  (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossGorilla_Character_BP_C::OnDied_Event(class APrimalCharacter* DiedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.OnDied_Event");

	AEndBossGorilla_Character_BP_C_OnDied_Event_Params params;
	params.DiedCharacter = DiedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.StartPulse
// ()

void AEndBossGorilla_Character_BP_C::StartPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.StartPulse");

	AEndBossGorilla_Character_BP_C_StartPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.ReceiveBeginPlay
// ()

void AEndBossGorilla_Character_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.ReceiveBeginPlay");

	AEndBossGorilla_Character_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.ExecuteUbergraph_EndBossGorilla_Character_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossGorilla_Character_BP_C::ExecuteUbergraph_EndBossGorilla_Character_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP.EndBossGorilla_Character_BP_C.ExecuteUbergraph_EndBossGorilla_Character_BP");

	AEndBossGorilla_Character_BP_C_ExecuteUbergraph_EndBossGorilla_Character_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
