// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodElevator_Track_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodElevator_Track.EngramEntry_WoodElevator_Track_C.ExecuteUbergraph_EngramEntry_WoodElevator_Track
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodElevator_Track_C::ExecuteUbergraph_EngramEntry_WoodElevator_Track(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodElevator_Track.EngramEntry_WoodElevator_Track_C.ExecuteUbergraph_EngramEntry_WoodElevator_Track");

	UEngramEntry_WoodElevator_Track_C_ExecuteUbergraph_EngramEntry_WoodElevator_Track_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
