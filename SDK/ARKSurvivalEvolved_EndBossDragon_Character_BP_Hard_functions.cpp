// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossDragon_Character_BP_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBossDragon_Character_BP_Hard.EndBossDragon_Character_BP_Hard_C.UserConstructionScript
// ()

void AEndBossDragon_Character_BP_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP_Hard.EndBossDragon_Character_BP_Hard_C.UserConstructionScript");

	AEndBossDragon_Character_BP_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP_Hard.EndBossDragon_Character_BP_Hard_C.ExecuteUbergraph_EndBossDragon_Character_BP_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossDragon_Character_BP_Hard_C::ExecuteUbergraph_EndBossDragon_Character_BP_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP_Hard.EndBossDragon_Character_BP_Hard_C.ExecuteUbergraph_EndBossDragon_Character_BP_Hard");

	AEndBossDragon_Character_BP_Hard_C_ExecuteUbergraph_EndBossDragon_Character_BP_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
