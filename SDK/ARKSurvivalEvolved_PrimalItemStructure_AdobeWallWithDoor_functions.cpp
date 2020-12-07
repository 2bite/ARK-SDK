// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_AdobeWallWithDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_AdobeWallWithDoor.PrimalItemStructure_AdobeWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_AdobeWallWithDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_AdobeWallWithDoor_C::ExecuteUbergraph_PrimalItemStructure_AdobeWallWithDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_AdobeWallWithDoor.PrimalItemStructure_AdobeWallWithDoor_C.ExecuteUbergraph_PrimalItemStructure_AdobeWallWithDoor");

	UPrimalItemStructure_AdobeWallWithDoor_C_ExecuteUbergraph_PrimalItemStructure_AdobeWallWithDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
