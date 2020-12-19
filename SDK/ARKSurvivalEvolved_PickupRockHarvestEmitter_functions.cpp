// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PickupRockHarvestEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PickupRockHarvestEmitter.PickupRockHarvestEmitter_C.UserConstructionScript
// ()

void APickupRockHarvestEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupRockHarvestEmitter.PickupRockHarvestEmitter_C.UserConstructionScript");

	APickupRockHarvestEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PickupRockHarvestEmitter.PickupRockHarvestEmitter_C.ExecuteUbergraph_PickupRockHarvestEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APickupRockHarvestEmitter_C::ExecuteUbergraph_PickupRockHarvestEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PickupRockHarvestEmitter.PickupRockHarvestEmitter_C.ExecuteUbergraph_PickupRockHarvestEmitter");

	APickupRockHarvestEmitter_C_ExecuteUbergraph_PickupRockHarvestEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
