// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WoodElevatorPlatform_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.GetTopSwitch
// ()
// Parameters:
// class AWoodElevatorTopSwitch_C* Switch                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorPlatform_Base_C::GetTopSwitch(class AWoodElevatorTopSwitch_C** Switch)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.GetTopSwitch");

	AWoodElevatorPlatform_Base_C_GetTopSwitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Switch != nullptr)
		*Switch = params.Switch;
}


// Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.BPElevatorStopped
// ()
// Parameters:
// bool*                          bSwitchedDirection             (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EPrimalStructureElevatorState>* NewDirection                   (Parm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorPlatform_Base_C::BPElevatorStopped(bool* bSwitchedDirection, TEnumAsByte<EPrimalStructureElevatorState>* NewDirection)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.BPElevatorStopped");

	AWoodElevatorPlatform_Base_C_BPElevatorStopped_Params params;
	params.bSwitchedDirection = bSwitchedDirection;
	params.NewDirection = NewDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.UserConstructionScript
// ()

void AWoodElevatorPlatform_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.UserConstructionScript");

	AWoodElevatorPlatform_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.ExecuteUbergraph_WoodElevatorPlatform_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWoodElevatorPlatform_Base_C::ExecuteUbergraph_WoodElevatorPlatform_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function WoodElevatorPlatform_Base.WoodElevatorPlatform_Base_C.ExecuteUbergraph_WoodElevatorPlatform_Base");

	AWoodElevatorPlatform_Base_C_ExecuteUbergraph_WoodElevatorPlatform_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
