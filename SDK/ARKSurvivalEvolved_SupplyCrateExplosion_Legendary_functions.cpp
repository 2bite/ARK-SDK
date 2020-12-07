// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Legendary_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosion_Legendary.SupplyCrateExplosion_Legendary_C.UserConstructionScript
// ()

void ASupplyCrateExplosion_Legendary_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Legendary.SupplyCrateExplosion_Legendary_C.UserConstructionScript");

	ASupplyCrateExplosion_Legendary_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosion_Legendary.SupplyCrateExplosion_Legendary_C.ExecuteUbergraph_SupplyCrateExplosion_Legendary
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosion_Legendary_C::ExecuteUbergraph_SupplyCrateExplosion_Legendary(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Legendary.SupplyCrateExplosion_Legendary_C.ExecuteUbergraph_SupplyCrateExplosion_Legendary");

	ASupplyCrateExplosion_Legendary_C_ExecuteUbergraph_SupplyCrateExplosion_Legendary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
