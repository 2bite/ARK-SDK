// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateEmitter15_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateEmitter15.SupplyCrateEmitter15_C.UserConstructionScript
// ()

void ASupplyCrateEmitter15_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter15.SupplyCrateEmitter15_C.UserConstructionScript");

	ASupplyCrateEmitter15_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateEmitter15.SupplyCrateEmitter15_C.ExecuteUbergraph_SupplyCrateEmitter15
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateEmitter15_C::ExecuteUbergraph_SupplyCrateEmitter15(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter15.SupplyCrateEmitter15_C.ExecuteUbergraph_SupplyCrateEmitter15");

	ASupplyCrateEmitter15_C_ExecuteUbergraph_SupplyCrateEmitter15_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
