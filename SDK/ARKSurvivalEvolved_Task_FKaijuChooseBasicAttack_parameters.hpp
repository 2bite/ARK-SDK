#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_FKaijuChooseBasicAttack_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CheckIfTargetIsCloseToFoot
struct UTask_FKaijuChooseBasicAttack_C_CheckIfTargetIsCloseToFoot_Params
{
	bool                                               FoundFootAttack;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RightFoot;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.MaybeFootstomp
struct UTask_FKaijuChooseBasicAttack_C_MaybeFootstomp_Params
{
	bool                                               _return;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.TargetIsFlying
struct UTask_FKaijuChooseBasicAttack_C_TargetIsFlying_Params
{
	bool                                               IsFlying;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.CanUseFootstompBoth
struct UTask_FKaijuChooseBasicAttack_C_CanUseFootstompBoth_Params
{
	bool                                               CanAttack;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ReceiveExecute
struct UTask_FKaijuChooseBasicAttack_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_FKaijuChooseBasicAttack.Task_FKaijuChooseBasicAttack_C.ExecuteUbergraph_Task_FKaijuChooseBasicAttack
struct UTask_FKaijuChooseBasicAttack_C_ExecuteUbergraph_Task_FKaijuChooseBasicAttack_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
