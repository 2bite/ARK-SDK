// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodDoor.PrimalItemStructure_WoodDoor_C.ExecuteUbergraph_PrimalItemStructure_WoodDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodDoor_C::ExecuteUbergraph_PrimalItemStructure_WoodDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodDoor.PrimalItemStructure_WoodDoor_C.ExecuteUbergraph_PrimalItemStructure_WoodDoor");

	UPrimalItemStructure_WoodDoor_C_ExecuteUbergraph_PrimalItemStructure_WoodDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
