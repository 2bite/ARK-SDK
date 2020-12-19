// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorPlatform_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElevatorPlatform_Small.ElevatorPlatform_Small_C.UserConstructionScript
// ()

void AElevatorPlatform_Small_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorPlatform_Small.ElevatorPlatform_Small_C.UserConstructionScript");

	AElevatorPlatform_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorPlatform_Small.ElevatorPlatform_Small_C.ExecuteUbergraph_ElevatorPlatform_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElevatorPlatform_Small_C::ExecuteUbergraph_ElevatorPlatform_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorPlatform_Small.ElevatorPlatform_Small_C.ExecuteUbergraph_ElevatorPlatform_Small");

	AElevatorPlatform_Small_C_ExecuteUbergraph_ElevatorPlatform_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
