#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistol_Stun_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BuffTickClient
struct ABuff_TekPistol_Stun_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.CanApplyToTarget
struct ABuff_TekPistol_Stun_C_CanApplyToTarget_Params
{
	class APrimalCharacter*                            Target;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Allowed;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPSetupForInstigator
struct ABuff_TekPistol_Stun_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.CanBeViewed
struct ABuff_TekPistol_Stun_C_CanBeViewed_Params
{
	class AActor**                                     ByActor;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.GetPointCustomData
struct ABuff_TekPistol_Stun_C_GetPointCustomData_Params
{
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.GetPointOfInterestData
struct ABuff_TekPistol_Stun_C_GetPointOfInterestData_Params
{
	struct FPointOfInterestData                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BuffTickServer
struct ABuff_TekPistol_Stun_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.ApplyStunWeight
struct ABuff_TekPistol_Stun_C_ApplyStunWeight_Params
{
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPCustomAllowAddBuff
struct ABuff_TekPistol_Stun_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPReactivateWithDamageCauser
struct ABuff_TekPistol_Stun_C_BPReactivateWithDamageCauser_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ForDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.BPActivated
struct ABuff_TekPistol_Stun_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.UserConstructionScript
struct ABuff_TekPistol_Stun_C_UserConstructionScript_Params
{
};

// Function Buff_TekPistol_Stun.Buff_TekPistol_Stun_C.ExecuteUbergraph_Buff_TekPistol_Stun
struct ABuff_TekPistol_Stun_C_ExecuteUbergraph_Buff_TekPistol_Stun_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
