// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalFloor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalFloor.PrimalItemStructure_MetalFloor_C.ExecuteUbergraph_PrimalItemStructure_MetalFloor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalFloor_C::ExecuteUbergraph_PrimalItemStructure_MetalFloor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalFloor.PrimalItemStructure_MetalFloor_C.ExecuteUbergraph_PrimalItemStructure_MetalFloor");

	UPrimalItemStructure_MetalFloor_C_ExecuteUbergraph_PrimalItemStructure_MetalFloor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
