// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GasVeinExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GasVeinExplosionEmitter.GasVeinExplosionEmitter_C.UserConstructionScript
// ()

void AGasVeinExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GasVeinExplosionEmitter.GasVeinExplosionEmitter_C.UserConstructionScript");

	AGasVeinExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GasVeinExplosionEmitter.GasVeinExplosionEmitter_C.ExecuteUbergraph_GasVeinExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AGasVeinExplosionEmitter_C::ExecuteUbergraph_GasVeinExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GasVeinExplosionEmitter.GasVeinExplosionEmitter_C.ExecuteUbergraph_GasVeinExplosionEmitter");

	AGasVeinExplosionEmitter_C_ExecuteUbergraph_GasVeinExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
