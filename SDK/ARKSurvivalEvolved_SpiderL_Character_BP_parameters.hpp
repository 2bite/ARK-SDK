#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpiderL_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpiderL_Character_BP.SpiderL_Character_BP_C.BPGetHealthBarColor
struct ASpiderL_Character_BP_C_BPGetHealthBarColor_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SpiderL_Character_BP.SpiderL_Character_BP_C.BPSentKilledNotification
struct ASpiderL_Character_BP_C_BPSentKilledNotification_Params
{
	class AShooterPlayerController**                   ToPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpiderL_Character_BP.SpiderL_Character_BP_C.UserConstructionScript
struct ASpiderL_Character_BP_C_UserConstructionScript_Params
{
};

// Function SpiderL_Character_BP.SpiderL_Character_BP_C.ReceiveTick
struct ASpiderL_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpiderL_Character_BP.SpiderL_Character_BP_C.ExecuteUbergraph_SpiderL_Character_BP
struct ASpiderL_Character_BP_C_ExecuteUbergraph_SpiderL_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
