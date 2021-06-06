// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ElevatorTrack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ElevatorTrack.EngramEntry_ElevatorTrack_C.ExecuteUbergraph_EngramEntry_ElevatorTrack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ElevatorTrack_C::ExecuteUbergraph_EngramEntry_ElevatorTrack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ElevatorTrack.EngramEntry_ElevatorTrack_C.ExecuteUbergraph_EngramEntry_ElevatorTrack");

	UEngramEntry_ElevatorTrack_C_ExecuteUbergraph_EngramEntry_ElevatorTrack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
