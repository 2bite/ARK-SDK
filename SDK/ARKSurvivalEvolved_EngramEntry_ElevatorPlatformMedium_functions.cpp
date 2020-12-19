// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ElevatorPlatformMedium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ElevatorPlatformMedium.EngramEntry_ElevatorPlatformMedium_C.ExecuteUbergraph_EngramEntry_ElevatorPlatformMedium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ElevatorPlatformMedium_C::ExecuteUbergraph_EngramEntry_ElevatorPlatformMedium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ElevatorPlatformMedium.EngramEntry_ElevatorPlatformMedium_C.ExecuteUbergraph_EngramEntry_ElevatorPlatformMedium");

	UEngramEntry_ElevatorPlatformMedium_C_ExecuteUbergraph_EngramEntry_ElevatorPlatformMedium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
