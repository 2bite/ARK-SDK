// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_MetalStairs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_MetalStairs.PrimalItemStructure_MetalStairs_C.ExecuteUbergraph_PrimalItemStructure_MetalStairs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_MetalStairs_C::ExecuteUbergraph_PrimalItemStructure_MetalStairs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_MetalStairs.PrimalItemStructure_MetalStairs_C.ExecuteUbergraph_PrimalItemStructure_MetalStairs");

	UPrimalItemStructure_MetalStairs_C_ExecuteUbergraph_PrimalItemStructure_MetalStairs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
