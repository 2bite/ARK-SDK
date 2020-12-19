// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Level45_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_Level45.SupplyCrate_Level45_C.UserConstructionScript
// ()

void ASupplyCrate_Level45_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Level45.SupplyCrate_Level45_C.UserConstructionScript");

	ASupplyCrate_Level45_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Level45.SupplyCrate_Level45_C.ExecuteUbergraph_SupplyCrate_Level45
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Level45_C::ExecuteUbergraph_SupplyCrate_Level45(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Level45.SupplyCrate_Level45_C.ExecuteUbergraph_SupplyCrate_Level45");

	ASupplyCrate_Level45_C_ExecuteUbergraph_SupplyCrate_Level45_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
