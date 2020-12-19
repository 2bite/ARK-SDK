// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SupplyCrateExplosion_Level03_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SupplyCrateExplosion_Level03.SupplyCrateExplosion_Level03_C.UserConstructionScript
// ()

void ASupplyCrateExplosion_Level03_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Level03.SupplyCrateExplosion_Level03_C.UserConstructionScript");

	ASupplyCrateExplosion_Level03_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SupplyCrateExplosion_Level03.SupplyCrateExplosion_Level03_C.ExecuteUbergraph_SupplyCrateExplosion_Level03
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASupplyCrateExplosion_Level03_C::ExecuteUbergraph_SupplyCrateExplosion_Level03(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SupplyCrateExplosion_Level03.SupplyCrateExplosion_Level03_C.ExecuteUbergraph_SupplyCrateExplosion_Level03");

	ASupplyCrateExplosion_Level03_C_ExecuteUbergraph_SupplyCrateExplosion_Level03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
