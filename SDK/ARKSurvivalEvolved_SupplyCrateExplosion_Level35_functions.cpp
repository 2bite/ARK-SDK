// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Level35_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosion_Level35.SupplyCrateExplosion_Level35_C.UserConstructionScript
// ()

void ASupplyCrateExplosion_Level35_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Level35.SupplyCrateExplosion_Level35_C.UserConstructionScript");

	ASupplyCrateExplosion_Level35_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosion_Level35.SupplyCrateExplosion_Level35_C.ExecuteUbergraph_SupplyCrateExplosion_Level35
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosion_Level35_C::ExecuteUbergraph_SupplyCrateExplosion_Level35(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Level35.SupplyCrateExplosion_Level35_C.ExecuteUbergraph_SupplyCrateExplosion_Level35");

	ASupplyCrateExplosion_Level35_C_ExecuteUbergraph_SupplyCrateExplosion_Level35_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
