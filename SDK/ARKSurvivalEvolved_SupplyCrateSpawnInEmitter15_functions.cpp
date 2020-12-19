// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateSpawnInEmitter15_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateSpawnInEmitter15.SupplyCrateSpawnInEmitter15_C.UserConstructionScript
// ()

void ASupplyCrateSpawnInEmitter15_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter15.SupplyCrateSpawnInEmitter15_C.UserConstructionScript");

	ASupplyCrateSpawnInEmitter15_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateSpawnInEmitter15.SupplyCrateSpawnInEmitter15_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter15
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateSpawnInEmitter15_C::ExecuteUbergraph_SupplyCrateSpawnInEmitter15(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateSpawnInEmitter15.SupplyCrateSpawnInEmitter15_C.ExecuteUbergraph_SupplyCrateSpawnInEmitter15");

	ASupplyCrateSpawnInEmitter15_C_ExecuteUbergraph_SupplyCrateSpawnInEmitter15_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
