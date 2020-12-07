#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpikeWall_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SpikeWall.SpikeWall_C.UserConstructionScript
struct ASpikeWall_C_UserConstructionScript_Params
{
};

// Function SpikeWall.SpikeWall_C.DamageTick
struct ASpikeWall_C_DamageTick_Params
{
};

// Function SpikeWall.SpikeWall_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature
struct ASpikeWall_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_249_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function SpikeWall.SpikeWall_C.BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature
struct ASpikeWall_C_BndEvt__DamageBox_K2Node_ComponentBoundEvent_256_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function SpikeWall.SpikeWall_C.ExecuteUbergraph_SpikeWall
struct ASpikeWall_C_ExecuteUbergraph_SpikeWall_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
