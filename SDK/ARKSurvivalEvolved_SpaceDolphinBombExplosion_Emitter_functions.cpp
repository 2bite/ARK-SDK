// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceDolphinBombExplosion_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C.UserConstructionScript
// ()

void ASpaceDolphinBombExplosion_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C.UserConstructionScript");

	ASpaceDolphinBombExplosion_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C.ExecuteUbergraph_SpaceDolphinBombExplosion_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceDolphinBombExplosion_Emitter_C::ExecuteUbergraph_SpaceDolphinBombExplosion_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceDolphinBombExplosion_Emitter.SpaceDolphinBombExplosion_Emitter_C.ExecuteUbergraph_SpaceDolphinBombExplosion_Emitter");

	ASpaceDolphinBombExplosion_Emitter_C_ExecuteUbergraph_SpaceDolphinBombExplosion_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
