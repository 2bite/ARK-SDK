#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gorilla_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.BPGetHealthBarColor
struct AGorilla_Character_BP_C_BPGetHealthBarColor_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.BPSentKilledNotification
struct AGorilla_Character_BP_C_BPSentKilledNotification_Params
{
	class AShooterPlayerController**                   ToPC;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.UserConstructionScript
struct AGorilla_Character_BP_C_UserConstructionScript_Params
{
};

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.ReceiveTick
struct AGorilla_Character_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AGorilla_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Gorilla_Character_BP.Gorilla_Character_BP_C.ExecuteUbergraph_Gorilla_Character_BP
struct AGorilla_Character_BP_C_ExecuteUbergraph_Gorilla_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
