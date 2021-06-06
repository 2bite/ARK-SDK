// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_12_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifact_12.PrimalItemArtifact_11_C.ExecuteUbergraph_PrimalItemArtifact_12
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifact_11_C::ExecuteUbergraph_PrimalItemArtifact_12(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifact_12.PrimalItemArtifact_11_C.ExecuteUbergraph_PrimalItemArtifact_12");

	UPrimalItemArtifact_11_C_ExecuteUbergraph_PrimalItemArtifact_12_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
