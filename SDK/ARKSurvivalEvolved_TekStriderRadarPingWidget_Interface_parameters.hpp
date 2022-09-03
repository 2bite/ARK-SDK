#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekStriderRadarPingWidget_Interface_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TekStriderRadarPingWidget_Interface.TekStriderRadarPingWidget_Interface_C.GetHudData
struct UTekStriderRadarPingWidget_Interface_C_GetHudData_Params
{
	struct FVector                                     PingWorldLocation;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ProgressBarValue;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                BaseColor;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RingScale;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Visibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
