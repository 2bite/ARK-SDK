#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_ChooseChargeSwipe_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.Check if Too Far from SpawnLoc
struct UTask_ChooseChargeSwipe_C_Check_if_Too_Far_from_SpawnLoc_Params
{
	struct FVector                                     TestLoc;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Toofar;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.FindRandomDirection
struct UTask_ChooseChargeSwipe_C_FindRandomDirection_Params
{
	struct FVector                                     Direction;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.ReceiveExecute
struct UTask_ChooseChargeSwipe_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_ChooseChargeSwipe.Task_ChooseChargeSwipe_C.ExecuteUbergraph_Task_ChooseChargeSwipe
struct UTask_ChooseChargeSwipe_C_ExecuteUbergraph_Task_ChooseChargeSwipe_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
