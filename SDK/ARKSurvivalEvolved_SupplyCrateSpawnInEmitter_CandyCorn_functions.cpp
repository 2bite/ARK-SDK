// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter_CandyCorn_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateSpawnInEmitter_CandyCorn.SupplyCrateSpawnInEmitter_CandyCorn_C.UserConstructionScript
// ()

void ASupplyCrateSpawnInEmitter_CandyCorn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter_CandyCorn.SupplyCrateSpawnInEmitter_CandyCorn_C.UserConstructionScript");

	ASupplyCrateSpawnInEmitter_CandyCorn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateSpawnInEmitter_CandyCorn.SupplyCrateSpawnInEmitter_CandyCorn_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter_CandyCorn
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateSpawnInEmitter_CandyCorn_C::ExecuteUbergraph_SupplyCrateSpawnInEmitter_CandyCorn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter_CandyCorn.SupplyCrateSpawnInEmitter_CandyCorn_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter_CandyCorn");

	ASupplyCrateSpawnInEmitter_CandyCorn_C_ExecuteUbergraph_SupplyCrateSpawnInEmitter_CandyCorn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
