// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter35_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateSpawnInEmitter35.SupplyCrateSpawnInEmitter35_C.UserConstructionScript
// ()

void ASupplyCrateSpawnInEmitter35_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter35.SupplyCrateSpawnInEmitter35_C.UserConstructionScript");

	ASupplyCrateSpawnInEmitter35_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateSpawnInEmitter35.SupplyCrateSpawnInEmitter35_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter35
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateSpawnInEmitter35_C::ExecuteUbergraph_SupplyCrateSpawnInEmitter35(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter35.SupplyCrateSpawnInEmitter35_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter35");

	ASupplyCrateSpawnInEmitter35_C_ExecuteUbergraph_SupplyCrateSpawnInEmitter35_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
