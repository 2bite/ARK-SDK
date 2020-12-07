// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tek_Ramp_PlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tek_Ramp_PlacementEmitter.Tek_Ramp_PlacementEmitter_C.UserConstructionScript
// ()

void ATek_Ramp_PlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_Ramp_PlacementEmitter.Tek_Ramp_PlacementEmitter_C.UserConstructionScript");

	ATek_Ramp_PlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tek_Ramp_PlacementEmitter.Tek_Ramp_PlacementEmitter_C.ExecuteUbergraph_Tek_Ramp_PlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATek_Ramp_PlacementEmitter_C::ExecuteUbergraph_Tek_Ramp_PlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tek_Ramp_PlacementEmitter.Tek_Ramp_PlacementEmitter_C.ExecuteUbergraph_Tek_Ramp_PlacementEmitter");

	ATek_Ramp_PlacementEmitter_C_ExecuteUbergraph_Tek_Ramp_PlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
