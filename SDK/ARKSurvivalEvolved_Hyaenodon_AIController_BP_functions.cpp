// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Hyaenodon_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPUpdateBestTarget
// ()
// Parameters:
// class AActor**                 bestTarget                     (Parm, ZeroConstructor, IsPlainOldData)
// bool*                          dontSetIn                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           dontSetOut                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* AHyaenodon_AIController_BP_C::BPUpdateBestTarget(class AActor** bestTarget, bool* dontSetIn, bool* dontSetOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPUpdateBestTarget");

	AHyaenodon_AIController_BP_C_BPUpdateBestTarget_Params params;
	params.bestTarget = bestTarget;
	params.dontSetIn = dontSetIn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (dontSetOut != nullptr)
		*dontSetOut = params.dontSetOut;

	return params.ReturnValue;
}


// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPSetupFindTarget
// ()

void AHyaenodon_AIController_BP_C::BPSetupFindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPSetupFindTarget");

	AHyaenodon_AIController_BP_C_BPSetupFindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ChangedAITarget
// ()

void AHyaenodon_AIController_BP_C::ChangedAITarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ChangedAITarget");

	AHyaenodon_AIController_BP_C_ChangedAITarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.IsAThinkingHyaenodon
// ()
// Parameters:
// bool                           IsAThinker                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_AIController_BP_C::IsAThinkingHyaenodon(bool* IsAThinker)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.IsAThinkingHyaenodon");

	AHyaenodon_AIController_BP_C_IsAThinkingHyaenodon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAThinker != nullptr)
		*IsAThinker = params.IsAThinker;
}


// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPNotifyTargetSet
// ()

void AHyaenodon_AIController_BP_C::BPNotifyTargetSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPNotifyTargetSet");

	AHyaenodon_AIController_BP_C_BPNotifyTargetSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AHyaenodon_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.BPGetTargetingDesire");

	AHyaenodon_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.UserConstructionScript
// ()

void AHyaenodon_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.UserConstructionScript");

	AHyaenodon_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ReceiveBeginPlay
// ()

void AHyaenodon_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ReceiveBeginPlay");

	AHyaenodon_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ExecuteUbergraph_Hyaenodon_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHyaenodon_AIController_BP_C::ExecuteUbergraph_Hyaenodon_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Hyaenodon_AIController_BP.Hyaenodon_AIController_BP_C.ExecuteUbergraph_Hyaenodon_AIController_BP");

	AHyaenodon_AIController_BP_C_ExecuteUbergraph_Hyaenodon_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
