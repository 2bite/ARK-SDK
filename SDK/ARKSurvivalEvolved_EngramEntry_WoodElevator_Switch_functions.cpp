// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_WoodElevator_Switch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_WoodElevator_Switch.EngramEntry_WoodElevator_Switch_C.ExecuteUbergraph_EngramEntry_WoodElevator_Switch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_WoodElevator_Switch_C::ExecuteUbergraph_EngramEntry_WoodElevator_Switch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_WoodElevator_Switch.EngramEntry_WoodElevator_Switch_C.ExecuteUbergraph_EngramEntry_WoodElevator_Switch");

	UEngramEntry_WoodElevator_Switch_C_ExecuteUbergraph_EngramEntry_WoodElevator_Switch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
