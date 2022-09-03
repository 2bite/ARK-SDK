// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MekEmitter_SwarmMissile_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C.UserConstructionScript
// ()

void AMekEmitter_SwarmMissile_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C.UserConstructionScript");

	AMekEmitter_SwarmMissile_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C.ExecuteUbergraph_MekEmitter_SwarmMissile
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMekEmitter_SwarmMissile_C::ExecuteUbergraph_MekEmitter_SwarmMissile(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C.ExecuteUbergraph_MekEmitter_SwarmMissile");

	AMekEmitter_SwarmMissile_C_ExecuteUbergraph_MekEmitter_SwarmMissile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
