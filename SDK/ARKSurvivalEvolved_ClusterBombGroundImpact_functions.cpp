// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ClusterBombGroundImpact_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ClusterBombGroundImpact.ClusterBombGroundImpact_C.UserConstructionScript
// ()

void AClusterBombGroundImpact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ClusterBombGroundImpact.ClusterBombGroundImpact_C.UserConstructionScript");

	AClusterBombGroundImpact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ClusterBombGroundImpact.ClusterBombGroundImpact_C.ExecuteUbergraph_ClusterBombGroundImpact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AClusterBombGroundImpact_C::ExecuteUbergraph_ClusterBombGroundImpact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ClusterBombGroundImpact.ClusterBombGroundImpact_C.ExecuteUbergraph_ClusterBombGroundImpact");

	AClusterBombGroundImpact_C_ExecuteUbergraph_ClusterBombGroundImpact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
