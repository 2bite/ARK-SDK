// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorTrack_Metal_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElevatorTrack_Metal.ElevatorTrack_Metal_C.UserConstructionScript
// ()

void AElevatorTrack_Metal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorTrack_Metal.ElevatorTrack_Metal_C.UserConstructionScript");

	AElevatorTrack_Metal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorTrack_Metal.ElevatorTrack_Metal_C.ExecuteUbergraph_ElevatorTrack_Metal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElevatorTrack_Metal_C::ExecuteUbergraph_ElevatorTrack_Metal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorTrack_Metal.ElevatorTrack_Metal_C.ExecuteUbergraph_ElevatorTrack_Metal");

	AElevatorTrack_Metal_C_ExecuteUbergraph_ElevatorTrack_Metal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
