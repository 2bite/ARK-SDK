// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_IceCaveTier2_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_IceCaveTier2.SupplyCrate_IceCaveTier2_C.UserConstructionScript
// ()

void ASupplyCrate_IceCaveTier2_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_IceCaveTier2.SupplyCrate_IceCaveTier2_C.UserConstructionScript");

	ASupplyCrate_IceCaveTier2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_IceCaveTier2.SupplyCrate_IceCaveTier2_C.ExecuteUbergraph_SupplyCrate_IceCaveTier2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_IceCaveTier2_C::ExecuteUbergraph_SupplyCrate_IceCaveTier2(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_IceCaveTier2.SupplyCrate_IceCaveTier2_C.ExecuteUbergraph_SupplyCrate_IceCaveTier2");

	ASupplyCrate_IceCaveTier2_C_ExecuteUbergraph_SupplyCrate_IceCaveTier2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif