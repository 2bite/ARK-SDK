// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Stone_Window_Placement_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Stone_Window_Placement_Emitter.Stone_Window_Placement_Emitter_C.UserConstructionScript
// ()

void AStone_Window_Placement_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Stone_Window_Placement_Emitter.Stone_Window_Placement_Emitter_C.UserConstructionScript");

	AStone_Window_Placement_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Stone_Window_Placement_Emitter.Stone_Window_Placement_Emitter_C.ExecuteUbergraph_Stone_Window_Placement_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AStone_Window_Placement_Emitter_C::ExecuteUbergraph_Stone_Window_Placement_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Stone_Window_Placement_Emitter.Stone_Window_Placement_Emitter_C.ExecuteUbergraph_Stone_Window_Placement_Emitter");

	AStone_Window_Placement_Emitter_C_ExecuteUbergraph_Stone_Window_Placement_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
