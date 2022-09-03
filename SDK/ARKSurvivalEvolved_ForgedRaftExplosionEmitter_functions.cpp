// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForgedRaftExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ForgedRaftExplosionEmitter.ForgedRaftExplosionEmitter_C.UserConstructionScript
// ()

void AForgedRaftExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgedRaftExplosionEmitter.ForgedRaftExplosionEmitter_C.UserConstructionScript");

	AForgedRaftExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ForgedRaftExplosionEmitter.ForgedRaftExplosionEmitter_C.ExecuteUbergraph_ForgedRaftExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AForgedRaftExplosionEmitter_C::ExecuteUbergraph_ForgedRaftExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ForgedRaftExplosionEmitter.ForgedRaftExplosionEmitter_C.ExecuteUbergraph_ForgedRaftExplosionEmitter");

	AForgedRaftExplosionEmitter_C_ExecuteUbergraph_ForgedRaftExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
