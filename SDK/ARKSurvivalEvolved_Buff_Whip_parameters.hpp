#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Whip_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Whip.Buff_Whip_C.BPPreSetupForInstigator
struct ABuff_Whip_C_BPPreSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Whip.Buff_Whip_C.BPPreventflight
struct ABuff_Whip_C_BPPreventflight_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Whip.Buff_Whip_C.PlayStartledAnim
struct ABuff_Whip_C_PlayStartledAnim_Params
{
};

// Function Buff_Whip.Buff_Whip_C.BPActivated
struct ABuff_Whip_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Whip.Buff_Whip_C.BPCustomAllowAddBuff
struct ABuff_Whip_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_Whip.Buff_Whip_C.UserConstructionScript
struct ABuff_Whip_C_UserConstructionScript_Params
{
};

// Function Buff_Whip.Buff_Whip_C.BPSetupForInstigator
struct ABuff_Whip_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Whip.Buff_Whip_C.ExecuteUbergraph_Buff_Whip
struct ABuff_Whip_C_ExecuteUbergraph_Buff_Whip_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
