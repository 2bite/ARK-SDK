// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Level60_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosion_Level60.SupplyCrateExplosion_Level60_C.UserConstructionScript
// ()

void ASupplyCrateExplosion_Level60_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Level60.SupplyCrateExplosion_Level60_C.UserConstructionScript");

	ASupplyCrateExplosion_Level60_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosion_Level60.SupplyCrateExplosion_Level60_C.ExecuteUbergraph_SupplyCrateExplosion_Level60
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosion_Level60_C::ExecuteUbergraph_SupplyCrateExplosion_Level60(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Level60.SupplyCrateExplosion_Level60_C.ExecuteUbergraph_SupplyCrateExplosion_Level60");

	ASupplyCrateExplosion_Level60_C_ExecuteUbergraph_SupplyCrateExplosion_Level60_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
