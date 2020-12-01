// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_DinoHat_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_DinoHat.SupplyCrate_DinoHat_C.UserConstructionScript
// ()

void ASupplyCrate_DinoHat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_DinoHat.SupplyCrate_DinoHat_C.UserConstructionScript");

	ASupplyCrate_DinoHat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_DinoHat.SupplyCrate_DinoHat_C.ExecuteUbergraph_SupplyCrate_DinoHat
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_DinoHat_C::ExecuteUbergraph_SupplyCrate_DinoHat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_DinoHat.SupplyCrate_DinoHat_C.ExecuteUbergraph_SupplyCrate_DinoHat");

	ASupplyCrate_DinoHat_C_ExecuteUbergraph_SupplyCrate_DinoHat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
