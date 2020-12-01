// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter60_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateSpawnInEmitter60.SupplyCrateSpawnInEmitter60_C.UserConstructionScript
// ()

void ASupplyCrateSpawnInEmitter60_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter60.SupplyCrateSpawnInEmitter60_C.UserConstructionScript");

	ASupplyCrateSpawnInEmitter60_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateSpawnInEmitter60.SupplyCrateSpawnInEmitter60_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter60
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateSpawnInEmitter60_C::ExecuteUbergraph_SupplyCrateSpawnInEmitter60(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter60.SupplyCrateSpawnInEmitter60_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter60");

	ASupplyCrateSpawnInEmitter60_C_ExecuteUbergraph_SupplyCrateSpawnInEmitter60_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
