// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_09_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifact_09.PrimalItemArtifact_09_C.ExecuteUbergraph_PrimalItemArtifact_09
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifact_09_C::ExecuteUbergraph_PrimalItemArtifact_09(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifact_09.PrimalItemArtifact_09_C.ExecuteUbergraph_PrimalItemArtifact_09");

	UPrimalItemArtifact_09_C_ExecuteUbergraph_PrimalItemArtifact_09_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
