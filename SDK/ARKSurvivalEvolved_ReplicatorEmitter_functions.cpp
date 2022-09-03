// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ReplicatorEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplicatorEmitter.ReplicatorEmitter_C.UserConstructionScript
// ()

void AReplicatorEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicatorEmitter.ReplicatorEmitter_C.UserConstructionScript");

	AReplicatorEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplicatorEmitter.ReplicatorEmitter_C.ExecuteUbergraph_ReplicatorEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AReplicatorEmitter_C::ExecuteUbergraph_ReplicatorEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ReplicatorEmitter.ReplicatorEmitter_C.ExecuteUbergraph_ReplicatorEmitter");

	AReplicatorEmitter_C_ExecuteUbergraph_ReplicatorEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
