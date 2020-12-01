// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_Explosion_06_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArtifactCrate_Explosion_06.ArtifactCrate_Explosion_06_C.UserConstructionScript
// ()

void AArtifactCrate_Explosion_06_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArtifactCrate_Explosion_06.ArtifactCrate_Explosion_06_C.UserConstructionScript");

	AArtifactCrate_Explosion_06_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArtifactCrate_Explosion_06.ArtifactCrate_Explosion_06_C.ExecuteUbergraph_ArtifactCrate_Explosion_06
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArtifactCrate_Explosion_06_C::ExecuteUbergraph_ArtifactCrate_Explosion_06(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArtifactCrate_Explosion_06.ArtifactCrate_Explosion_06_C.ExecuteUbergraph_ArtifactCrate_Explosion_06");

	AArtifactCrate_Explosion_06_C_ExecuteUbergraph_ArtifactCrate_Explosion_06_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
