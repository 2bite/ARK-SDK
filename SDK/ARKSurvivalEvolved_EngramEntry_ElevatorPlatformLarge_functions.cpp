// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ElevatorPlatformLarge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ElevatorPlatformLarge.EngramEntry_ElevatorPlatformLarge_C.ExecuteUbergraph_EngramEntry_ElevatorPlatformLarge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ElevatorPlatformLarge_C::ExecuteUbergraph_EngramEntry_ElevatorPlatformLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ElevatorPlatformLarge.EngramEntry_ElevatorPlatformLarge_C.ExecuteUbergraph_EngramEntry_ElevatorPlatformLarge");

	UEngramEntry_ElevatorPlatformLarge_C_ExecuteUbergraph_EngramEntry_ElevatorPlatformLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
