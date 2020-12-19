// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Adobe_GateDoor_Placement_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Adobe_GateDoor_Placement_Emitter.Adobe_GateDoor_Placement_Emitter_C.UserConstructionScript
// ()

void AAdobe_GateDoor_Placement_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Adobe_GateDoor_Placement_Emitter.Adobe_GateDoor_Placement_Emitter_C.UserConstructionScript");

	AAdobe_GateDoor_Placement_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Adobe_GateDoor_Placement_Emitter.Adobe_GateDoor_Placement_Emitter_C.ExecuteUbergraph_Adobe_GateDoor_Placement_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAdobe_GateDoor_Placement_Emitter_C::ExecuteUbergraph_Adobe_GateDoor_Placement_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Adobe_GateDoor_Placement_Emitter.Adobe_GateDoor_Placement_Emitter_C.ExecuteUbergraph_Adobe_GateDoor_Placement_Emitter");

	AAdobe_GateDoor_Placement_Emitter_C_ExecuteUbergraph_Adobe_GateDoor_Placement_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
