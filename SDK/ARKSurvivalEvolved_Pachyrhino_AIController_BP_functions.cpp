// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pachyrhino_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.BPOnFleeEvent
// ()

void APachyrhino_AIController_BP_C::BPOnFleeEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.BPOnFleeEvent");

	APachyrhino_AIController_BP_C_BPOnFleeEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.UserConstructionScript
// ()

void APachyrhino_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.UserConstructionScript");

	APachyrhino_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ClearAggroAfterTime
// ()
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  targetWhenCalled               (Parm, ZeroConstructor, IsPlainOldData)

void APachyrhino_AIController_BP_C::ClearAggroAfterTime(float Time, class AActor* targetWhenCalled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ClearAggroAfterTime");

	APachyrhino_AIController_BP_C_ClearAggroAfterTime_Params params;
	params.Time = Time;
	params.targetWhenCalled = targetWhenCalled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ExecuteUbergraph_Pachyrhino_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APachyrhino_AIController_BP_C::ExecuteUbergraph_Pachyrhino_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pachyrhino_AIController_BP.Pachyrhino_AIController_BP_C.ExecuteUbergraph_Pachyrhino_AIController_BP");

	APachyrhino_AIController_BP_C_ExecuteUbergraph_Pachyrhino_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
