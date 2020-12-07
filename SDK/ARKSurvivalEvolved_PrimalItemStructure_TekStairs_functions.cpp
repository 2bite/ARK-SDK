// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekStairs_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekStairs.PrimalItemStructure_TekStairs_C.ExecuteUbergraph_PrimalItemStructure_TekStairs
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekStairs_C::ExecuteUbergraph_PrimalItemStructure_TekStairs(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekStairs.PrimalItemStructure_TekStairs_C.ExecuteUbergraph_PrimalItemStructure_TekStairs");

	UPrimalItemStructure_TekStairs_C_ExecuteUbergraph_PrimalItemStructure_TekStairs_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
