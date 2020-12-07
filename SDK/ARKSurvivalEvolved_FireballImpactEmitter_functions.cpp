// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FireballImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FireballImpactEmitter.FireballImpactEmitter_C.UserConstructionScript
// ()

void AFireballImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireballImpactEmitter.FireballImpactEmitter_C.UserConstructionScript");

	AFireballImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireballImpactEmitter.FireballImpactEmitter_C.ExecuteUbergraph_FireballImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFireballImpactEmitter_C::ExecuteUbergraph_FireballImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireballImpactEmitter.FireballImpactEmitter_C.ExecuteUbergraph_FireballImpactEmitter");

	AFireballImpactEmitter_C_ExecuteUbergraph_FireballImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
