// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MekEmitter_SwarmExplosion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C.UserConstructionScript
// ()

void AMekEmitter_SwarmExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C.UserConstructionScript");

	AMekEmitter_SwarmExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C.ExecuteUbergraph_MekEmitter_SwarmExplosion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMekEmitter_SwarmExplosion_C::ExecuteUbergraph_MekEmitter_SwarmExplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C.ExecuteUbergraph_MekEmitter_SwarmExplosion");

	AMekEmitter_SwarmExplosion_C_ExecuteUbergraph_MekEmitter_SwarmExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
