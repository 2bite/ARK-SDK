// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekReplicator_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekReplicator.EngramEntry_TekReplicator_C.ExecuteUbergraph_EngramEntry_TekReplicator
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekReplicator_C::ExecuteUbergraph_EngramEntry_TekReplicator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekReplicator.EngramEntry_TekReplicator_C.ExecuteUbergraph_EngramEntry_TekReplicator");

	UEngramEntry_TekReplicator_C_ExecuteUbergraph_EngramEntry_TekReplicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
