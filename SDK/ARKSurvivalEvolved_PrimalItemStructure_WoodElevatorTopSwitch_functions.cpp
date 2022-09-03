// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodElevatorTopSwitch_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodElevatorTopSwitch.PrimalItemStructure_WoodElevatorTopSwitch_C.ExecuteUbergraph_PrimalItemStructure_WoodElevatorTopSwitch
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodElevatorTopSwitch_C::ExecuteUbergraph_PrimalItemStructure_WoodElevatorTopSwitch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodElevatorTopSwitch.PrimalItemStructure_WoodElevatorTopSwitch_C.ExecuteUbergraph_PrimalItemStructure_WoodElevatorTopSwitch");

	UPrimalItemStructure_WoodElevatorTopSwitch_C_ExecuteUbergraph_PrimalItemStructure_WoodElevatorTopSwitch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
