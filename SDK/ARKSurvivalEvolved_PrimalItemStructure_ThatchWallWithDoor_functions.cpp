// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ThatchWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ThatchWallWithDoor.PrimalItemStructure_ThatchWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_ThatchWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ThatchWallWithDoor_C::ExecuteUbergraph_PrimalItemStructure_ThatchWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ThatchWallWithDoor.PrimalItemStructure_ThatchWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_ThatchWallWithDoor");

	UPrimalItemStructure_ThatchWallWithDoor_C_ExecuteUbergraph_PrimalItemStructure_ThatchWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
