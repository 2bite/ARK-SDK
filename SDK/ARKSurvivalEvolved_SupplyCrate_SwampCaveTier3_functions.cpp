// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_SwampCaveTier3_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_SwampCaveTier3.SupplyCrate_SwampCaveTier3_C.UserConstructionScript
// ()

void ASupplyCrate_SwampCaveTier3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_SwampCaveTier3.SupplyCrate_SwampCaveTier3_C.UserConstructionScript");

	ASupplyCrate_SwampCaveTier3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_SwampCaveTier3.SupplyCrate_SwampCaveTier3_C.ExecuteUbergraph_SupplyCrate_SwampCaveTier3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_SwampCaveTier3_C::ExecuteUbergraph_SupplyCrate_SwampCaveTier3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_SwampCaveTier3.SupplyCrate_SwampCaveTier3_C.ExecuteUbergraph_SupplyCrate_SwampCaveTier3");

	ASupplyCrate_SwampCaveTier3_C_ExecuteUbergraph_SupplyCrate_SwampCaveTier3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
