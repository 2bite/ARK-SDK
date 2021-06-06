// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhaleBombExplosion_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceWhaleBombExplosion_Emitter.SpaceWhaleBombExplosion_Emitter_C.UserConstructionScript
// ()

void ASpaceWhaleBombExplosion_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleBombExplosion_Emitter.SpaceWhaleBombExplosion_Emitter_C.UserConstructionScript");

	ASpaceWhaleBombExplosion_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhaleBombExplosion_Emitter.SpaceWhaleBombExplosion_Emitter_C.ExecuteUbergraph_SpaceWhaleBombExplosion_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhaleBombExplosion_Emitter_C::ExecuteUbergraph_SpaceWhaleBombExplosion_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleBombExplosion_Emitter.SpaceWhaleBombExplosion_Emitter_C.ExecuteUbergraph_SpaceWhaleBombExplosion_Emitter");

	ASpaceWhaleBombExplosion_Emitter_C_ExecuteUbergraph_SpaceWhaleBombExplosion_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
