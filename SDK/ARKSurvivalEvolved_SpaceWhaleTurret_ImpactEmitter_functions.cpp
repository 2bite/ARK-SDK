// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpaceWhaleTurret_ImpactEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C.UserConstructionScript
// ()

void ASpaceWhaleTurret_ImpactEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C.UserConstructionScript");

	ASpaceWhaleTurret_ImpactEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C.ExecuteUbergraph_SpaceWhaleTurret_ImpactEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASpaceWhaleTurret_ImpactEmitter_C::ExecuteUbergraph_SpaceWhaleTurret_ImpactEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SpaceWhaleTurret_ImpactEmitter.SpaceWhaleTurret_ImpactEmitter_C.ExecuteUbergraph_SpaceWhaleTurret_ImpactEmitter");

	ASpaceWhaleTurret_ImpactEmitter_C_ExecuteUbergraph_SpaceWhaleTurret_ImpactEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
