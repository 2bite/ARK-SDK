// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ElevatorPlatformLarge_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ElevatorPlatformLarge.PrimalItemStructure_ElevatorPlatformLarge_C.ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformLarge
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ElevatorPlatformLarge_C::ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformLarge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ElevatorPlatformLarge.PrimalItemStructure_ElevatorPlatformLarge_C.ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformLarge");

	UPrimalItemStructure_ElevatorPlatformLarge_C_ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformLarge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
