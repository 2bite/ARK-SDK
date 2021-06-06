// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BasiliskPoisonImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BasiliskPoisonImpactEmitter.BasiliskPoisonImpactEmitter_C.UserConstructionScript
// ()

void ABasiliskPoisonImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasiliskPoisonImpactEmitter.BasiliskPoisonImpactEmitter_C.UserConstructionScript");

	ABasiliskPoisonImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasiliskPoisonImpactEmitter.BasiliskPoisonImpactEmitter_C.ExecuteUbergraph_BasiliskPoisonImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABasiliskPoisonImpactEmitter_C::ExecuteUbergraph_BasiliskPoisonImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasiliskPoisonImpactEmitter.BasiliskPoisonImpactEmitter_C.ExecuteUbergraph_BasiliskPoisonImpactEmitter");

	ABasiliskPoisonImpactEmitter_C_ExecuteUbergraph_BasiliskPoisonImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
