// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_HordeCrateImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HordeCrateImpactEmitter.HordeCrateImpactEmitter_C.UserConstructionScript
// ()

void AHordeCrateImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateImpactEmitter.HordeCrateImpactEmitter_C.UserConstructionScript");

	AHordeCrateImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HordeCrateImpactEmitter.HordeCrateImpactEmitter_C.ExecuteUbergraph_HordeCrateImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AHordeCrateImpactEmitter_C::ExecuteUbergraph_HordeCrateImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HordeCrateImpactEmitter.HordeCrateImpactEmitter_C.ExecuteUbergraph_HordeCrateImpactEmitter");

	AHordeCrateImpactEmitter_C_ExecuteUbergraph_HordeCrateImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
