// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_ForestKaiju_EX_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArtifactCrate_ForestKaiju_EX.ArtifactCrate_ForestKaiju_EX_C.UserConstructionScript
// ()

void AArtifactCrate_ForestKaiju_EX_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArtifactCrate_ForestKaiju_EX.ArtifactCrate_ForestKaiju_EX_C.UserConstructionScript");

	AArtifactCrate_ForestKaiju_EX_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArtifactCrate_ForestKaiju_EX.ArtifactCrate_ForestKaiju_EX_C.ExecuteUbergraph_ArtifactCrate_ForestKaiju_EX
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArtifactCrate_ForestKaiju_EX_C::ExecuteUbergraph_ArtifactCrate_ForestKaiju_EX(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArtifactCrate_ForestKaiju_EX.ArtifactCrate_ForestKaiju_EX_C.ExecuteUbergraph_ArtifactCrate_ForestKaiju_EX");

	AArtifactCrate_ForestKaiju_EX_C_ExecuteUbergraph_ArtifactCrate_ForestKaiju_EX_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
