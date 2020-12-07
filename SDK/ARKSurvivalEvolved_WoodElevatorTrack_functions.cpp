// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorTrack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodElevatorTrack.WoodElevatorTrack_C.UserConstructionScript
// ()

void AWoodElevatorTrack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTrack.WoodElevatorTrack_C.UserConstructionScript");

	AWoodElevatorTrack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodElevatorTrack.WoodElevatorTrack_C.ExecuteUbergraph_WoodElevatorTrack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorTrack_C::ExecuteUbergraph_WoodElevatorTrack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorTrack.WoodElevatorTrack_C.ExecuteUbergraph_WoodElevatorTrack");

	AWoodElevatorTrack_C_ExecuteUbergraph_WoodElevatorTrack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
