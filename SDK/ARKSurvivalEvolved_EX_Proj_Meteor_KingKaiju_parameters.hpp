#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_Proj_Meteor_KingKaiju_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.OnExplode
struct AEX_Proj_Meteor_KingKaiju_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.UserConstructionScript
struct AEX_Proj_Meteor_KingKaiju_C_UserConstructionScript_Params
{
};

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.ReceiveTick
struct AEX_Proj_Meteor_KingKaiju_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.ReceiveBeginPlay
struct AEX_Proj_Meteor_KingKaiju_C_ReceiveBeginPlay_Params
{
};

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.On_Impact
struct AEX_Proj_Meteor_KingKaiju_C_On_Impact_Params
{
};

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature
struct AEX_Proj_Meteor_KingKaiju_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature
struct AEX_Proj_Meteor_KingKaiju_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.Client_PlayWarningFX
struct AEX_Proj_Meteor_KingKaiju_C_Client_PlayWarningFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.PlayWarningFX
struct AEX_Proj_Meteor_KingKaiju_C_PlayWarningFX_Params
{
	struct FVector                                     Loc;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_Proj_Meteor_KingKaiju.EX_Proj_Meteor_KingKaiju_C.ExecuteUbergraph_EX_Proj_Meteor_KingKaiju
struct AEX_Proj_Meteor_KingKaiju_C_ExecuteUbergraph_EX_Proj_Meteor_KingKaiju_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
