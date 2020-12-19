// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootCrate_Explosion_Blue_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootCrate_Explosion_Blue.LootCrate_Explosion_Blue_C.UserConstructionScript
// ()

void ALootCrate_Explosion_Blue_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootCrate_Explosion_Blue.LootCrate_Explosion_Blue_C.UserConstructionScript");

	ALootCrate_Explosion_Blue_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootCrate_Explosion_Blue.LootCrate_Explosion_Blue_C.ExecuteUbergraph_LootCrate_Explosion_Blue
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALootCrate_Explosion_Blue_C::ExecuteUbergraph_LootCrate_Explosion_Blue(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootCrate_Explosion_Blue.LootCrate_Explosion_Blue_C.ExecuteUbergraph_LootCrate_Explosion_Blue");

	ALootCrate_Explosion_Blue_C_ExecuteUbergraph_LootCrate_Explosion_Blue_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
