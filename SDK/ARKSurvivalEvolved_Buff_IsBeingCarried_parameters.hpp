#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IsBeingCarried_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPSetupForInstigator
struct ABuff_IsBeingCarried_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.CanGrabWaterDino
struct ABuff_IsBeingCarried_C_CanGrabWaterDino_Params
{
	class APrimalDinoCharacter*                        DinoRef;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.CheckAttachmentAndEvaluate
struct ABuff_IsBeingCarried_C_CheckAttachmentAndEvaluate_Params
{
};

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BuffTickClient
struct ABuff_IsBeingCarried_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BuffTickServer
struct ABuff_IsBeingCarried_C_BuffTickServer_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPCustomAllowAddBuff
struct ABuff_IsBeingCarried_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.BPPreventAddingOtherBuff
struct ABuff_IsBeingCarried_C_BPPreventAddingOtherBuff_Params
{
	class UClass**                                     anotherBuffClass;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ReceiveBeginPlay
struct ABuff_IsBeingCarried_C_ReceiveBeginPlay_Params
{
};

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ReceiveEndPlay
struct ABuff_IsBeingCarried_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.UserConstructionScript
struct ABuff_IsBeingCarried_C_UserConstructionScript_Params
{
};

// Function Buff_IsBeingCarried.Buff_IsBeingCarried_C.ExecuteUbergraph_Buff_IsBeingCarried
struct ABuff_IsBeingCarried_C_ExecuteUbergraph_Buff_IsBeingCarried_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
