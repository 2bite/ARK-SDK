// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Emitter_Exosuit_PunchImpact_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C.UserConstructionScript
// ()

void AEmitter_Exosuit_PunchImpact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C.UserConstructionScript");

	AEmitter_Exosuit_PunchImpact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C.ExecuteUbergraph_Emitter_Exosuit_PunchImpact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_Exosuit_PunchImpact_C::ExecuteUbergraph_Emitter_Exosuit_PunchImpact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_Exosuit_PunchImpact.Emitter_Exosuit_PunchImpact_C.ExecuteUbergraph_Emitter_Exosuit_PunchImpact");

	AEmitter_Exosuit_PunchImpact_C_ExecuteUbergraph_Emitter_Exosuit_PunchImpact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
