// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrate_Level25_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrate_Level25.SupplyCrate_Level25_C.UserConstructionScript
// ()

void ASupplyCrate_Level25_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Level25.SupplyCrate_Level25_C.UserConstructionScript");

	ASupplyCrate_Level25_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrate_Level25.SupplyCrate_Level25_C.ExecuteUbergraph_SupplyCrate_Level25
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrate_Level25_C::ExecuteUbergraph_SupplyCrate_Level25(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrate_Level25.SupplyCrate_Level25_C.ExecuteUbergraph_SupplyCrate_Level25");

	ASupplyCrate_Level25_C_ExecuteUbergraph_SupplyCrate_Level25_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
