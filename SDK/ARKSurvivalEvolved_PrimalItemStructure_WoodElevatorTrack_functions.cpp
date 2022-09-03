// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodElevatorTrack_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodElevatorTrack.PrimalItemStructure_WoodElevatorTrack_C.ExecuteUbergraph_PrimalItemStructure_WoodElevatorTrack
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodElevatorTrack_C::ExecuteUbergraph_PrimalItemStructure_WoodElevatorTrack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodElevatorTrack.PrimalItemStructure_WoodElevatorTrack_C.ExecuteUbergraph_PrimalItemStructure_WoodElevatorTrack");

	UPrimalItemStructure_WoodElevatorTrack_C_ExecuteUbergraph_PrimalItemStructure_WoodElevatorTrack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
