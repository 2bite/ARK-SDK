#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Direbear_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Direbear_Character_BP.Direbear_Character_BP_C.BPNotifyClearRider
struct ADirebear_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Direbear_Character_BP.Direbear_Character_BP_C.BPNotifySetRider
struct ADirebear_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Direbear_Character_BP.Direbear_Character_BP_C.GetBestExtraRunSpeedModifier
struct ADirebear_Character_BP_C_GetBestExtraRunSpeedModifier_Params
{
	float                                              Out;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Direbear_Character_BP.Direbear_Character_BP_C.GetExtraRunSpeedModifierPercent
struct ADirebear_Character_BP_C_GetExtraRunSpeedModifierPercent_Params
{
	float                                              PercentVal;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Direbear_Character_BP.Direbear_Character_BP_C.UserConstructionScript
struct ADirebear_Character_BP_C_UserConstructionScript_Params
{
};

// Function Direbear_Character_BP.Direbear_Character_BP_C.ExecuteUbergraph_Direbear_Character_BP
struct ADirebear_Character_BP_C_ExecuteUbergraph_Direbear_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
