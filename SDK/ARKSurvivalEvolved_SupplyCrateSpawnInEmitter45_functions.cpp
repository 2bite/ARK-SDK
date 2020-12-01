// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter45_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateSpawnInEmitter45.SupplyCrateSpawnInEmitter45_C.UserConstructionScript
// ()

void ASupplyCrateSpawnInEmitter45_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter45.SupplyCrateSpawnInEmitter45_C.UserConstructionScript");

	ASupplyCrateSpawnInEmitter45_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateSpawnInEmitter45.SupplyCrateSpawnInEmitter45_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter45
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateSpawnInEmitter45_C::ExecuteUbergraph_SupplyCrateSpawnInEmitter45(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter45.SupplyCrateSpawnInEmitter45_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter45");

	ASupplyCrateSpawnInEmitter45_C_ExecuteUbergraph_SupplyCrateSpawnInEmitter45_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
