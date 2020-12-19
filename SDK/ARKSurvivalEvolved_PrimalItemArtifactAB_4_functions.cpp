// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifactAB_4_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifactAB_4.PrimalItemArtifactAB_3_C.ExecuteUbergraph_PrimalItemArtifactAB_4
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifactAB_3_C::ExecuteUbergraph_PrimalItemArtifactAB_4(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifactAB_4.PrimalItemArtifactAB_3_C.ExecuteUbergraph_PrimalItemArtifactAB_4");

	UPrimalItemArtifactAB_3_C_ExecuteUbergraph_PrimalItemArtifactAB_4_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
