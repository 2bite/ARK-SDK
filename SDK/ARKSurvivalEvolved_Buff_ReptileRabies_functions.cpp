// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ReptileRabies_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_ReptileRabies.Buff_ReptileRabies_C.BuffTickServer
// ()
// Parameters:
// float*                         DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ReptileRabies_C::BuffTickServer(float* DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.BuffTickServer");

	ABuff_ReptileRabies_C_BuffTickServer_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ReptileRabies.Buff_ReptileRabies_C.BPCustomAllowAddBuff
// ()
// Parameters:
// class APrimalCharacter**       forCharacter                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuff_ReptileRabies_C::BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.BPCustomAllowAddBuff");

	ABuff_ReptileRabies_C_BPCustomAllowAddBuff_Params params;
	params.forCharacter = forCharacter;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Buff_ReptileRabies.Buff_ReptileRabies_C.TryApplyDisease
// ()
// Parameters:
// class APrimalCharacter*        TheTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          InfectChance                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ReptileRabies_C::TryApplyDisease(class APrimalCharacter* TheTarget, float InfectChance)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.TryApplyDisease");

	ABuff_ReptileRabies_C_TryApplyDisease_Params params;
	params.TheTarget = TheTarget;
	params.InfectChance = InfectChance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ReptileRabies.Buff_ReptileRabies_C.AllowContagionTarget
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAllow                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABuff_ReptileRabies_C::AllowContagionTarget(class AActor* Target, bool* bAllow)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.AllowContagionTarget");

	ABuff_ReptileRabies_C_AllowContagionTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bAllow != nullptr)
		*bAllow = params.bAllow;
}


// Function Buff_ReptileRabies.Buff_ReptileRabies_C.BPSetupForInstigator
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ReptileRabies_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.BPSetupForInstigator");

	ABuff_ReptileRabies_C_BPSetupForInstigator_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ReptileRabies.Buff_ReptileRabies_C.Cough
// ()

void ABuff_ReptileRabies_C::Cough()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.Cough");

	ABuff_ReptileRabies_C_Cough_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ReptileRabies.Buff_ReptileRabies_C.NotifyBumpedPawn
// ()
// Parameters:
// class APrimalCharacter**       BumpedPawn                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ReptileRabies_C::NotifyBumpedPawn(class APrimalCharacter** BumpedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.NotifyBumpedPawn");

	ABuff_ReptileRabies_C_NotifyBumpedPawn_Params params;
	params.BumpedPawn = BumpedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ReptileRabies.Buff_ReptileRabies_C.NotifyBumpedByPawn
// ()
// Parameters:
// class APrimalCharacter**       BumpedBy                       (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ReptileRabies_C::NotifyBumpedByPawn(class APrimalCharacter** BumpedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.NotifyBumpedByPawn");

	ABuff_ReptileRabies_C_NotifyBumpedByPawn_Params params;
	params.BumpedBy = BumpedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ReptileRabies.Buff_ReptileRabies_C.UserConstructionScript
// ()

void ABuff_ReptileRabies_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.UserConstructionScript");

	ABuff_ReptileRabies_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_ReptileRabies.Buff_ReptileRabies_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature
// ()
// Parameters:
// class AActor*                  OtherActor                     (Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (Parm, OutParm, ReferenceParm)

void ABuff_ReptileRabies_C::BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature");

	ABuff_ReptileRabies_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_6_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function Buff_ReptileRabies.Buff_ReptileRabies_C.ExecuteUbergraph_Buff_ReptileRabies
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_ReptileRabies_C::ExecuteUbergraph_Buff_ReptileRabies(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_ReptileRabies.Buff_ReptileRabies_C.ExecuteUbergraph_Buff_ReptileRabies");

	ABuff_ReptileRabies_C_ExecuteUbergraph_Buff_ReptileRabies_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
