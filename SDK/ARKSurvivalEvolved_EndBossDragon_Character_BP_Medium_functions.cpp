// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EndBossDragon_Character_BP_Medium_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndBossDragon_Character_BP_Medium.EndBossDragon_Character_BP_Medium_C.UserConstructionScript
// ()

void AEndBossDragon_Character_BP_Medium_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP_Medium.EndBossDragon_Character_BP_Medium_C.UserConstructionScript");

	AEndBossDragon_Character_BP_Medium_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndBossDragon_Character_BP_Medium.EndBossDragon_Character_BP_Medium_C.ExecuteUbergraph_EndBossDragon_Character_BP_Medium
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AEndBossDragon_Character_BP_Medium_C::ExecuteUbergraph_EndBossDragon_Character_BP_Medium(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndBossDragon_Character_BP_Medium.EndBossDragon_Character_BP_Medium_C.ExecuteUbergraph_EndBossDragon_Character_BP_Medium");

	AEndBossDragon_Character_BP_Medium_C_ExecuteUbergraph_EndBossDragon_Character_BP_Medium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
