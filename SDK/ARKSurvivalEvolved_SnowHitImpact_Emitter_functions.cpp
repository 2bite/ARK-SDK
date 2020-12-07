// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SnowHitImpact_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SnowHitImpact_Emitter.SnowHitImpact_Emitter_C.UserConstructionScript
// ()

void ASnowHitImpact_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowHitImpact_Emitter.SnowHitImpact_Emitter_C.UserConstructionScript");

	ASnowHitImpact_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SnowHitImpact_Emitter.SnowHitImpact_Emitter_C.ExecuteUbergraph_SnowHitImpact_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASnowHitImpact_Emitter_C::ExecuteUbergraph_SnowHitImpact_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SnowHitImpact_Emitter.SnowHitImpact_Emitter_C.ExecuteUbergraph_SnowHitImpact_Emitter");

	ASnowHitImpact_Emitter_C_ExecuteUbergraph_SnowHitImpact_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
