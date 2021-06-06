// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_JunctionSparksEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function JunctionSparksEmitter.JunctionSparksEmitter_C.UserConstructionScript
// ()

void AJunctionSparksEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function JunctionSparksEmitter.JunctionSparksEmitter_C.UserConstructionScript");

	AJunctionSparksEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function JunctionSparksEmitter.JunctionSparksEmitter_C.ExecuteUbergraph_JunctionSparksEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AJunctionSparksEmitter_C::ExecuteUbergraph_JunctionSparksEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function JunctionSparksEmitter.JunctionSparksEmitter_C.ExecuteUbergraph_JunctionSparksEmitter");

	AJunctionSparksEmitter_C_ExecuteUbergraph_JunctionSparksEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
