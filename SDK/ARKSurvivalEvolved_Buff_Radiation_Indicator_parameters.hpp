#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Radiation_Indicator_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffDeactivated
struct ABuff_Radiation_Indicator_C_BPNotifyOtherBuffDeactivated_Params
{
	class APrimalBuff**                                OtherBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPNotifyOtherBuffActivated
struct ABuff_Radiation_Indicator_C_BPNotifyOtherBuffActivated_Params
{
	class APrimalBuff**                                OtherBuff;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPSetupForInstigator
struct ABuff_Radiation_Indicator_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Set Radiation Indicator Hidden
struct ABuff_Radiation_Indicator_C_Set_Radiation_Indicator_Hidden_Params
{
	bool                                               HideIcon;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MuteSound;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickServer
struct ABuff_Radiation_Indicator_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.Is Instigator Near Tek Forcefield
struct ABuff_Radiation_Indicator_C_Is_Instigator_Near_Tek_Forcefield_Params
{
	class AStorageBox_TekShield_C*                     TekShield;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsInsideShield;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BuffTickClient
struct ABuff_Radiation_Indicator_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.BPResetBuffStart
struct ABuff_Radiation_Indicator_C_BPResetBuffStart_Params
{
};

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.UserConstructionScript
struct ABuff_Radiation_Indicator_C_UserConstructionScript_Params
{
};

// Function Buff_Radiation_Indicator.Buff_Radiation_Indicator_C.ExecuteUbergraph_Buff_Radiation_Indicator
struct ABuff_Radiation_Indicator_C_ExecuteUbergraph_Buff_Radiation_Indicator_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
