// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifactSE_01_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifactSE_01.PrimalItemArtifactSE_01_C.ExecuteUbergraph_PrimalItemArtifactSE_01
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifactSE_01_C::ExecuteUbergraph_PrimalItemArtifactSE_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifactSE_01.PrimalItemArtifactSE_01_C.ExecuteUbergraph_PrimalItemArtifactSE_01");

	UPrimalItemArtifactSE_01_C_ExecuteUbergraph_PrimalItemArtifactSE_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
