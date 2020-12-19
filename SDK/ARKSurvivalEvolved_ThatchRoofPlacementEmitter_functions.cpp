// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ThatchRoofPlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThatchRoofPlacementEmitter.ThatchRoofPlacementEmitter_C.UserConstructionScript
// ()

void AThatchRoofPlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchRoofPlacementEmitter.ThatchRoofPlacementEmitter_C.UserConstructionScript");

	AThatchRoofPlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThatchRoofPlacementEmitter.ThatchRoofPlacementEmitter_C.ExecuteUbergraph_ThatchRoofPlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatchRoofPlacementEmitter_C::ExecuteUbergraph_ThatchRoofPlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchRoofPlacementEmitter.ThatchRoofPlacementEmitter_C.ExecuteUbergraph_ThatchRoofPlacementEmitter");

	AThatchRoofPlacementEmitter_C_ExecuteUbergraph_ThatchRoofPlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
