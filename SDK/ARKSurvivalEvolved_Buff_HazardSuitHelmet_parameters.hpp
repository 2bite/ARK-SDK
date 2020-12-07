#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HazardSuitHelmet_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.AllowPostProcessEffect
struct ABuff_HazardSuitHelmet_C_AllowPostProcessEffect_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPNotifyOtherBuffActivated
struct ABuff_HazardSuitHelmet_C_BPNotifyOtherBuffActivated_Params
{
	class APrimalBuff**                                OtherBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPNotifyOtherBuffDeactivated
struct ABuff_HazardSuitHelmet_C_BPNotifyOtherBuffDeactivated_Params
{
	class APrimalBuff**                                OtherBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.RefreshFullHazardSuitBuff
struct ABuff_HazardSuitHelmet_C_RefreshFullHazardSuitBuff_Params
{
};

// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.UserConstructionScript
struct ABuff_HazardSuitHelmet_C_UserConstructionScript_Params
{
};

// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPActivated
struct ABuff_HazardSuitHelmet_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.BPDeactivated
struct ABuff_HazardSuitHelmet_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_HazardSuitHelmet.Buff_HazardSuitHelmet_C.ExecuteUbergraph_Buff_HazardSuitHelmet
struct ABuff_HazardSuitHelmet_C_ExecuteUbergraph_Buff_HazardSuitHelmet_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
