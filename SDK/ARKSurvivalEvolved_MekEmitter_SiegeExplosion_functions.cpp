// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MekEmitter_SiegeExplosion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C.UserConstructionScript
// ()

void AMekEmitter_SiegeExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C.UserConstructionScript");

	AMekEmitter_SiegeExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C.ExecuteUbergraph_MekEmitter_SiegeExplosion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMekEmitter_SiegeExplosion_C::ExecuteUbergraph_MekEmitter_SiegeExplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MekEmitter_SiegeExplosion.MekEmitter_SiegeExplosion_C.ExecuteUbergraph_MekEmitter_SiegeExplosion");

	AMekEmitter_SiegeExplosion_C_ExecuteUbergraph_MekEmitter_SiegeExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
