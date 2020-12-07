// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodElevatorPlatform_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodElevatorPlatform_Medium.EngramEntry_WoodElevatorPlatform_Medium_C.ExecuteUbergraph_EngramEntry_WoodElevatorPlatform_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodElevatorPlatform_Medium_C::ExecuteUbergraph_EngramEntry_WoodElevatorPlatform_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodElevatorPlatform_Medium.EngramEntry_WoodElevatorPlatform_Medium_C.ExecuteUbergraph_EngramEntry_WoodElevatorPlatform_Medium");

	UEngramEntry_WoodElevatorPlatform_Medium_C_ExecuteUbergraph_EngramEntry_WoodElevatorPlatform_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
