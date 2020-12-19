// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorPlatform_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElevatorPlatform_Medium.ElevatorPlatform_Medium_C.UserConstructionScript
// ()

void AElevatorPlatform_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorPlatform_Medium.ElevatorPlatform_Medium_C.UserConstructionScript");

	AElevatorPlatform_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorPlatform_Medium.ElevatorPlatform_Medium_C.ExecuteUbergraph_ElevatorPlatform_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElevatorPlatform_Medium_C::ExecuteUbergraph_ElevatorPlatform_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorPlatform_Medium.ElevatorPlatform_Medium_C.ExecuteUbergraph_ElevatorPlatform_Medium");

	AElevatorPlatform_Medium_C_ExecuteUbergraph_ElevatorPlatform_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
