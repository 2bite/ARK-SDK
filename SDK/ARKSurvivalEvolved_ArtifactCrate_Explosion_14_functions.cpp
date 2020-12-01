// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_Explosion_14_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArtifactCrate_Explosion_14.ArtifactCrate_Explosion_13_C.UserConstructionScript
// ()

void AArtifactCrate_Explosion_13_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArtifactCrate_Explosion_14.ArtifactCrate_Explosion_13_C.UserConstructionScript");

	AArtifactCrate_Explosion_13_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArtifactCrate_Explosion_14.ArtifactCrate_Explosion_13_C.ExecuteUbergraph_ArtifactCrate_Explosion_14
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArtifactCrate_Explosion_13_C::ExecuteUbergraph_ArtifactCrate_Explosion_14(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArtifactCrate_Explosion_14.ArtifactCrate_Explosion_13_C.ExecuteUbergraph_ArtifactCrate_Explosion_14");

	AArtifactCrate_Explosion_13_C_ExecuteUbergraph_ArtifactCrate_Explosion_14_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
