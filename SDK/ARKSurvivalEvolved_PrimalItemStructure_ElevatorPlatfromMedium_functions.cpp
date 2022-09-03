// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ElevatorPlatfromMedium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ElevatorPlatfromMedium.PrimalItemStructure_ElevatorPlatfromMedium_C.ExecuteUbergraph_PrimalItemStructure_ElevatorPlatfromMedium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ElevatorPlatfromMedium_C::ExecuteUbergraph_PrimalItemStructure_ElevatorPlatfromMedium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ElevatorPlatfromMedium.PrimalItemStructure_ElevatorPlatfromMedium_C.ExecuteUbergraph_PrimalItemStructure_ElevatorPlatfromMedium");

	UPrimalItemStructure_ElevatorPlatfromMedium_C_ExecuteUbergraph_PrimalItemStructure_ElevatorPlatfromMedium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
