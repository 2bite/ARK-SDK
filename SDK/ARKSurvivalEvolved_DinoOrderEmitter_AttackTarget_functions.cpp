// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoOrderEmitter_AttackTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoOrderEmitter_AttackTarget.DinoOrderEmitter_AttackTarget_C.UserConstructionScript
// ()

void ADinoOrderEmitter_AttackTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoOrderEmitter_AttackTarget.DinoOrderEmitter_AttackTarget_C.UserConstructionScript");

	ADinoOrderEmitter_AttackTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoOrderEmitter_AttackTarget.DinoOrderEmitter_AttackTarget_C.ExecuteUbergraph_DinoOrderEmitter_AttackTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinoOrderEmitter_AttackTarget_C::ExecuteUbergraph_DinoOrderEmitter_AttackTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoOrderEmitter_AttackTarget.DinoOrderEmitter_AttackTarget_C.ExecuteUbergraph_DinoOrderEmitter_AttackTarget");

	ADinoOrderEmitter_AttackTarget_C_ExecuteUbergraph_DinoOrderEmitter_AttackTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
