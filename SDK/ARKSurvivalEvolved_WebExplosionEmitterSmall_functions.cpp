// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WebExplosionEmitterSmall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WebExplosionEmitterSmall.WebExplosionEmitterSmall_C.UserConstructionScript
// ()

void AWebExplosionEmitterSmall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WebExplosionEmitterSmall.WebExplosionEmitterSmall_C.UserConstructionScript");

	AWebExplosionEmitterSmall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WebExplosionEmitterSmall.WebExplosionEmitterSmall_C.ExecuteUbergraph_WebExplosionEmitterSmall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWebExplosionEmitterSmall_C::ExecuteUbergraph_WebExplosionEmitterSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WebExplosionEmitterSmall.WebExplosionEmitterSmall_C.ExecuteUbergraph_WebExplosionEmitterSmall");

	AWebExplosionEmitterSmall_C_ExecuteUbergraph_WebExplosionEmitterSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
