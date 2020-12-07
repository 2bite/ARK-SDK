// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_TekReplicator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_TekReplicator.PrimalItemStructure_TekReplicator_C.ExecuteUbergraph_PrimalItemStructure_TekReplicator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_TekReplicator_C::ExecuteUbergraph_PrimalItemStructure_TekReplicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_TekReplicator.PrimalItemStructure_TekReplicator_C.ExecuteUbergraph_PrimalItemStructure_TekReplicator");

	UPrimalItemStructure_TekReplicator_C_ExecuteUbergraph_PrimalItemStructure_TekReplicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
