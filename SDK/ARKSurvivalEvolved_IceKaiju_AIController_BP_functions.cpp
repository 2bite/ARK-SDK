// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IceKaiju_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.StartTorpid
// ()

void AIceKaiju_AIController_BP_C::StartTorpid()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.StartTorpid");

	AIceKaiju_AIController_BP_C_StartTorpid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.BPSetupFindTarget
// ()

void AIceKaiju_AIController_BP_C::BPSetupFindTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.BPSetupFindTarget");

	AIceKaiju_AIController_BP_C_BPSetupFindTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AIceKaiju_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.BPGetTargetingDesire");

	AIceKaiju_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.UserConstructionScript
// ()

void AIceKaiju_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.UserConstructionScript");

	AIceKaiju_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.ExecuteUbergraph_IceKaiju_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AIceKaiju_AIController_BP_C::ExecuteUbergraph_IceKaiju_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IceKaiju_AIController_BP.IceKaiju_AIController_BP_C.ExecuteUbergraph_IceKaiju_AIController_BP");

	AIceKaiju_AIController_BP_C_ExecuteUbergraph_IceKaiju_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
