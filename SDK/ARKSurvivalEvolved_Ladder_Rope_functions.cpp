// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ladder_Rope_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ladder_Rope.Ladder_Rope_C.UserConstructionScript
// ()

void ALadder_Rope_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ladder_Rope.Ladder_Rope_C.UserConstructionScript");

	ALadder_Rope_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ladder_Rope.Ladder_Rope_C.ExecuteUbergraph_Ladder_Rope
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALadder_Rope_C::ExecuteUbergraph_Ladder_Rope(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ladder_Rope.Ladder_Rope_C.ExecuteUbergraph_Ladder_Rope");

	ALadder_Rope_C_ExecuteUbergraph_Ladder_Rope_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
