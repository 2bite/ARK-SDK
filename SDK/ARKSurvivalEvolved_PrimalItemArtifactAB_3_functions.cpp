// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifactAB_3_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifactAB_3.PrimalItemArtifactAB_2_C.ExecuteUbergraph_PrimalItemArtifactAB_3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifactAB_2_C::ExecuteUbergraph_PrimalItemArtifactAB_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifactAB_3.PrimalItemArtifactAB_2_C.ExecuteUbergraph_PrimalItemArtifactAB_3");

	UPrimalItemArtifactAB_2_C_ExecuteUbergraph_PrimalItemArtifactAB_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
