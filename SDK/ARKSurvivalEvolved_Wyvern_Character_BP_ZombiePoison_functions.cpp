// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_Character_BP_ZombiePoison_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Wyvern_Character_BP_ZombiePoison.Wyvern_Character_BP_ZombiePoison_C.UserConstructionScript
// ()

void AWyvern_Character_BP_ZombiePoison_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombiePoison.Wyvern_Character_BP_ZombiePoison_C.UserConstructionScript");

	AWyvern_Character_BP_ZombiePoison_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Wyvern_Character_BP_ZombiePoison.Wyvern_Character_BP_ZombiePoison_C.ExecuteUbergraph_Wyvern_Character_BP_ZombiePoison
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AWyvern_Character_BP_ZombiePoison_C::ExecuteUbergraph_Wyvern_Character_BP_ZombiePoison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Wyvern_Character_BP_ZombiePoison.Wyvern_Character_BP_ZombiePoison_C.ExecuteUbergraph_Wyvern_Character_BP_ZombiePoison");

	AWyvern_Character_BP_ZombiePoison_C_ExecuteUbergraph_Wyvern_Character_BP_ZombiePoison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
