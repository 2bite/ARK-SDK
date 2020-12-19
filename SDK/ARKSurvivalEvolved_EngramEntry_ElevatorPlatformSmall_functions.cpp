// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ElevatorPlatformSmall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ElevatorPlatformSmall.EngramEntry_ElevatorPlatformSmall_C.ExecuteUbergraph_EngramEntry_ElevatorPlatformSmall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ElevatorPlatformSmall_C::ExecuteUbergraph_EngramEntry_ElevatorPlatformSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ElevatorPlatformSmall.EngramEntry_ElevatorPlatformSmall_C.ExecuteUbergraph_EngramEntry_ElevatorPlatformSmall");

	UEngramEntry_ElevatorPlatformSmall_C_ExecuteUbergraph_EngramEntry_ElevatorPlatformSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
