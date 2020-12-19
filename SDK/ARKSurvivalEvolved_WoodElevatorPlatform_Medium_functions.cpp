// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorPlatform_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodElevatorPlatform_Medium.WoodElevatorPlatform_Medium_C.UserConstructionScript
// ()

void AWoodElevatorPlatform_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Medium.WoodElevatorPlatform_Medium_C.UserConstructionScript");

	AWoodElevatorPlatform_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodElevatorPlatform_Medium.WoodElevatorPlatform_Medium_C.ExecuteUbergraph_WoodElevatorPlatform_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorPlatform_Medium_C::ExecuteUbergraph_WoodElevatorPlatform_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Medium.WoodElevatorPlatform_Medium_C.ExecuteUbergraph_WoodElevatorPlatform_Medium");

	AWoodElevatorPlatform_Medium_C_ExecuteUbergraph_WoodElevatorPlatform_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
