// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OceanPlatformWood_PlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OceanPlatformWood_PlacementEmitter.OceanPlatformWood_PlacementEmitter_C.UserConstructionScript
// ()

void AOceanPlatformWood_PlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatformWood_PlacementEmitter.OceanPlatformWood_PlacementEmitter_C.UserConstructionScript");

	AOceanPlatformWood_PlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OceanPlatformWood_PlacementEmitter.OceanPlatformWood_PlacementEmitter_C.ExecuteUbergraph_OceanPlatformWood_PlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AOceanPlatformWood_PlacementEmitter_C::ExecuteUbergraph_OceanPlatformWood_PlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function OceanPlatformWood_PlacementEmitter.OceanPlatformWood_PlacementEmitter_C.ExecuteUbergraph_OceanPlatformWood_PlacementEmitter");

	AOceanPlatformWood_PlacementEmitter_C_ExecuteUbergraph_OceanPlatformWood_PlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
