// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_ChristmasTree_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_ChristmasTree.PrimalItemStructure_ChristmasTree_C.ExecuteUbergraph_PrimalItemStructure_ChristmasTree
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_ChristmasTree_C::ExecuteUbergraph_PrimalItemStructure_ChristmasTree(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_ChristmasTree.PrimalItemStructure_ChristmasTree_C.ExecuteUbergraph_PrimalItemStructure_ChristmasTree");

	UPrimalItemStructure_ChristmasTree_C_ExecuteUbergraph_PrimalItemStructure_ChristmasTree_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
