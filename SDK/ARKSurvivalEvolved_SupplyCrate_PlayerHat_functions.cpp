// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_PlayerHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_PlayerHat.SupplyCrate_PlayerHat_C.UserConstructionScript
// ()

void ASupplyCrate_PlayerHat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_PlayerHat.SupplyCrate_PlayerHat_C.UserConstructionScript");

	ASupplyCrate_PlayerHat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_PlayerHat.SupplyCrate_PlayerHat_C.ExecuteUbergraph_SupplyCrate_PlayerHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_PlayerHat_C::ExecuteUbergraph_SupplyCrate_PlayerHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_PlayerHat.SupplyCrate_PlayerHat_C.ExecuteUbergraph_SupplyCrate_PlayerHat");

	ASupplyCrate_PlayerHat_C_ExecuteUbergraph_SupplyCrate_PlayerHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
