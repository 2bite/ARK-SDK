// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_04_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifact_04.PrimalItemArtifact_04_C.ExecuteUbergraph_PrimalItemArtifact_04
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifact_04_C::ExecuteUbergraph_PrimalItemArtifact_04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifact_04.PrimalItemArtifact_04_C.ExecuteUbergraph_PrimalItemArtifact_04");

	UPrimalItemArtifact_04_C_ExecuteUbergraph_PrimalItemArtifact_04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
