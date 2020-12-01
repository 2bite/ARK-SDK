// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Level15_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_Level15.SupplyCrate_Level15_C.UserConstructionScript
// ()

void ASupplyCrate_Level15_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Level15.SupplyCrate_Level15_C.UserConstructionScript");

	ASupplyCrate_Level15_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Level15.SupplyCrate_Level15_C.ExecuteUbergraph_SupplyCrate_Level15
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Level15_C::ExecuteUbergraph_SupplyCrate_Level15(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Level15.SupplyCrate_Level15_C.ExecuteUbergraph_SupplyCrate_Level15");

	ASupplyCrate_Level15_C_ExecuteUbergraph_SupplyCrate_Level15_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
