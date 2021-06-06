// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Boulder_Fire_ExplosionEmitter_ExLarger_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C.UserConstructionScript
// ()

void ABoulder_Fire_ExplosionEmitter_ExLarger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C.UserConstructionScript");

	ABoulder_Fire_ExplosionEmitter_ExLarger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C.ExecuteUbergraph_Boulder_Fire_ExplosionEmitter_ExLarger
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABoulder_Fire_ExplosionEmitter_ExLarger_C::ExecuteUbergraph_Boulder_Fire_ExplosionEmitter_ExLarger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Boulder_Fire_ExplosionEmitter_ExLarger.Boulder_Fire_ExplosionEmitter_ExLarger_C.ExecuteUbergraph_Boulder_Fire_ExplosionEmitter_ExLarger");

	ABoulder_Fire_ExplosionEmitter_ExLarger_C_ExecuteUbergraph_Boulder_Fire_ExplosionEmitter_ExLarger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
