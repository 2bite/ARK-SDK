// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ElevatorPlatformBase_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ElevatorPlatformBase.PrimalItemStructure_ElevatorPlatformBase_C.ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ElevatorPlatformBase_C::ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ElevatorPlatformBase.PrimalItemStructure_ElevatorPlatformBase_C.ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformBase");

	UPrimalItemStructure_ElevatorPlatformBase_C_ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
