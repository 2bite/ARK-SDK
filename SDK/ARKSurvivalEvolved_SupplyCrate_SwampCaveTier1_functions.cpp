// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_SwampCaveTier1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_SwampCaveTier1.SupplyCrate_SwampCaveTier1_C.UserConstructionScript
// ()

void ASupplyCrate_SwampCaveTier1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_SwampCaveTier1.SupplyCrate_SwampCaveTier1_C.UserConstructionScript");

	ASupplyCrate_SwampCaveTier1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_SwampCaveTier1.SupplyCrate_SwampCaveTier1_C.ExecuteUbergraph_SupplyCrate_SwampCaveTier1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_SwampCaveTier1_C::ExecuteUbergraph_SupplyCrate_SwampCaveTier1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_SwampCaveTier1.SupplyCrate_SwampCaveTier1_C.ExecuteUbergraph_SupplyCrate_SwampCaveTier1");

	ASupplyCrate_SwampCaveTier1_C_ExecuteUbergraph_SupplyCrate_SwampCaveTier1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
