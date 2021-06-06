// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CupidTranquilImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CupidTranquilImpactEmitter.CupidTranquilImpactEmitter_C.UserConstructionScript
// ()

void ACupidTranquilImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function CupidTranquilImpactEmitter.CupidTranquilImpactEmitter_C.UserConstructionScript");

	ACupidTranquilImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CupidTranquilImpactEmitter.CupidTranquilImpactEmitter_C.ExecuteUbergraph_CupidTranquilImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ACupidTranquilImpactEmitter_C::ExecuteUbergraph_CupidTranquilImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CupidTranquilImpactEmitter.CupidTranquilImpactEmitter_C.ExecuteUbergraph_CupidTranquilImpactEmitter");

	ACupidTranquilImpactEmitter_C_ExecuteUbergraph_CupidTranquilImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
