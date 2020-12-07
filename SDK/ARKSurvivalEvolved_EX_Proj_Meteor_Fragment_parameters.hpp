#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_Proj_Meteor_Fragment_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.Fracture
struct AEX_Proj_Meteor_Fragment_C_Fracture_Params
{
};

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.OnExplode
struct AEX_Proj_Meteor_Fragment_C_OnExplode_Params
{
	struct FHitResult                                  Result;                                                   // (Parm, OutParm, ReferenceParm)
};

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.UserConstructionScript
struct AEX_Proj_Meteor_Fragment_C_UserConstructionScript_Params
{
};

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.ReceiveTick
struct AEX_Proj_Meteor_Fragment_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.ReceiveBeginPlay
struct AEX_Proj_Meteor_Fragment_C_ReceiveBeginPlay_Params
{
};

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.On_Impact
struct AEX_Proj_Meteor_Fragment_C_On_Impact_Params
{
};

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature
struct AEX_Proj_Meteor_Fragment_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_228_ComponentHitSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (Parm, OutParm, ReferenceParm)
};

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature
struct AEX_Proj_Meteor_Fragment_C_BndEvt__CollisionComp_K2Node_ComponentBoundEvent_90_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.Update_Visuals
struct AEX_Proj_Meteor_Fragment_C_Update_Visuals_Params
{
};

// Function EX_Proj_Meteor_Fragment.EX_Proj_Meteor_Fragment_C.ExecuteUbergraph_EX_Proj_Meteor_Fragment
struct AEX_Proj_Meteor_Fragment_C_ExecuteUbergraph_EX_Proj_Meteor_Fragment_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
