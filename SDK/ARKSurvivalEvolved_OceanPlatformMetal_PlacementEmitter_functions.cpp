// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OceanPlatformMetal_PlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanPlatformMetal_PlacementEmitter.OceanPlatformMetal_PlacementEmitter_C.UserConstructionScript
// ()

void AOceanPlatformMetal_PlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatformMetal_PlacementEmitter.OceanPlatformMetal_PlacementEmitter_C.UserConstructionScript");

	AOceanPlatformMetal_PlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatformMetal_PlacementEmitter.OceanPlatformMetal_PlacementEmitter_C.ExecuteUbergraph_OceanPlatformMetal_PlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatformMetal_PlacementEmitter_C::ExecuteUbergraph_OceanPlatformMetal_PlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatformMetal_PlacementEmitter.OceanPlatformMetal_PlacementEmitter_C.ExecuteUbergraph_OceanPlatformMetal_PlacementEmitter");

	AOceanPlatformMetal_PlacementEmitter_C_ExecuteUbergraph_OceanPlatformMetal_PlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
