// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossGorilla_Character_BP_Easy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBossGorilla_Character_BP_Easy.EndBossGorilla_Character_BP_Easy_C.UserConstructionScript
// ()

void AEndBossGorilla_Character_BP_Easy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP_Easy.EndBossGorilla_Character_BP_Easy_C.UserConstructionScript");

	AEndBossGorilla_Character_BP_Easy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossGorilla_Character_BP_Easy.EndBossGorilla_Character_BP_Easy_C.ExecuteUbergraph_EndBossGorilla_Character_BP_Easy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossGorilla_Character_BP_Easy_C::ExecuteUbergraph_EndBossGorilla_Character_BP_Easy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossGorilla_Character_BP_Easy.EndBossGorilla_Character_BP_Easy_C.ExecuteUbergraph_EndBossGorilla_Character_BP_Easy");

	AEndBossGorilla_Character_BP_Easy_C_ExecuteUbergraph_EndBossGorilla_Character_BP_Easy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
