// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootCrate_Explosion_Green_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootCrate_Explosion_Green.LootCrate_Explosion_Green_C.UserConstructionScript
// ()

void ALootCrate_Explosion_Green_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootCrate_Explosion_Green.LootCrate_Explosion_Green_C.UserConstructionScript");

	ALootCrate_Explosion_Green_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootCrate_Explosion_Green.LootCrate_Explosion_Green_C.ExecuteUbergraph_LootCrate_Explosion_Green
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALootCrate_Explosion_Green_C::ExecuteUbergraph_LootCrate_Explosion_Green(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootCrate_Explosion_Green.LootCrate_Explosion_Green_C.ExecuteUbergraph_LootCrate_Explosion_Green");

	ALootCrate_Explosion_Green_C_ExecuteUbergraph_LootCrate_Explosion_Green_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
