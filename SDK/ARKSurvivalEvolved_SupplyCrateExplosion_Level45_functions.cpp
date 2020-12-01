// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Level45_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosion_Level45.SupplyCrateExplosion_Level45_C.UserConstructionScript
// ()

void ASupplyCrateExplosion_Level45_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Level45.SupplyCrateExplosion_Level45_C.UserConstructionScript");

	ASupplyCrateExplosion_Level45_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosion_Level45.SupplyCrateExplosion_Level45_C.ExecuteUbergraph_SupplyCrateExplosion_Level45
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosion_Level45_C::ExecuteUbergraph_SupplyCrateExplosion_Level45(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Level45.SupplyCrateExplosion_Level45_C.ExecuteUbergraph_SupplyCrateExplosion_Level45");

	ASupplyCrateExplosion_Level45_C_ExecuteUbergraph_SupplyCrateExplosion_Level45_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
