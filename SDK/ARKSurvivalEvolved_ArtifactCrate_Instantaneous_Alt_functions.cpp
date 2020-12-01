// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ArtifactCrate_Instantaneous_Alt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ArtifactCrate_Instantaneous_Alt.ArtifactCrate_Instantaneous_Alt_C.UserConstructionScript
// ()

void AArtifactCrate_Instantaneous_Alt_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ArtifactCrate_Instantaneous_Alt.ArtifactCrate_Instantaneous_Alt_C.UserConstructionScript");

	AArtifactCrate_Instantaneous_Alt_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ArtifactCrate_Instantaneous_Alt.ArtifactCrate_Instantaneous_Alt_C.ExecuteUbergraph_ArtifactCrate_Instantaneous_Alt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AArtifactCrate_Instantaneous_Alt_C::ExecuteUbergraph_ArtifactCrate_Instantaneous_Alt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ArtifactCrate_Instantaneous_Alt.ArtifactCrate_Instantaneous_Alt_C.ExecuteUbergraph_ArtifactCrate_Instantaneous_Alt");

	AArtifactCrate_Instantaneous_Alt_C_ExecuteUbergraph_ArtifactCrate_Instantaneous_Alt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
