#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_KingKaijuGetBestAttack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.CheckIfEnemy
struct UTask_KingKaijuGetBestAttack_C_CheckIfEnemy_Params
{
	class AActor*                                      Enemy;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnemy;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.GetBestAttackVsKaijus
struct UTask_KingKaijuGetBestAttack_C_GetBestAttackVsKaijus_Params
{
	bool                                               Failed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.ReceiveExecute
struct UTask_KingKaijuGetBestAttack_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_KingKaijuGetBestAttack.Task_KingKaijuGetBestAttack_C.ExecuteUbergraph_Task_KingKaijuGetBestAttack
struct UTask_KingKaijuGetBestAttack_C_ExecuteUbergraph_Task_KingKaijuGetBestAttack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
