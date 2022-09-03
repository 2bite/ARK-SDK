// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElevatorPlatform_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ElevatorPlatform_Base.ElevatorPlatform_Base_C.UserConstructionScript
// ()

void AElevatorPlatform_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorPlatform_Base.ElevatorPlatform_Base_C.UserConstructionScript");

	AElevatorPlatform_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ElevatorPlatform_Base.ElevatorPlatform_Base_C.ExecuteUbergraph_ElevatorPlatform_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AElevatorPlatform_Base_C::ExecuteUbergraph_ElevatorPlatform_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ElevatorPlatform_Base.ElevatorPlatform_Base_C.ExecuteUbergraph_ElevatorPlatform_Base");

	AElevatorPlatform_Base_C_ExecuteUbergraph_ElevatorPlatform_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
