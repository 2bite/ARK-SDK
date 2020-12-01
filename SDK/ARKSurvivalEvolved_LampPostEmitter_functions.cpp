// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LampPostEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LampPostEmitter.LampPostEmitter_C.UserConstructionScript
// ()

void ALampPostEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostEmitter.LampPostEmitter_C.UserConstructionScript");

	ALampPostEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LampPostEmitter.LampPostEmitter_C.ExecuteUbergraph_LampPostEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALampPostEmitter_C::ExecuteUbergraph_LampPostEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LampPostEmitter.LampPostEmitter_C.ExecuteUbergraph_LampPostEmitter");

	ALampPostEmitter_C_ExecuteUbergraph_LampPostEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
