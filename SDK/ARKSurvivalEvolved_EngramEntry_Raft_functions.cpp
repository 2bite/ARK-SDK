// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Raft_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Raft.EngramEntry_Raft_C.ExecuteUbergraph_EngramEntry_Raft
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Raft_C::ExecuteUbergraph_EngramEntry_Raft(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Raft.EngramEntry_Raft_C.ExecuteUbergraph_EngramEntry_Raft");

	UEngramEntry_Raft_C_ExecuteUbergraph_EngramEntry_Raft_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
