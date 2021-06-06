// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_Extinction_ForestKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifact_Extinction_ForestKaiju.PrimalItemArtifact_Extinction_ForestKaiju_C.ExecuteUbergraph_PrimalItemArtifact_Extinction_ForestKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifact_Extinction_ForestKaiju_C::ExecuteUbergraph_PrimalItemArtifact_Extinction_ForestKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifact_Extinction_ForestKaiju.PrimalItemArtifact_Extinction_ForestKaiju_C.ExecuteUbergraph_PrimalItemArtifact_Extinction_ForestKaiju");

	UPrimalItemArtifact_Extinction_ForestKaiju_C_ExecuteUbergraph_PrimalItemArtifact_Extinction_ForestKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
