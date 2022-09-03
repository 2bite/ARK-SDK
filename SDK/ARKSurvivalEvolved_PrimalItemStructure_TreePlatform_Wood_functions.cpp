// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TreePlatform_Wood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TreePlatform_Wood.PrimalItemStructure_TreePlatform_Wood_C.ExecuteUbergraph_PrimalItemStructure_TreePlatform_Wood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TreePlatform_Wood_C::ExecuteUbergraph_PrimalItemStructure_TreePlatform_Wood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TreePlatform_Wood.PrimalItemStructure_TreePlatform_Wood_C.ExecuteUbergraph_PrimalItemStructure_TreePlatform_Wood");

	UPrimalItemStructure_TreePlatform_Wood_C_ExecuteUbergraph_PrimalItemStructure_TreePlatform_Wood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
