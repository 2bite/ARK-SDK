// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorTrack_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElevatorTrack_Base.ElevatorTrack_Base_C.UserConstructionScript
// ()

void AElevatorTrack_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorTrack_Base.ElevatorTrack_Base_C.UserConstructionScript");

	AElevatorTrack_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorTrack_Base.ElevatorTrack_Base_C.ExecuteUbergraph_ElevatorTrack_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElevatorTrack_Base_C::ExecuteUbergraph_ElevatorTrack_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorTrack_Base.ElevatorTrack_Base_C.ExecuteUbergraph_ElevatorTrack_Base");

	AElevatorTrack_Base_C_ExecuteUbergraph_ElevatorTrack_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
