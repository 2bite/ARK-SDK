// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosionArtifact_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosionArtifact.SupplyCrateExplosionArtifact_C.UserConstructionScript
// ()

void ASupplyCrateExplosionArtifact_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosionArtifact.SupplyCrateExplosionArtifact_C.UserConstructionScript");

	ASupplyCrateExplosionArtifact_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosionArtifact.SupplyCrateExplosionArtifact_C.ExecuteUbergraph_SupplyCrateExplosionArtifact
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosionArtifact_C::ExecuteUbergraph_SupplyCrateExplosionArtifact(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosionArtifact.SupplyCrateExplosionArtifact_C.ExecuteUbergraph_SupplyCrateExplosionArtifact");

	ASupplyCrateExplosionArtifact_C_ExecuteUbergraph_SupplyCrateExplosionArtifact_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
