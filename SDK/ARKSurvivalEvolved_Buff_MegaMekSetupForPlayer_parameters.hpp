#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MegaMekSetupForPlayer_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.BuffTickServer
struct ABuff_MegaMekSetupForPlayer_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.BPActivated
struct ABuff_MegaMekSetupForPlayer_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.UserConstructionScript
struct ABuff_MegaMekSetupForPlayer_C_UserConstructionScript_Params
{
};

// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.MultiPlayTransformVFX
struct ABuff_MegaMekSetupForPlayer_C_MultiPlayTransformVFX_Params
{
};

// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.ReceiveBeginPlay
struct ABuff_MegaMekSetupForPlayer_C_ReceiveBeginPlay_Params
{
};

// Function Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C.ExecuteUbergraph_Buff_MegaMekSetupForPlayer
struct ABuff_MegaMekSetupForPlayer_C_ExecuteUbergraph_Buff_MegaMekSetupForPlayer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
