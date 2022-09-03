// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FireArrowTekBowImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function FireArrowTekBowImpactEmitter.FireArrowTekBowImpactEmitter_C.UserConstructionScript
// ()

void AFireArrowTekBowImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FireArrowTekBowImpactEmitter.FireArrowTekBowImpactEmitter_C.UserConstructionScript");

	AFireArrowTekBowImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FireArrowTekBowImpactEmitter.FireArrowTekBowImpactEmitter_C.ExecuteUbergraph_FireArrowTekBowImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AFireArrowTekBowImpactEmitter_C::ExecuteUbergraph_FireArrowTekBowImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FireArrowTekBowImpactEmitter.FireArrowTekBowImpactEmitter_C.ExecuteUbergraph_FireArrowTekBowImpactEmitter");

	AFireArrowTekBowImpactEmitter_C_ExecuteUbergraph_FireArrowTekBowImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
