#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Task_Scout_Strafe_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_Scout_Strafe.Task_Scout_Strafe_C.UpdateStrafeState
struct UTask_Scout_Strafe_C_UpdateStrafeState_Params
{
	class AActor*                                      Scout;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Scout_Strafe.Task_Scout_Strafe_C.GetStrafeZChange
struct UTask_Scout_Strafe_C_GetStrafeZChange_Params
{
	float                                              Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Scout_Strafe.Task_Scout_Strafe_C.Get Strafe Max HeightMult
struct UTask_Scout_Strafe_C_Get_Strafe_Max_HeightMult_Params
{
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Scout_Strafe.Task_Scout_Strafe_C.Get Strafe Min HeightMult
struct UTask_Scout_Strafe_C_Get_Strafe_Min_HeightMult_Params
{
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Scout_Strafe.Task_Scout_Strafe_C.Initialize
struct UTask_Scout_Strafe_C_Initialize_Params
{
	class AScout_AIController_BP_C*                    Controller;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Scout_Strafe.Task_Scout_Strafe_C.ReceiveTick
struct UTask_Scout_Strafe_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_Scout_Strafe.Task_Scout_Strafe_C.ExecuteUbergraph_Task_Scout_Strafe
struct UTask_Scout_Strafe_C_ExecuteUbergraph_Task_Scout_Strafe_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
