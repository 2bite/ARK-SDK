#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjRocketHomingMissile_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveTick
struct AProjRocketHomingMissile_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.IsTargetAlive
struct AProjRocketHomingMissile_C_IsTargetAlive_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.UserConstructionScript
struct AProjRocketHomingMissile_C_UserConstructionScript_Params
{
};

// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__FinishedFunc
struct AProjRocketHomingMissile_C_HomingBeep_Timeline__FinishedFunc_Params
{
};

// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__UpdateFunc
struct AProjRocketHomingMissile_C_HomingBeep_Timeline__UpdateFunc_Params
{
};

// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.HomingBeep_Timeline__Beep__EventFunc
struct AProjRocketHomingMissile_C_HomingBeep_Timeline__Beep__EventFunc_Params
{
};

// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ReceiveBeginPlay
struct AProjRocketHomingMissile_C_ReceiveBeginPlay_Params
{
};

// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.CheckDistToTarget
struct AProjRocketHomingMissile_C_CheckDistToTarget_Params
{
};

// Function ProjRocketHomingMissile.ProjRocketHomingMissile_C.ExecuteUbergraph_ProjRocketHomingMissile
struct AProjRocketHomingMissile_C_ExecuteUbergraph_ProjRocketHomingMissile_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
