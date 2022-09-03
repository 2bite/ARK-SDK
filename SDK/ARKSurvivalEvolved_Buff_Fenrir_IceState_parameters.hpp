#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Fenrir_IceState_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.UserConstructionScript
struct ABuff_Fenrir_IceState_C_UserConstructionScript_Params
{
};

// Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BPSetupForInstigator
struct ABuff_Fenrir_IceState_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BPDeactivated
struct ABuff_Fenrir_IceState_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.BuffTickServer
struct ABuff_Fenrir_IceState_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_Fenrir_IceState.Buff_Fenrir_IceState_C.ExecuteUbergraph_Buff_Fenrir_IceState
struct ABuff_Fenrir_IceState_C_ExecuteUbergraph_Buff_Fenrir_IceState_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
