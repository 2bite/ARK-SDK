// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DeathItemCache_PlayerDeath_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C.UserConstructionScript
// ()

void ADeathItemCache_PlayerDeath_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C.UserConstructionScript");

	ADeathItemCache_PlayerDeath_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C.ExecuteUbergraph_DeathItemCache_PlayerDeath
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADeathItemCache_PlayerDeath_C::ExecuteUbergraph_DeathItemCache_PlayerDeath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DeathItemCache_PlayerDeath.DeathItemCache_PlayerDeath_C.ExecuteUbergraph_DeathItemCache_PlayerDeath");

	ADeathItemCache_PlayerDeath_C_ExecuteUbergraph_DeathItemCache_PlayerDeath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
