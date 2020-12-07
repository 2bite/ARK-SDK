// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SparksEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SparksEmitter.SparksEmitter_C.UserConstructionScript
// ()

void ASparksEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SparksEmitter.SparksEmitter_C.UserConstructionScript");

	ASparksEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SparksEmitter.SparksEmitter_C.ExecuteUbergraph_SparksEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASparksEmitter_C::ExecuteUbergraph_SparksEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SparksEmitter.SparksEmitter_C.ExecuteUbergraph_SparksEmitter");

	ASparksEmitter_C_ExecuteUbergraph_SparksEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
