// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateEmitter60_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateEmitter60.SupplyCrateEmitter60_C.UserConstructionScript
// ()

void ASupplyCrateEmitter60_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter60.SupplyCrateEmitter60_C.UserConstructionScript");

	ASupplyCrateEmitter60_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateEmitter60.SupplyCrateEmitter60_C.ExecuteUbergraph_SupplyCrateEmitter60
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateEmitter60_C::ExecuteUbergraph_SupplyCrateEmitter60(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter60.SupplyCrateEmitter60_C.ExecuteUbergraph_SupplyCrateEmitter60");

	ASupplyCrateEmitter60_C_ExecuteUbergraph_SupplyCrateEmitter60_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
