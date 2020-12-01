// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ThatchFloorPlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThatchFloorPlacementEmitter.ThatchFloorPlacementEmitter_C.UserConstructionScript
// ()

void AThatchFloorPlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchFloorPlacementEmitter.ThatchFloorPlacementEmitter_C.UserConstructionScript");

	AThatchFloorPlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThatchFloorPlacementEmitter.ThatchFloorPlacementEmitter_C.ExecuteUbergraph_ThatchFloorPlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatchFloorPlacementEmitter_C::ExecuteUbergraph_ThatchFloorPlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchFloorPlacementEmitter.ThatchFloorPlacementEmitter_C.ExecuteUbergraph_ThatchFloorPlacementEmitter");

	AThatchFloorPlacementEmitter_C_ExecuteUbergraph_ThatchFloorPlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
