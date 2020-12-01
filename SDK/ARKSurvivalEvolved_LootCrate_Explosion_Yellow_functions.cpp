// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LootCrate_Explosion_Yellow_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LootCrate_Explosion_Yellow.LootCrate_Explosion_Yellow_C.UserConstructionScript
// ()

void ALootCrate_Explosion_Yellow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LootCrate_Explosion_Yellow.LootCrate_Explosion_Yellow_C.UserConstructionScript");

	ALootCrate_Explosion_Yellow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LootCrate_Explosion_Yellow.LootCrate_Explosion_Yellow_C.ExecuteUbergraph_LootCrate_Explosion_Yellow
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ALootCrate_Explosion_Yellow_C::ExecuteUbergraph_LootCrate_Explosion_Yellow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function LootCrate_Explosion_Yellow.LootCrate_Explosion_Yellow_C.ExecuteUbergraph_LootCrate_Explosion_Yellow");

	ALootCrate_Explosion_Yellow_C_ExecuteUbergraph_LootCrate_Explosion_Yellow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
