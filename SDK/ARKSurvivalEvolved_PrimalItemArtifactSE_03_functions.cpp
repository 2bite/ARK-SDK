// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifactSE_03_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifactSE_03.PrimalItemArtifactSE_03_C.ExecuteUbergraph_PrimalItemArtifactSE_03
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifactSE_03_C::ExecuteUbergraph_PrimalItemArtifactSE_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifactSE_03.PrimalItemArtifactSE_03_C.ExecuteUbergraph_PrimalItemArtifactSE_03");

	UPrimalItemArtifactSE_03_C_ExecuteUbergraph_PrimalItemArtifactSE_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
