// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter25_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateSpawnInEmitter25.SupplyCrateSpawnInEmitter25_C.UserConstructionScript
// ()

void ASupplyCrateSpawnInEmitter25_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter25.SupplyCrateSpawnInEmitter25_C.UserConstructionScript");

	ASupplyCrateSpawnInEmitter25_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateSpawnInEmitter25.SupplyCrateSpawnInEmitter25_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter25
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateSpawnInEmitter25_C::ExecuteUbergraph_SupplyCrateSpawnInEmitter25(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter25.SupplyCrateSpawnInEmitter25_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter25");

	ASupplyCrateSpawnInEmitter25_C_ExecuteUbergraph_SupplyCrateSpawnInEmitter25_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
