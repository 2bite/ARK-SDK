// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodElevatorPlatform_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodElevatorPlatform_Small.EngramEntry_WoodElevatorPlatform_Small_C.ExecuteUbergraph_EngramEntry_WoodElevatorPlatform_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodElevatorPlatform_Small_C::ExecuteUbergraph_EngramEntry_WoodElevatorPlatform_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodElevatorPlatform_Small.EngramEntry_WoodElevatorPlatform_Small_C.ExecuteUbergraph_EngramEntry_WoodElevatorPlatform_Small");

	UEngramEntry_WoodElevatorPlatform_Small_C_ExecuteUbergraph_EngramEntry_WoodElevatorPlatform_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
