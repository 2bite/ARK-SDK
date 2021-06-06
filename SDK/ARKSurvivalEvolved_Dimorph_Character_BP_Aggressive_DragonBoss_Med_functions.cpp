// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorph_Character_BP_Aggressive_DragonBoss_Med_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Dimorph_Character_BP_Aggressive_DragonBoss_Med.Dimorph_Character_BP_Aggressive_DragonBoss_Med_C.UserConstructionScript
// ()

void ADimorph_Character_BP_Aggressive_DragonBoss_Med_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_Character_BP_Aggressive_DragonBoss_Med.Dimorph_Character_BP_Aggressive_DragonBoss_Med_C.UserConstructionScript");

	ADimorph_Character_BP_Aggressive_DragonBoss_Med_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Dimorph_Character_BP_Aggressive_DragonBoss_Med.Dimorph_Character_BP_Aggressive_DragonBoss_Med_C.ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss_Med
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ADimorph_Character_BP_Aggressive_DragonBoss_Med_C::ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss_Med(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Dimorph_Character_BP_Aggressive_DragonBoss_Med.Dimorph_Character_BP_Aggressive_DragonBoss_Med_C.ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss_Med");

	ADimorph_Character_BP_Aggressive_DragonBoss_Med_C_ExecuteUbergraph_Dimorph_Character_BP_Aggressive_DragonBoss_Med_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
