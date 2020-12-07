// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosion_Easy.SupplyCrateExplosion_Easy_C.UserConstructionScript
// ()

void ASupplyCrateExplosion_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Easy.SupplyCrateExplosion_Easy_C.UserConstructionScript");

	ASupplyCrateExplosion_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosion_Easy.SupplyCrateExplosion_Easy_C.ExecuteUbergraph_SupplyCrateExplosion_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosion_Easy_C::ExecuteUbergraph_SupplyCrateExplosion_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Easy.SupplyCrateExplosion_Easy_C.ExecuteUbergraph_SupplyCrateExplosion_Easy");

	ASupplyCrateExplosion_Easy_C_ExecuteUbergraph_SupplyCrateExplosion_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
