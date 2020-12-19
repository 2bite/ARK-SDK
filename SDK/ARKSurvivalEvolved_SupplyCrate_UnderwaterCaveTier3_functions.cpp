// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_UnderwaterCaveTier3_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_UnderwaterCaveTier3.SupplyCrate_UnderwaterCaveTier3_C.UserConstructionScript
// ()

void ASupplyCrate_UnderwaterCaveTier3_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_UnderwaterCaveTier3.SupplyCrate_UnderwaterCaveTier3_C.UserConstructionScript");

	ASupplyCrate_UnderwaterCaveTier3_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_UnderwaterCaveTier3.SupplyCrate_UnderwaterCaveTier3_C.ExecuteUbergraph_SupplyCrate_UnderwaterCaveTier3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_UnderwaterCaveTier3_C::ExecuteUbergraph_SupplyCrate_UnderwaterCaveTier3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_UnderwaterCaveTier3.SupplyCrate_UnderwaterCaveTier3_C.ExecuteUbergraph_SupplyCrate_UnderwaterCaveTier3");

	ASupplyCrate_UnderwaterCaveTier3_C_ExecuteUbergraph_SupplyCrate_UnderwaterCaveTier3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
