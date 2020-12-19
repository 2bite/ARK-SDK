// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.UserConstructionScript
// ()

void ASupplyCrateSpawnInEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.UserConstructionScript");

	ASupplyCrateSpawnInEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateSpawnInEmitter_C::ExecuteUbergraph_SupplyCrateSpawnInEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter");

	ASupplyCrateSpawnInEmitter_C_ExecuteUbergraph_SupplyCrateSpawnInEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
