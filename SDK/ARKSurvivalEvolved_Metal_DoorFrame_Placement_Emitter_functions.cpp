// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Metal_DoorFrame_Placement_Emitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Metal_DoorFrame_Placement_Emitter.Metal_DoorFrame_Placement_Emitter_C.UserConstructionScript
// ()

void AMetal_DoorFrame_Placement_Emitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Metal_DoorFrame_Placement_Emitter.Metal_DoorFrame_Placement_Emitter_C.UserConstructionScript");

	AMetal_DoorFrame_Placement_Emitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Metal_DoorFrame_Placement_Emitter.Metal_DoorFrame_Placement_Emitter_C.ExecuteUbergraph_Metal_DoorFrame_Placement_Emitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMetal_DoorFrame_Placement_Emitter_C::ExecuteUbergraph_Metal_DoorFrame_Placement_Emitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Metal_DoorFrame_Placement_Emitter.Metal_DoorFrame_Placement_Emitter_C.ExecuteUbergraph_Metal_DoorFrame_Placement_Emitter");

	AMetal_DoorFrame_Placement_Emitter_C_ExecuteUbergraph_Metal_DoorFrame_Placement_Emitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
