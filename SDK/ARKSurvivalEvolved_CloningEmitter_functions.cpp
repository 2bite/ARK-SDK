// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CloningEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CloningEmitter.CloningEmitter_C.UserConstructionScript
// ()

void ACloningEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CloningEmitter.CloningEmitter_C.UserConstructionScript");

	ACloningEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CloningEmitter.CloningEmitter_C.ExecuteUbergraph_CloningEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACloningEmitter_C::ExecuteUbergraph_CloningEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CloningEmitter.CloningEmitter_C.ExecuteUbergraph_CloningEmitter");

	ACloningEmitter_C_ExecuteUbergraph_CloningEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
