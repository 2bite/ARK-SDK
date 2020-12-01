// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_WoodStairs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_WoodStairs.PrimalItemStructure_WoodStairs_C.ExecuteUbergraph_PrimalItemStructure_WoodStairs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_WoodStairs_C::ExecuteUbergraph_PrimalItemStructure_WoodStairs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_WoodStairs.PrimalItemStructure_WoodStairs_C.ExecuteUbergraph_PrimalItemStructure_WoodStairs");

	UPrimalItemStructure_WoodStairs_C_ExecuteUbergraph_PrimalItemStructure_WoodStairs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
