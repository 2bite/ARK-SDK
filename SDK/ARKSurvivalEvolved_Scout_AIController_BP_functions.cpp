// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Scout_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Scout_AIController_BP.Scout_AIController_BP_C.IsTargetIsAimedAtScout
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::IsTargetIsAimedAtScout(class AActor* Target, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.IsTargetIsAimedAtScout");

	AScout_AIController_BP_C_IsTargetIsAimedAtScout_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.ComputeStatModifierFromTargetDistance
// ()
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::ComputeStatModifierFromTargetDistance(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.ComputeStatModifierFromTargetDistance");

	AScout_AIController_BP_C_ComputeStatModifierFromTargetDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.GetDistanceToTarget
// ()
// Parameters:
// float                          Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::GetDistanceToTarget(float* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.GetDistanceToTarget");

	AScout_AIController_BP_C_GetDistanceToTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.GetCustomModifierRotationRate
// ()
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::GetCustomModifierRotationRate(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.GetCustomModifierRotationRate");

	AScout_AIController_BP_C_GetCustomModifierRotationRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.GetCustomModifierMaxSpeed
// ()
// Parameters:
// float                          Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::GetCustomModifierMaxSpeed(float* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.GetCustomModifierMaxSpeed");

	AScout_AIController_BP_C_GetCustomModifierMaxSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.ScoutDamaged
// ()
// Parameters:
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::ScoutDamaged(class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.ScoutDamaged");

	AScout_AIController_BP_C_ScoutDamaged_Params params;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.ScoutSetTarget
// ()
// Parameters:
// class AActor*                  Target                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            InitialAggressionWeight        (Parm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::ScoutSetTarget(class AActor* Target, int InitialAggressionWeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.ScoutSetTarget");

	AScout_AIController_BP_C_ScoutSetTarget_Params params;
	params.Target = Target;
	params.InitialAggressionWeight = InitialAggressionWeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.CanLaunchTrackerAtTarget
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::CanLaunchTrackerAtTarget(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.CanLaunchTrackerAtTarget");

	AScout_AIController_BP_C_CanLaunchTrackerAtTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.DropTarget
// ()

void AScout_AIController_BP_C::DropTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.DropTarget");

	AScout_AIController_BP_C_DropTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.GetScout
// ()
// Parameters:
// class AScout_Character_BP_C*   Scout                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::GetScout(class AScout_Character_BP_C** Scout)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.GetScout");

	AScout_AIController_BP_C_GetScout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scout != nullptr)
		*Scout = params.Scout;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.Get Last Aggression Time
// ()
// Parameters:
// class AActor*                  Actor                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          LastAttackTime                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::Get_Last_Aggression_Time(class AActor* Actor, float* LastAttackTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.Get Last Aggression Time");

	AScout_AIController_BP_C_Get_Last_Aggression_Time_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastAttackTime != nullptr)
		*LastAttackTime = params.LastAttackTime;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.BPSetupFindTarget
// ()

void AScout_AIController_BP_C::BPSetupFindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.BPSetupFindTarget");

	AScout_AIController_BP_C_BPSetupFindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AScout_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.BPGetTargetingDesire");

	AScout_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.UserConstructionScript
// ()

void AScout_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.UserConstructionScript");

	AScout_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.ReceiveTick");

	AScout_AIController_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.FindAggressors
// ()

void AScout_AIController_BP_C::FindAggressors()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.FindAggressors");

	AScout_AIController_BP_C_FindAggressors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.ReceiveBeginPlay
// ()

void AScout_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.ReceiveBeginPlay");

	AScout_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.ResumeFollowTarget
// ()

void AScout_AIController_BP_C::ResumeFollowTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.ResumeFollowTarget");

	AScout_AIController_BP_C_ResumeFollowTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Scout_AIController_BP.Scout_AIController_BP_C.ExecuteUbergraph_Scout_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AScout_AIController_BP_C::ExecuteUbergraph_Scout_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scout_AIController_BP.Scout_AIController_BP_C.ExecuteUbergraph_Scout_AIController_BP");

	AScout_AIController_BP_C_ExecuteUbergraph_Scout_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
