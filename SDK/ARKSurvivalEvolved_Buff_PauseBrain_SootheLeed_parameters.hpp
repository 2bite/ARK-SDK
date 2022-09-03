#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PauseBrain_SootheLeed_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.PreventActorTargeting
struct ABuff_PauseBrain_SootheLeed_C_PreventActorTargeting_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.BPCustomAllowAddBuff
struct ABuff_PauseBrain_SootheLeed_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.BPActivated
struct ABuff_PauseBrain_SootheLeed_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.UserConstructionScript
struct ABuff_PauseBrain_SootheLeed_C_UserConstructionScript_Params
{
};

// Function Buff_PauseBrain_SootheLeed.Buff_PauseBrain_SootheLeed_C.ExecuteUbergraph_Buff_PauseBrain_SootheLeed
struct ABuff_PauseBrain_SootheLeed_C_ExecuteUbergraph_Buff_PauseBrain_SootheLeed_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
