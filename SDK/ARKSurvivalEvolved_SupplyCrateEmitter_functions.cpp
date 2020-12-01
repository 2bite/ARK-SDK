// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateEmitter_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateEmitter.SupplyCrateEmitter_C.UserConstructionScript
// ()

void ASupplyCrateEmitter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter.SupplyCrateEmitter_C.UserConstructionScript");

	ASupplyCrateEmitter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateEmitter.SupplyCrateEmitter_C.ExecuteUbergraph_SupplyCrateEmitter
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateEmitter_C::ExecuteUbergraph_SupplyCrateEmitter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter.SupplyCrateEmitter_C.ExecuteUbergraph_SupplyCrateEmitter");

	ASupplyCrateEmitter_C_ExecuteUbergraph_SupplyCrateEmitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
