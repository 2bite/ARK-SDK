// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Emitter_CanoeSplash_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Emitter_CanoeSplash.Emitter_CanoeSplash_C.UserConstructionScript
// ()

void AEmitter_CanoeSplash_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_CanoeSplash.Emitter_CanoeSplash_C.UserConstructionScript");

	AEmitter_CanoeSplash_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Emitter_CanoeSplash.Emitter_CanoeSplash_C.ExecuteUbergraph_Emitter_CanoeSplash
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEmitter_CanoeSplash_C::ExecuteUbergraph_Emitter_CanoeSplash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Emitter_CanoeSplash.Emitter_CanoeSplash_C.ExecuteUbergraph_Emitter_CanoeSplash");

	AEmitter_CanoeSplash_C_ExecuteUbergraph_Emitter_CanoeSplash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
