// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SiegeCannonExplosionEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SiegeCannonExplosionEmitter.SiegeCannonExplosionEmitter_C.UserConstructionScript
// ()

void ASiegeCannonExplosionEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SiegeCannonExplosionEmitter.SiegeCannonExplosionEmitter_C.UserConstructionScript");

	ASiegeCannonExplosionEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SiegeCannonExplosionEmitter.SiegeCannonExplosionEmitter_C.ReceiveBeginPlay
// ()

void ASiegeCannonExplosionEmitter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SiegeCannonExplosionEmitter.SiegeCannonExplosionEmitter_C.ReceiveBeginPlay");

	ASiegeCannonExplosionEmitter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SiegeCannonExplosionEmitter.SiegeCannonExplosionEmitter_C.ExecuteUbergraph_SiegeCannonExplosionEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASiegeCannonExplosionEmitter_C::ExecuteUbergraph_SiegeCannonExplosionEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SiegeCannonExplosionEmitter.SiegeCannonExplosionEmitter_C.ExecuteUbergraph_SiegeCannonExplosionEmitter");

	ASiegeCannonExplosionEmitter_C_ExecuteUbergraph_SiegeCannonExplosionEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
