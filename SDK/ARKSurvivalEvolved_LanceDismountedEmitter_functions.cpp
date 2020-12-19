// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LanceDismountedEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LanceDismountedEmitter.LanceDismountedEmitter_C.UserConstructionScript
// ()

void ALanceDismountedEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LanceDismountedEmitter.LanceDismountedEmitter_C.UserConstructionScript");

	ALanceDismountedEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LanceDismountedEmitter.LanceDismountedEmitter_C.ExecuteUbergraph_LanceDismountedEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALanceDismountedEmitter_C::ExecuteUbergraph_LanceDismountedEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LanceDismountedEmitter.LanceDismountedEmitter_C.ExecuteUbergraph_LanceDismountedEmitter");

	ALanceDismountedEmitter_C_ExecuteUbergraph_LanceDismountedEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
