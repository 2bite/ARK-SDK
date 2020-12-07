// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_03_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifact_03.PrimalItemArtifact_03_C.ExecuteUbergraph_PrimalItemArtifact_03
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifact_03_C::ExecuteUbergraph_PrimalItemArtifact_03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifact_03.PrimalItemArtifact_03_C.ExecuteUbergraph_PrimalItemArtifact_03");

	UPrimalItemArtifact_03_C_ExecuteUbergraph_PrimalItemArtifact_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
