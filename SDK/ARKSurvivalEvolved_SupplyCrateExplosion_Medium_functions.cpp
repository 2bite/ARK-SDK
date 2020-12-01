// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosion_Medium.SupplyCrateExplosion_Medium_C.UserConstructionScript
// ()

void ASupplyCrateExplosion_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Medium.SupplyCrateExplosion_Medium_C.UserConstructionScript");

	ASupplyCrateExplosion_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosion_Medium.SupplyCrateExplosion_Medium_C.ExecuteUbergraph_SupplyCrateExplosion_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosion_Medium_C::ExecuteUbergraph_SupplyCrateExplosion_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Medium.SupplyCrateExplosion_Medium_C.ExecuteUbergraph_SupplyCrateExplosion_Medium");

	ASupplyCrateExplosion_Medium_C_ExecuteUbergraph_SupplyCrateExplosion_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
