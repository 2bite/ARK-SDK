// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorph_Character_BP_Aggressive_DragonBoss_Hard_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dimorph_Character_BP_Aggressive_DragonBoss_Hard.Dimorph_Character_BP_Aggressive_DragonBoss_Hard_C.UserConstructionScript
// ()

void ADimorph_Character_BP_Aggressive_DragonBoss_Hard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_Character_BP_Aggressive_DragonBoss_Hard.Dimorph_Character_BP_Aggressive_DragonBoss_Hard_C.UserConstructionScript");

	ADimorph_Character_BP_Aggressive_DragonBoss_Hard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dimorph_Character_BP_Aggressive_DragonBoss_Hard.Dimorph_Character_BP_Aggressive_DragonBoss_Hard_C.ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss_Hard
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADimorph_Character_BP_Aggressive_DragonBoss_Hard_C::ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss_Hard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_Character_BP_Aggressive_DragonBoss_Hard.Dimorph_Character_BP_Aggressive_DragonBoss_Hard_C.ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss_Hard");

	ADimorph_Character_BP_Aggressive_DragonBoss_Hard_C_ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss_Hard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
