// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRocketHomingMissile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveTick
// ()
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjRocketHomingMissile_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveTick");

	AProjRocketHomingMissile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.IsTargetAlive
// ()
// Parameters:
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjRocketHomingMissile_C::IsTargetAlive(bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.IsTargetAlive");

	AProjRocketHomingMissile_C_IsTargetAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.UserConstructionScript
// ()

void AProjRocketHomingMissile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.UserConstructionScript");

	AProjRocketHomingMissile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__FinishedFunc
// ()

void AProjRocketHomingMissile_C::HomingBeep_Timeline__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__FinishedFunc");

	AProjRocketHomingMissile_C_HomingBeep_Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__UpdateFunc
// ()

void AProjRocketHomingMissile_C::HomingBeep_Timeline__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__UpdateFunc");

	AProjRocketHomingMissile_C_HomingBeep_Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__Beep__EventFunc
// ()

void AProjRocketHomingMissile_C::HomingBeep_Timeline__Beep__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__Beep__EventFunc");

	AProjRocketHomingMissile_C_HomingBeep_Timeline__Beep__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveBeginPlay
// ()

void AProjRocketHomingMissile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveBeginPlay");

	AProjRocketHomingMissile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.CheckDistToTarget
// ()

void AProjRocketHomingMissile_C::CheckDistToTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.CheckDistToTarget");

	AProjRocketHomingMissile_C_CheckDistToTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ExecuteUbergraph_ProjRocketHomingMissile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjRocketHomingMissile_C::ExecuteUbergraph_ProjRocketHomingMissile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ExecuteUbergraph_ProjRocketHomingMissile");

	AProjRocketHomingMissile_C_ExecuteUbergraph_ProjRocketHomingMissile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
