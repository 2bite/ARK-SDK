// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateEmitter25_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateEmitter25.SupplyCrateEmitter25_C.UserConstructionScript
// ()

void ASupplyCrateEmitter25_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter25.SupplyCrateEmitter25_C.UserConstructionScript");

	ASupplyCrateEmitter25_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateEmitter25.SupplyCrateEmitter25_C.ExecuteUbergraph_SupplyCrateEmitter25
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateEmitter25_C::ExecuteUbergraph_SupplyCrateEmitter25(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateEmitter25.SupplyCrateEmitter25_C.ExecuteUbergraph_SupplyCrateEmitter25");

	ASupplyCrateEmitter25_C_ExecuteUbergraph_SupplyCrateEmitter25_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
