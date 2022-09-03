// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TreeTap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TreeTap.PrimalItemStructure_TreeTap_C.ExecuteUbergraph_PrimalItemStructure_TreeTap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TreeTap_C::ExecuteUbergraph_PrimalItemStructure_TreeTap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TreeTap.PrimalItemStructure_TreeTap_C.ExecuteUbergraph_PrimalItemStructure_TreeTap");

	UPrimalItemStructure_TreeTap_C_ExecuteUbergraph_PrimalItemStructure_TreeTap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
