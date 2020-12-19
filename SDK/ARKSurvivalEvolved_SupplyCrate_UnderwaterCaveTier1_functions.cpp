// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_UnderwaterCaveTier1_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_UnderwaterCaveTier1.SupplyCrate_UnderwaterCaveTier1_C.UserConstructionScript
// ()

void ASupplyCrate_UnderwaterCaveTier1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_UnderwaterCaveTier1.SupplyCrate_UnderwaterCaveTier1_C.UserConstructionScript");

	ASupplyCrate_UnderwaterCaveTier1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_UnderwaterCaveTier1.SupplyCrate_UnderwaterCaveTier1_C.ExecuteUbergraph_SupplyCrate_UnderwaterCaveTier1
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_UnderwaterCaveTier1_C::ExecuteUbergraph_SupplyCrate_UnderwaterCaveTier1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_UnderwaterCaveTier1.SupplyCrate_UnderwaterCaveTier1_C.ExecuteUbergraph_SupplyCrate_UnderwaterCaveTier1");

	ASupplyCrate_UnderwaterCaveTier1_C_ExecuteUbergraph_SupplyCrate_UnderwaterCaveTier1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
