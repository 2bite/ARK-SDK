// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplosionEmitter_Phoenix_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.UserConstructionScript
// ()

void AExplosionEmitter_Phoenix_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.UserConstructionScript");

	AExplosionEmitter_Phoenix_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.ReceiveBeginPlay
// ()

void AExplosionEmitter_Phoenix_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.ReceiveBeginPlay");

	AExplosionEmitter_Phoenix_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.DeTime
// ()

void AExplosionEmitter_Phoenix_C::DeTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.DeTime");

	AExplosionEmitter_Phoenix_C_DeTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.ExecuteUbergraph_ExplosionEmitter_Phoenix
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AExplosionEmitter_Phoenix_C::ExecuteUbergraph_ExplosionEmitter_Phoenix(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ExplosionEmitter_Phoenix.ExplosionEmitter_Phoenix_C.ExecuteUbergraph_ExplosionEmitter_Phoenix");

	AExplosionEmitter_Phoenix_C_ExecuteUbergraph_ExplosionEmitter_Phoenix_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
