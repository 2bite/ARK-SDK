// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodElevatorPlatform_Small_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodElevatorPlatform_Small.PrimalItemStructure_WoodElevatorPlatform_Small_C.ExecuteUbergraph_PrimalItemStructure_WoodElevatorPlatform_Small
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodElevatorPlatform_Small_C::ExecuteUbergraph_PrimalItemStructure_WoodElevatorPlatform_Small(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodElevatorPlatform_Small.PrimalItemStructure_WoodElevatorPlatform_Small_C.ExecuteUbergraph_PrimalItemStructure_WoodElevatorPlatform_Small");

	UPrimalItemStructure_WoodElevatorPlatform_Small_C_ExecuteUbergraph_PrimalItemStructure_WoodElevatorPlatform_Small_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
