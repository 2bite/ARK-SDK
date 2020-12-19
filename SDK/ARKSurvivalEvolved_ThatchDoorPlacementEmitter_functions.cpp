// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ThatchDoorPlacementEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ThatchDoorPlacementEmitter.ThatchDoorPlacementEmitter_C.UserConstructionScript
// ()

void AThatchDoorPlacementEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchDoorPlacementEmitter.ThatchDoorPlacementEmitter_C.UserConstructionScript");

	AThatchDoorPlacementEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ThatchDoorPlacementEmitter.ThatchDoorPlacementEmitter_C.ExecuteUbergraph_ThatchDoorPlacementEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AThatchDoorPlacementEmitter_C::ExecuteUbergraph_ThatchDoorPlacementEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ThatchDoorPlacementEmitter.ThatchDoorPlacementEmitter_C.ExecuteUbergraph_ThatchDoorPlacementEmitter");

	AThatchDoorPlacementEmitter_C_ExecuteUbergraph_ThatchDoorPlacementEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
