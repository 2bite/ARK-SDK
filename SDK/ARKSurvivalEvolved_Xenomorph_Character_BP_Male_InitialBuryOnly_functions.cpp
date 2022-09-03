// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_InitialBuryOnly_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BlueprintAdjustOutputDamage
// (NetReliable, NetRequest, Native, NetResponse, NetMulticast, MulticastDelegate, Public, NetServer, HasOutParms, HasDefaults, NetClient, BlueprintCallable, BlueprintEvent, Const, NetValidate)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         OriginalDamageAmount           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 HitActor                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  OutDamageType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          OutDamageImpulse               (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXenomorph_Character_BP_Male_InitialBuryOnly_C::BlueprintAdjustOutputDamage(int* AttackIndex, float* OriginalDamageAmount, class AActor** HitActor, class UClass** OutDamageType, float* OutDamageImpulse)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BlueprintAdjustOutputDamage");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_BlueprintAdjustOutputDamage_Params params;
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


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.KillSelf
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::KillSelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.KillSelf");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_KillSelf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BP_OnSetDeath
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::BP_OnSetDeath()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BP_OnSetDeath");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_BP_OnSetDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.InitializeDive
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::InitializeDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.InitializeDive");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_InitializeDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.SetupStaticBaby
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::SetupStaticBaby()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.SetupStaticBaby");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_SetupStaticBaby_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UpdateBuryMound
// ()
// Parameters:
// bool*                          ShouldShow                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::UpdateBuryMound(bool* ShouldShow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UpdateBuryMound");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_UpdateBuryMound_Params params;
	params.ShouldShow = ShouldShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.GetDefaultXeno
// ()
// Parameters:
// class APrimalDinoCharacter*    Dino                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::GetDefaultXeno(class APrimalDinoCharacter** Dino)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.GetDefaultXeno");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_GetDefaultXeno_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Dino != nullptr)
		*Dino = params.Dino;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPUnstasis
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::BPUnstasis()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPUnstasis");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPUnstasis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UpdateAttackDestOffset
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::UpdateAttackDestOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UpdateAttackDestOffset");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_UpdateAttackDestOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXenomorph_Character_BP_Male_InitialBuryOnly_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPAdjustDamage");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPAdjustDamage_Params params;
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


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPTimerServer
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::BPTimerServer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPTimerServer");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPTimerServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UserConstructionScript
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.UserConstructionScript");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ReceiveBeginPlay
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ReceiveBeginPlay");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPDinoPostBeginPlay
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::BPDinoPostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.BPDinoPostBeginPlay");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_BPDinoPostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.AttemptDiveOut
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::AttemptDiveOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.AttemptDiveOut");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_AttemptDiveOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ForceDiveEnd
// ()

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::ForceDiveEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ForceDiveEnd");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_ForceDiveEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Male_InitialBuryOnly_C::ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Male_InitialBuryOnly.Xenomorph_Character_BP_Male_InitialBuryOnly_C.ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly");

	AXenomorph_Character_BP_Male_InitialBuryOnly_C_ExecuteUbergraph_Xenomorph_Character_BP_Male_InitialBuryOnly_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
