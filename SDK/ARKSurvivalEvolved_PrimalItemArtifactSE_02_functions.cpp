// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifactSE_02_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifactSE_02.PrimalItemArtifactSE_02_C.ExecuteUbergraph_PrimalItemArtifactSE_02
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifactSE_02_C::ExecuteUbergraph_PrimalItemArtifactSE_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifactSE_02.PrimalItemArtifactSE_02_C.ExecuteUbergraph_PrimalItemArtifactSE_02");

	UPrimalItemArtifactSE_02_C_ExecuteUbergraph_PrimalItemArtifactSE_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
