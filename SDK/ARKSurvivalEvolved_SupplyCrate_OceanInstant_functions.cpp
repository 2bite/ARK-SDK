// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_OceanInstant_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_OceanInstant.SupplyCrate_OceanInstant_C.UserConstructionScript
// ()

void ASupplyCrate_OceanInstant_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_OceanInstant.SupplyCrate_OceanInstant_C.UserConstructionScript");

	ASupplyCrate_OceanInstant_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_OceanInstant.SupplyCrate_OceanInstant_C.ExecuteUbergraph_SupplyCrate_OceanInstant
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_OceanInstant_C::ExecuteUbergraph_SupplyCrate_OceanInstant(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_OceanInstant.SupplyCrate_OceanInstant_C.ExecuteUbergraph_SupplyCrate_OceanInstant");

	ASupplyCrate_OceanInstant_C_ExecuteUbergraph_SupplyCrate_OceanInstant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
