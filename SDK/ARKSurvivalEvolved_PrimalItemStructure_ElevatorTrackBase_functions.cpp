// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ElevatorTrackBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ElevatorTrackBase.PrimalItemStructure_ElevatorTrackBase_C.ExecuteUbergraph_PrimalItemStructure_ElevatorTrackBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ElevatorTrackBase_C::ExecuteUbergraph_PrimalItemStructure_ElevatorTrackBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ElevatorTrackBase.PrimalItemStructure_ElevatorTrackBase_C.ExecuteUbergraph_PrimalItemStructure_ElevatorTrackBase");

	UPrimalItemStructure_ElevatorTrackBase_C_ExecuteUbergraph_PrimalItemStructure_ElevatorTrackBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
