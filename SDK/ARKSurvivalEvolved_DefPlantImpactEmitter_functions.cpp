// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DefPlantImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DefPlantImpactEmitter.DefPlantImpactEmitter_C.UserConstructionScript
// ()

void ADefPlantImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefPlantImpactEmitter.DefPlantImpactEmitter_C.UserConstructionScript");

	ADefPlantImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefPlantImpactEmitter.DefPlantImpactEmitter_C.ExecuteUbergraph_DefPlantImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADefPlantImpactEmitter_C::ExecuteUbergraph_DefPlantImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DefPlantImpactEmitter.DefPlantImpactEmitter_C.ExecuteUbergraph_DefPlantImpactEmitter");

	ADefPlantImpactEmitter_C_ExecuteUbergraph_DefPlantImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
