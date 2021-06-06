// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ElevatorPlatformSmall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ElevatorPlatformSmall.PrimalItemStructure_ElevatorPlatformSmall_C.ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformSmall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ElevatorPlatformSmall_C::ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformSmall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ElevatorPlatformSmall.PrimalItemStructure_ElevatorPlatformSmall_C.ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformSmall");

	UPrimalItemStructure_ElevatorPlatformSmall_C_ExecuteUbergraph_PrimalItemStructure_ElevatorPlatformSmall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
