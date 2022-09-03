// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FireArrowImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FireArrowImpactEmitter.FireArrowImpactEmitter_C.UserConstructionScript
// ()

void AFireArrowImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireArrowImpactEmitter.FireArrowImpactEmitter_C.UserConstructionScript");

	AFireArrowImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireArrowImpactEmitter.FireArrowImpactEmitter_C.ExecuteUbergraph_FireArrowImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFireArrowImpactEmitter_C::ExecuteUbergraph_FireArrowImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireArrowImpactEmitter.FireArrowImpactEmitter_C.ExecuteUbergraph_FireArrowImpactEmitter");

	AFireArrowImpactEmitter_C_ExecuteUbergraph_FireArrowImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
