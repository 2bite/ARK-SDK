// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateEmitter35_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateEmitter35.SupplyCrateEmitter35_C.UserConstructionScript
// ()

void ASupplyCrateEmitter35_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter35.SupplyCrateEmitter35_C.UserConstructionScript");

	ASupplyCrateEmitter35_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateEmitter35.SupplyCrateEmitter35_C.ExecuteUbergraph_SupplyCrateEmitter35
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateEmitter35_C::ExecuteUbergraph_SupplyCrateEmitter35(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter35.SupplyCrateEmitter35_C.ExecuteUbergraph_SupplyCrateEmitter35");

	ASupplyCrateEmitter35_C_ExecuteUbergraph_SupplyCrateEmitter35_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
