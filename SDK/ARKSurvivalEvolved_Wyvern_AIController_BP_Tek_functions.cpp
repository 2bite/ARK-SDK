// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_AIController_BP_Tek_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.BPGetTargetingDesire
// ()
// Parameters:
// class AActor**                 forTarget                      (Parm, ZeroConstructor, IsPlainOldData)
// float*                         ForTargetingDesireValue        (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float AWyvern_AIController_BP_Tek_C::BPGetTargetingDesire(class AActor** forTarget, float* ForTargetingDesireValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.BPGetTargetingDesire");

	AWyvern_AIController_BP_Tek_C_BPGetTargetingDesire_Params params;
	params.forTarget = forTarget;
	params.ForTargetingDesireValue = ForTargetingDesireValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.UserConstructionScript
// ()

void AWyvern_AIController_BP_Tek_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.UserConstructionScript");

	AWyvern_AIController_BP_Tek_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.ExecuteUbergraph_Wyvern_AIController_BP_Tek
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_AIController_BP_Tek_C::ExecuteUbergraph_Wyvern_AIController_BP_Tek(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_AIController_BP_Tek.Wyvern_AIController_BP_Tek_C.ExecuteUbergraph_Wyvern_AIController_BP_Tek");

	AWyvern_AIController_BP_Tek_C_ExecuteUbergraph_Wyvern_AIController_BP_Tek_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
