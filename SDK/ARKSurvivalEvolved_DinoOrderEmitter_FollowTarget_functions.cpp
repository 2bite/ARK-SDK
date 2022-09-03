// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoOrderEmitter_FollowTarget_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C.UserConstructionScript
// ()

void ADinoOrderEmitter_FollowTarget_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C.UserConstructionScript");

	ADinoOrderEmitter_FollowTarget_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C.ExecuteUbergraph_DinoOrderEmitter_FollowTarget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADinoOrderEmitter_FollowTarget_C::ExecuteUbergraph_DinoOrderEmitter_FollowTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoOrderEmitter_FollowTarget.DinoOrderEmitter_FollowTarget_C.ExecuteUbergraph_DinoOrderEmitter_FollowTarget");

	ADinoOrderEmitter_FollowTarget_C_ExecuteUbergraph_DinoOrderEmitter_FollowTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
