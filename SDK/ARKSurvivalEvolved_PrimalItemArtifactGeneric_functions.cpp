// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArtifactGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArtifactGeneric.PrimalItemArtifactGeneric_C.ExecuteUbergraph_PrimalItemArtifactGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArtifactGeneric_C::ExecuteUbergraph_PrimalItemArtifactGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArtifactGeneric.PrimalItemArtifactGeneric_C.ExecuteUbergraph_PrimalItemArtifactGeneric");

	UPrimalItemArtifactGeneric_C_ExecuteUbergraph_PrimalItemArtifactGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
