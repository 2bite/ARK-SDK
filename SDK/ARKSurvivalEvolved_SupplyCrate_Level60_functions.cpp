// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Level60_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_Level60.SupplyCrate_Level60_C.UserConstructionScript
// ()

void ASupplyCrate_Level60_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Level60.SupplyCrate_Level60_C.UserConstructionScript");

	ASupplyCrate_Level60_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Level60.SupplyCrate_Level60_C.ExecuteUbergraph_SupplyCrate_Level60
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Level60_C::ExecuteUbergraph_SupplyCrate_Level60(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Level60.SupplyCrate_Level60_C.ExecuteUbergraph_SupplyCrate_Level60");

	ASupplyCrate_Level60_C_ExecuteUbergraph_SupplyCrate_Level60_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
