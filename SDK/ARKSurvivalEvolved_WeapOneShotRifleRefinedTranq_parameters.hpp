#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifleRefinedTranq_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.UserConstructionScript
struct AWeapOneShotRifleRefinedTranq_C_UserConstructionScript_Params
{
};

// Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.ReceiveBeginPlay
struct AWeapOneShotRifleRefinedTranq_C_ReceiveBeginPlay_Params
{
};

// Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.BPAnimNotifyCustomState_Begin
struct AWeapOneShotRifleRefinedTranq_C_BPAnimNotifyCustomState_Begin_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.BPAnimNotifyCustomState_End
struct AWeapOneShotRifleRefinedTranq_C_BPAnimNotifyCustomState_End_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapOneShotRifleRefinedTranq.WeapOneShotRifleRefinedTranq_C.ExecuteUbergraph_WeapOneShotRifleRefinedTranq
struct AWeapOneShotRifleRefinedTranq_C_ExecuteUbergraph_WeapOneShotRifleRefinedTranq_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
