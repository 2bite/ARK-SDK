// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AirConditionerEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AirConditionerEmitter.AirConditionerEmitter_C.UserConstructionScript
// ()

void AAirConditionerEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AirConditionerEmitter.AirConditionerEmitter_C.UserConstructionScript");

	AAirConditionerEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AirConditionerEmitter.AirConditionerEmitter_C.ExecuteUbergraph_AirConditionerEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAirConditionerEmitter_C::ExecuteUbergraph_AirConditionerEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AirConditionerEmitter.AirConditionerEmitter_C.ExecuteUbergraph_AirConditionerEmitter");

	AAirConditionerEmitter_C_ExecuteUbergraph_AirConditionerEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
