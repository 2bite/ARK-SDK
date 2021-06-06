// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Structure_TrainingDummy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Structure_TrainingDummy.Structure_TrainingDummy_C.TimedReportDPS
// ()

void AStructure_TrainingDummy_C::TimedReportDPS()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.TimedReportDPS");

	AStructure_TrainingDummy_C_TimedReportDPS_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPPlacedStructure
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TrainingDummy_C::BPPlacedStructure(class APlayerController** ForPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPPlacedStructure");

	AStructure_TrainingDummy_C_BPPlacedStructure_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.RemoveSnapshot
// ()

void AStructure_TrainingDummy_C::RemoveSnapshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.RemoveSnapshot");

	AStructure_TrainingDummy_C_RemoveSnapshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.ApplySnapshot
// ()
// Parameters:
// class UPrimalItem**            Snapshot                       (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TrainingDummy_C::ApplySnapshot(class UPrimalItem** Snapshot)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.ApplySnapshot");

	AStructure_TrainingDummy_C_ApplySnapshot_Params params;
	params.Snapshot = Snapshot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPGetMultiUseCenterText
// (NetRequest, NetMulticast, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class FString                  OutCenterText                  (Parm, OutParm, ZeroConstructor)
// struct FLinearColor            OutCenterTextColor             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_TrainingDummy_C::BPGetMultiUseCenterText(class APlayerController** ForPC, int* UseIndex, class FString* OutCenterText, struct FLinearColor* OutCenterTextColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPGetMultiUseCenterText");

	AStructure_TrainingDummy_C_BPGetMultiUseCenterText_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCenterText != nullptr)
		*OutCenterText = params.OutCenterText;
	if (OutCenterTextColor != nullptr)
		*OutCenterTextColor = params.OutCenterTextColor;

	return params.ReturnValue;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPTryMultiUse
// ()
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// int*                           UseIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AStructure_TrainingDummy_C::BPTryMultiUse(class APlayerController** ForPC, int* UseIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPTryMultiUse");

	AStructure_TrainingDummy_C_BPTryMultiUse_Params params;
	params.ForPC = ForPC;
	params.UseIndex = UseIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPGetMultiUseEntries
// (NetReliable, Exec, Native, Private, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController**      ForPC                          (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FMultiUseEntry>  MultiUseEntries                (Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FMultiUseEntry>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FMultiUseEntry> AStructure_TrainingDummy_C::BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPGetMultiUseEntries");

	AStructure_TrainingDummy_C_BPGetMultiUseEntries_Params params;
	params.ForPC = ForPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MultiUseEntries != nullptr)
		*MultiUseEntries = params.MultiUseEntries;

	return params.ReturnValue;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.ReportDPS
// (Net, NetReliable, Exec, Native, NetMulticast, Public, Protected, HasOutParms, HasDefaults, DLLImport, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReportTime                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TrainingDummy_C::ReportDPS(float ReportTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.ReportDPS");

	AStructure_TrainingDummy_C_ReportDPS_Params params;
	params.ReportTime = ReportTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPAdjustDamage
// ()
// Parameters:
// float*                         IncomingDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageEvent*           TheDamageEvent                 (Parm)
// class AController**            EventInstigator                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          bIsPointDamage                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             PointHitInfo                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AStructure_TrainingDummy_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.BPAdjustDamage");

	AStructure_TrainingDummy_C_BPAdjustDamage_Params params;
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


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.UserConstructionScript
// ()

void AStructure_TrainingDummy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.UserConstructionScript");

	AStructure_TrainingDummy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Structure_TrainingDummy.Structure_TrainingDummy_C.ExecuteUbergraph_Structure_TrainingDummy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStructure_TrainingDummy_C::ExecuteUbergraph_Structure_TrainingDummy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Structure_TrainingDummy.Structure_TrainingDummy_C.ExecuteUbergraph_Structure_TrainingDummy");

	AStructure_TrainingDummy_C_ExecuteUbergraph_Structure_TrainingDummy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
