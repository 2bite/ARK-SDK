// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Female_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPTimerNonDedicated
// ()

void AXenomorph_Character_BP_Female_C::BPTimerNonDedicated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPTimerNonDedicated");

	AXenomorph_Character_BP_Female_C_BPTimerNonDedicated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.HasBuffsOfClasses
// ()
// Parameters:
// class APrimalCharacter*        Target                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          ParentClassesArray             (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_Female_C::HasBuffsOfClasses(class APrimalCharacter* Target, TArray<class UClass*>* ParentClassesArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.HasBuffsOfClasses");

	AXenomorph_Character_BP_Female_C_HasBuffsOfClasses_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ParentClassesArray != nullptr)
		*ParentClassesArray = params.ParentClassesArray;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnateNonPure
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_Female_C::ReadyToImpregnateNonPure()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnateNonPure");

	AXenomorph_Character_BP_Female_C_ReadyToImpregnateNonPure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnate
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_Female_C::ReadyToImpregnate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ReadyToImpregnate");

	AXenomorph_Character_BP_Female_C_ReadyToImpregnate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.GetNewTimeForImpregnate
// (Native, Static, Public, Private, Delegate, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// double                         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

double AXenomorph_Character_BP_Female_C::STATIC_GetNewTimeForImpregnate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.GetNewTimeForImpregnate");

	AXenomorph_Character_BP_Female_C_GetNewTimeForImpregnate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.InitializeDive
// ()

void AXenomorph_Character_BP_Female_C::InitializeDive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.InitializeDive");

	AXenomorph_Character_BP_Female_C_InitializeDive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.OnChargeEvent
// ()

void AXenomorph_Character_BP_Female_C::OnChargeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.OnChargeEvent");

	AXenomorph_Character_BP_Female_C_OnChargeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AXenomorph_Character_BP_Female_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPAdjustDamage");

	AXenomorph_Character_BP_Female_C_BPAdjustDamage_Params params;
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


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidClearCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Female_C::BPDidClearCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidClearCarriedCharacter");

	AXenomorph_Character_BP_Female_C_BPDidClearCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BlueprintCanAttack
// (Net, Native, Event, NetResponse, Private, Protected, NetServer, NetClient, DLLImport, BlueprintEvent, BlueprintPure)
// Parameters:
// int*                           AttackIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// float*                         Distance                       (Parm, ZeroConstructor, IsPlainOldData)
// float*                         attackRangeOffset              (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 OtherTarget                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AXenomorph_Character_BP_Female_C::BlueprintCanAttack(int* AttackIndex, float* Distance, float* attackRangeOffset, class AActor** OtherTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BlueprintCanAttack");

	AXenomorph_Character_BP_Female_C_BlueprintCanAttack_Params params;
	params.AttackIndex = AttackIndex;
	params.Distance = Distance;
	params.attackRangeOffset = attackRangeOffset;
	params.OtherTarget = OtherTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidSetCarriedCharacter
// ()
// Parameters:
// class APrimalCharacter**       PreviousCarriedCharacter       (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Female_C::BPDidSetCarriedCharacter(class APrimalCharacter** PreviousCarriedCharacter)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.BPDidSetCarriedCharacter");

	AXenomorph_Character_BP_Female_C_BPDidSetCarriedCharacter_Params params;
	params.PreviousCarriedCharacter = PreviousCarriedCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.DisableEyeGlow
// ()

void AXenomorph_Character_BP_Female_C::DisableEyeGlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.DisableEyeGlow");

	AXenomorph_Character_BP_Female_C_DisableEyeGlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.UserConstructionScript
// ()

void AXenomorph_Character_BP_Female_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.UserConstructionScript");

	AXenomorph_Character_BP_Female_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_EndBury
// ()

void AXenomorph_Character_BP_Female_C::AnimNotify_EndBury()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_EndBury");

	AXenomorph_Character_BP_Female_C_AnimNotify_EndBury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_CheckForGrab
// ()

void AXenomorph_Character_BP_Female_C::AnimNotify_CheckForGrab()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_CheckForGrab");

	AXenomorph_Character_BP_Female_C_AnimNotify_CheckForGrab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_Impregnate
// ()

void AXenomorph_Character_BP_Female_C::AnimNotify_Impregnate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_Impregnate");

	AXenomorph_Character_BP_Female_C_AnimNotify_Impregnate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ImpregnateStart
// ()

void AXenomorph_Character_BP_Female_C::ImpregnateStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ImpregnateStart");

	AXenomorph_Character_BP_Female_C_ImpregnateStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_StartBury
// ()

void AXenomorph_Character_BP_Female_C::AnimNotify_StartBury()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_StartBury");

	AXenomorph_Character_BP_Female_C_AnimNotify_StartBury_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_ImpregnateRelease
// ()

void AXenomorph_Character_BP_Female_C::AnimNotify_ImpregnateRelease()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.AnimNotify_ImpregnateRelease");

	AXenomorph_Character_BP_Female_C_AnimNotify_ImpregnateRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ExecuteUbergraph_Xenomorph_Character_BP_Female
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AXenomorph_Character_BP_Female_C::ExecuteUbergraph_Xenomorph_Character_BP_Female(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xenomorph_Character_BP_Female.Xenomorph_Character_BP_Female_C.ExecuteUbergraph_Xenomorph_Character_BP_Female");

	AXenomorph_Character_BP_Female_C_ExecuteUbergraph_Xenomorph_Character_BP_Female_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
