// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorPlatform_Large_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodElevatorPlatform_Large.WoodElevatorPlatform_Large_C.UserConstructionScript
// ()

void AWoodElevatorPlatform_Large_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Large.WoodElevatorPlatform_Large_C.UserConstructionScript");

	AWoodElevatorPlatform_Large_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodElevatorPlatform_Large.WoodElevatorPlatform_Large_C.ExecuteUbergraph_WoodElevatorPlatform_Large
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorPlatform_Large_C::ExecuteUbergraph_WoodElevatorPlatform_Large(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Large.WoodElevatorPlatform_Large_C.ExecuteUbergraph_WoodElevatorPlatform_Large");

	AWoodElevatorPlatform_Large_C_ExecuteUbergraph_WoodElevatorPlatform_Large_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
