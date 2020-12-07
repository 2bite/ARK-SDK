// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosion_Hard.SupplyCrateExplosion_Hard_C.UserConstructionScript
// ()

void ASupplyCrateExplosion_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Hard.SupplyCrateExplosion_Hard_C.UserConstructionScript");

	ASupplyCrateExplosion_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosion_Hard.SupplyCrateExplosion_Hard_C.ExecuteUbergraph_SupplyCrateExplosion_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosion_Hard_C::ExecuteUbergraph_SupplyCrateExplosion_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Hard.SupplyCrateExplosion_Hard_C.ExecuteUbergraph_SupplyCrateExplosion_Hard");

	ASupplyCrateExplosion_Hard_C_ExecuteUbergraph_SupplyCrateExplosion_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
