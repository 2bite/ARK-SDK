#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gigant_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gigant_Character_BP.Gigant_Character_BP_C.BPNotifyClearRider
struct AGigant_Character_BP_C_BPNotifyClearRider_Params
{
	class AShooterCharacter**                          RiderClearing;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gigant_Character_BP.Gigant_Character_BP_C.BPNotifySetRider
struct AGigant_Character_BP_C_BPNotifySetRider_Params
{
	class AShooterCharacter**                          RiderSetting;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gigant_Character_BP.Gigant_Character_BP_C.GetSocketForMeleeTraceForHitBlockers
struct AGigant_Character_BP_C_GetSocketForMeleeTraceForHitBlockers_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gigant_Character_BP.Gigant_Character_BP_C.UserConstructionScript
struct AGigant_Character_BP_C_UserConstructionScript_Params
{
};

// Function Gigant_Character_BP.Gigant_Character_BP_C.ExecuteUbergraph_Gigant_Character_BP
struct AGigant_Character_BP_C_ExecuteUbergraph_Gigant_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
