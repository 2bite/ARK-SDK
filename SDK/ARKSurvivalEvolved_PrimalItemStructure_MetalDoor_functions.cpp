// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalDoor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalDoor.PrimalItemStructure_MetalDoor_C.ExecuteUbergraph_PrimalItemStructure_MetalDoor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalDoor_C::ExecuteUbergraph_PrimalItemStructure_MetalDoor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalDoor.PrimalItemStructure_MetalDoor_C.ExecuteUbergraph_PrimalItemStructure_MetalDoor");

	UPrimalItemStructure_MetalDoor_C_ExecuteUbergraph_PrimalItemStructure_MetalDoor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
