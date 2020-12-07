// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndDrone_AIController_BP_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AEndDrone_AIController_BP_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.BPGetTargetingDesire");

	AEndDrone_AIController_BP_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.UserConstructionScript
// ()

void AEndDrone_AIController_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.UserConstructionScript");

	AEndDrone_AIController_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.ReceiveBeginPlay
// ()

void AEndDrone_AIController_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.ReceiveBeginPlay");

	AEndDrone_AIController_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.ExecuteUbergraph_EndDrone_AIController_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndDrone_AIController_BP_C::ExecuteUbergraph_EndDrone_AIController_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndDrone_AIController_BP.EndDrone_AIController_BP_C.ExecuteUbergraph_EndDrone_AIController_BP");

	AEndDrone_AIController_BP_C_ExecuteUbergraph_EndDrone_AIController_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
