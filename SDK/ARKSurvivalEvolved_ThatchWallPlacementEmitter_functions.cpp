// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ThatchWallPlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThatchWallPlacementEmitter.ThatchWallPlacementEmitter_C.UserConstructionScript
// ()

void AThatchWallPlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchWallPlacementEmitter.ThatchWallPlacementEmitter_C.UserConstructionScript");

	AThatchWallPlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThatchWallPlacementEmitter.ThatchWallPlacementEmitter_C.ExecuteUbergraph_ThatchWallPlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatchWallPlacementEmitter_C::ExecuteUbergraph_ThatchWallPlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchWallPlacementEmitter.ThatchWallPlacementEmitter_C.ExecuteUbergraph_ThatchWallPlacementEmitter");

	AThatchWallPlacementEmitter_C_ExecuteUbergraph_ThatchWallPlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
