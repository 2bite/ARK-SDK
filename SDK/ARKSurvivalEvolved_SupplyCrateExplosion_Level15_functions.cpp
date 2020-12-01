// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Level15_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosion_Level15.SupplyCrateExplosion_Level15_C.UserConstructionScript
// ()

void ASupplyCrateExplosion_Level15_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Level15.SupplyCrateExplosion_Level15_C.UserConstructionScript");

	ASupplyCrateExplosion_Level15_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosion_Level15.SupplyCrateExplosion_Level15_C.ExecuteUbergraph_SupplyCrateExplosion_Level15
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosion_Level15_C::ExecuteUbergraph_SupplyCrateExplosion_Level15(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Level15.SupplyCrateExplosion_Level15_C.ExecuteUbergraph_SupplyCrateExplosion_Level15");

	ASupplyCrateExplosion_Level15_C_ExecuteUbergraph_SupplyCrateExplosion_Level15_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
