#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekPistolHelper_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPReactivateWithDamageCauser
struct ABuff_TekPistolHelper_C_BPReactivateWithDamageCauser_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     ForDamageCauser;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.Set HUDElement Location and Scale from World Projection
struct ABuff_TekPistolHelper_C_Set_HUDElement_Location_and_Scale_from_World_Projection_Params
{
	class APlayerController*                           PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      TargetActor;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHUDElement                                 HUDElement;                                               // (Parm, OutParm, ReferenceParm)
	struct FVector                                     WorldOffsetWhenClose;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldOffsetWhenFar;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHUDElement                                 Out_Elem;                                                 // (Parm, OutParm)
	bool                                               IsTargetOnScreen;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.BPGetHUDElements
struct ABuff_TekPistolHelper_C_BPGetHUDElements_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHUDElement>                         OutElements;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.UserConstructionScript
struct ABuff_TekPistolHelper_C_UserConstructionScript_Params
{
};

// Function Buff_TekPistolHelper.Buff_TekPistolHelper_C.ExecuteUbergraph_Buff_TekPistolHelper
struct ABuff_TekPistolHelper_C_ExecuteUbergraph_Buff_TekPistolHelper_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
