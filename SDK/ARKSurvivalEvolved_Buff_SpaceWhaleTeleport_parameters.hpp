#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SpaceWhaleTeleport_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPDeactivated
struct ABuff_SpaceWhaleTeleport_C_BPDeactivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveDestroyed
struct ABuff_SpaceWhaleTeleport_C_ReceiveDestroyed_Params
{
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BuffTickClient
struct ABuff_SpaceWhaleTeleport_C_BuffTickClient_Params
{
	float*                                             DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPSetupForInstigator
struct ABuff_SpaceWhaleTeleport_C_BPSetupForInstigator_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPCustomAllowAddBuff
struct ABuff_SpaceWhaleTeleport_C_BPCustomAllowAddBuff_Params
{
	class APrimalCharacter**                           forCharacter;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPPreventInstigatorMovementMode
struct ABuff_SpaceWhaleTeleport_C_BPPreventInstigatorMovementMode_Params
{
	TEnumAsByte<EMovementMode>*                        NewMovementMode;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	unsigned char*                                     NewCustomMode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPOnOwnerMassTeleportEvent
struct ABuff_SpaceWhaleTeleport_C_BPOnOwnerMassTeleportEvent_Params
{
	TEnumAsByte<EMassTeleportState>*                   EventState;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter**                           TeleportInitiatedByChar;                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.UserConstructionScript
struct ABuff_SpaceWhaleTeleport_C_UserConstructionScript_Params
{
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.MultiHyperdriveEffect
struct ABuff_SpaceWhaleTeleport_C_MultiHyperdriveEffect_Params
{
	class USceneComponent*                             MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Start;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     End;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportTriggered
struct ABuff_SpaceWhaleTeleport_C_OnMassTeleportTriggered_Params
{
	bool                                               Success;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportStarted
struct ABuff_SpaceWhaleTeleport_C_OnMassTeleportStarted_Params
{
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.OnMassTeleportCompleted
struct ABuff_SpaceWhaleTeleport_C_OnMassTeleportCompleted_Params
{
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.BPActivated
struct ABuff_SpaceWhaleTeleport_C_BPActivated_Params
{
	class AActor**                                     ForInstigator;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ReceiveBeginPlay
struct ABuff_SpaceWhaleTeleport_C_ReceiveBeginPlay_Params
{
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.SyncMovementMode
struct ABuff_SpaceWhaleTeleport_C_SyncMovementMode_Params
{
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.HideMesh
struct ABuff_SpaceWhaleTeleport_C_HideMesh_Params
{
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpaceWhaleTeleport.Buff_SpaceWhaleTeleport_C.ExecuteUbergraph_Buff_SpaceWhaleTeleport
struct ABuff_SpaceWhaleTeleport_C_ExecuteUbergraph_Buff_SpaceWhaleTeleport_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
