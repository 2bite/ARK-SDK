// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifact_Extinction_DesertKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifact_Extinction_DesertKaiju.PrimalItemArtifact_Extinction_DesertKaiju_C.ExecuteUbergraph_PrimalItemArtifact_Extinction_DesertKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifact_Extinction_DesertKaiju_C::ExecuteUbergraph_PrimalItemArtifact_Extinction_DesertKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifact_Extinction_DesertKaiju.PrimalItemArtifact_Extinction_DesertKaiju_C.ExecuteUbergraph_PrimalItemArtifact_Extinction_DesertKaiju");

	UPrimalItemArtifact_Extinction_DesertKaiju_C_ExecuteUbergraph_PrimalItemArtifact_Extinction_DesertKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
