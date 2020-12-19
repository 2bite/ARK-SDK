// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorPlatform_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C.UserConstructionScript
// ()

void AWoodElevatorPlatform_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C.UserConstructionScript");

	AWoodElevatorPlatform_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C.ExecuteUbergraph_WoodElevatorPlatform_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorPlatform_Small_C::ExecuteUbergraph_WoodElevatorPlatform_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Small.WoodElevatorPlatform_Small_C.ExecuteUbergraph_WoodElevatorPlatform_Small");

	AWoodElevatorPlatform_Small_C_ExecuteUbergraph_WoodElevatorPlatform_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
