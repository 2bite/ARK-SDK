#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_IceKaijuFindBestMeleeAttack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CheckIfTargetIsCloseToPaws
struct UTask_IceKaijuFindBestMeleeAttack_C_CheckIfTargetIsCloseToPaws_Params
{
	bool                                               FoundPawAttack;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                QuadIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               UseIceBreath;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.SetTargetQuadrant
struct UTask_IceKaijuFindBestMeleeAttack_C_SetTargetQuadrant_Params
{
};

// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanAngryAttack
struct UTask_IceKaijuFindBestMeleeAttack_C_CanAngryAttack_Params
{
	class AIceKaiju_Character_BP_C*                    MyIceKaiju;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanIceBreath
struct UTask_IceKaijuFindBestMeleeAttack_C_CanIceBreath_Params
{
	class AIceKaiju_Character_BP_C*                    MyIceKaiju;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanGroundSmash
struct UTask_IceKaijuFindBestMeleeAttack_C_CanGroundSmash_Params
{
	class AIceKaiju_Character_BP_C*                    MyIceKaiju;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.CanUseGroundSmash
struct UTask_IceKaijuFindBestMeleeAttack_C_CanUseGroundSmash_Params
{
	bool                                               IsOnCooldown;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ReceiveExecute
struct UTask_IceKaijuFindBestMeleeAttack_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_IceKaijuFindBestMeleeAttack.Task_IceKaijuFindBestMeleeAttack_C.ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack
struct UTask_IceKaijuFindBestMeleeAttack_C_ExecuteUbergraph_Task_IceKaijuFindBestMeleeAttack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
