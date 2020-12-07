#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOneShotRifleAggroDart_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C.UserConstructionScript
struct AWeapOneShotRifleAggroDart_C_UserConstructionScript_Params
{
};

// Function WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C.ReceiveBeginPlay
struct AWeapOneShotRifleAggroDart_C_ReceiveBeginPlay_Params
{
};

// Function WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C.BPAnimNotifyCustomState_Begin
struct AWeapOneShotRifleAggroDart_C_BPAnimNotifyCustomState_Begin_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C.BPAnimNotifyCustomState_End
struct AWeapOneShotRifleAggroDart_C_BPAnimNotifyCustomState_End_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapOneShotRifleAggroDart.WeapOneShotRifleAggroDart_C.ExecuteUbergraph_WeapOneShotRifleAggroDart
struct AWeapOneShotRifleAggroDart_C_ExecuteUbergraph_WeapOneShotRifleAggroDart_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
