// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodWallWithDoor.PrimalItemStructure_WoodWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_WoodWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodWallWithDoor_C::ExecuteUbergraph_PrimalItemStructure_WoodWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodWallWithDoor.PrimalItemStructure_WoodWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_WoodWallWithDoor");

	UPrimalItemStructure_WoodWallWithDoor_C_ExecuteUbergraph_PrimalItemStructure_WoodWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
