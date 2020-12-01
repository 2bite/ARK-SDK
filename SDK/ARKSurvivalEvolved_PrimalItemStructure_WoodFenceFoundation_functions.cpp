// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodFenceFoundation_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodFenceFoundation.PrimalItemStructure_WoodFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_WoodFenceFoundation
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodFenceFoundation_C::ExecuteUbergraph_PrimalItemStructure_WoodFenceFoundation(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodFenceFoundation.PrimalItemStructure_WoodFenceFoundation_C.ExecuteUbergraph_PrimalItemStructure_WoodFenceFoundation");

	UPrimalItemStructure_WoodFenceFoundation_C_ExecuteUbergraph_PrimalItemStructure_WoodFenceFoundation_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
