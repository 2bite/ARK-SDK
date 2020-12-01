#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifleTranq_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.UserConstructionScript
struct AWeapOneShotRifleTranq_C_UserConstructionScript_Params
{
};

// Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.ReceiveBeginPlay
struct AWeapOneShotRifleTranq_C_ReceiveBeginPlay_Params
{
};

// Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.BPAnimNotifyCustomState_Begin
struct AWeapOneShotRifleTranq_C_BPAnimNotifyCustomState_Begin_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.BPAnimNotifyCustomState_End
struct AWeapOneShotRifleTranq_C_BPAnimNotifyCustomState_End_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     meshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapOneShotRifleTranq.WeapOneShotRifleTranq_C.ExecuteUbergraph_WeapOneShotRifleTranq
struct AWeapOneShotRifleTranq_C_ExecuteUbergraph_WeapOneShotRifleTranq_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
