// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekJumpPad_Placement_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TekJumpPad_Placement_Emitter.TekJumpPad_Placement_Emitter_C.UserConstructionScript
// ()

void ATekJumpPad_Placement_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad_Placement_Emitter.TekJumpPad_Placement_Emitter_C.UserConstructionScript");

	ATekJumpPad_Placement_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TekJumpPad_Placement_Emitter.TekJumpPad_Placement_Emitter_C.ExecuteUbergraph_TekJumpPad_Placement_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATekJumpPad_Placement_Emitter_C::ExecuteUbergraph_TekJumpPad_Placement_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TekJumpPad_Placement_Emitter.TekJumpPad_Placement_Emitter_C.ExecuteUbergraph_TekJumpPad_Placement_Emitter");

	ATekJumpPad_Placement_Emitter_C_ExecuteUbergraph_TekJumpPad_Placement_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
