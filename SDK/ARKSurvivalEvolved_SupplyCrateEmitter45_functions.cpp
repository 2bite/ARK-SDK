// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateEmitter45_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateEmitter45.SupplyCrateEmitter45_C.UserConstructionScript
// ()

void ASupplyCrateEmitter45_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter45.SupplyCrateEmitter45_C.UserConstructionScript");

	ASupplyCrateEmitter45_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateEmitter45.SupplyCrateEmitter45_C.ExecuteUbergraph_SupplyCrateEmitter45
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateEmitter45_C::ExecuteUbergraph_SupplyCrateEmitter45(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter45.SupplyCrateEmitter45_C.ExecuteUbergraph_SupplyCrateEmitter45");

	ASupplyCrateEmitter45_C_ExecuteUbergraph_SupplyCrateEmitter45_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
