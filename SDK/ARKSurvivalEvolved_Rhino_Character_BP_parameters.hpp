#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rhino_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Rhino_Character_BP.Rhino_Character_BP_C.GetBestExtraRunSpeedModifier
struct ARhino_Character_BP_C_GetBestExtraRunSpeedModifier_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetExtraMeleeDamageModifier
struct ARhino_Character_BP_C_BPGetExtraMeleeDamageModifier_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rhino_Character_BP.Rhino_Character_BP_C.BPGetHUDOverrideBuffProgressBarPercent
struct ARhino_Character_BP_C_BPGetHUDOverrideBuffProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Rhino_Character_BP.Rhino_Character_BP_C.GetExtraRunSpeedModifierPercent
struct ARhino_Character_BP_C_GetExtraRunSpeedModifierPercent_Params
{
	float                                              PercentVal;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Rhino_Character_BP.Rhino_Character_BP_C.UserConstructionScript
struct ARhino_Character_BP_C_UserConstructionScript_Params
{
};

// Function Rhino_Character_BP.Rhino_Character_BP_C.ExecuteUbergraph_Rhino_Character_BP
struct ARhino_Character_BP_C_ExecuteUbergraph_Rhino_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
