// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosion.SupplyCrateExplosion_C.UserConstructionScript
// ()

void ASupplyCrateExplosion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion.SupplyCrateExplosion_C.UserConstructionScript");

	ASupplyCrateExplosion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosion.SupplyCrateExplosion_C.ExecuteUbergraph_SupplyCrateExplosion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosion_C::ExecuteUbergraph_SupplyCrateExplosion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion.SupplyCrateExplosion_C.ExecuteUbergraph_SupplyCrateExplosion");

	ASupplyCrateExplosion_C_ExecuteUbergraph_SupplyCrateExplosion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
