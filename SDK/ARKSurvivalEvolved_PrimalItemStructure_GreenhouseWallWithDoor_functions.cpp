// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_GreenhouseWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_GreenhouseWallWithDoor.PrimalItemStructure_GreenhouseWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_GreenhouseWallWithDoor_C::ExecuteUbergraph_PrimalItemStructure_GreenhouseWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_GreenhouseWallWithDoor.PrimalItemStructure_GreenhouseWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_GreenhouseWallWithDoor");

	UPrimalItemStructure_GreenhouseWallWithDoor_C_ExecuteUbergraph_PrimalItemStructure_GreenhouseWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
