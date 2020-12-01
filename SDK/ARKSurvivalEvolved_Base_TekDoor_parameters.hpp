#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_TekDoor_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Base_TekDoor.Base_TekDoor_C.ReceiveBeginPlay
struct ABase_TekDoor_C_ReceiveBeginPlay_Params
{
};

// Function Base_TekDoor.Base_TekDoor_C.GetCloseTraceLocation
struct ABase_TekDoor_C_GetCloseTraceLocation_Params
{
	struct FVector                                     TraceLocation;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_TekDoor.Base_TekDoor_C.BPClientDoMultiUse
struct ABase_TekDoor_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_TekDoor.Base_TekDoor_C.BPTryMultiUse
struct ABase_TekDoor_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Base_TekDoor.Base_TekDoor_C.BPGetMultiUseEntries
struct ABase_TekDoor_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Base_TekDoor.Base_TekDoor_C.IsValidDoorOpener
struct ABase_TekDoor_C_IsValidDoorOpener_Params
{
	class APrimalCharacter*                            DoorOpener;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Base_TekDoor.Base_TekDoor_C.DoAutoCloseCheck
struct ABase_TekDoor_C_DoAutoCloseCheck_Params
{
};

// Function Base_TekDoor.Base_TekDoor_C.BPPostSetStructureCollisionChannels
struct ABase_TekDoor_C_BPPostSetStructureCollisionChannels_Params
{
};

// Function Base_TekDoor.Base_TekDoor_C.BPGotoDoorState
struct ABase_TekDoor_C_BPGotoDoorState_Params
{
	int*                                               NewDoorState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_TekDoor.Base_TekDoor_C.UserConstructionScript
struct ABase_TekDoor_C_UserConstructionScript_Params
{
};

// Function Base_TekDoor.Base_TekDoor_C.StartDoorInterp
struct ABase_TekDoor_C_StartDoorInterp_Params
{
	float                                              InterpDest;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Base_TekDoor.Base_TekDoor_C.UpdateDoorInterp
struct ABase_TekDoor_C_UpdateDoorInterp_Params
{
};

// Function Base_TekDoor.Base_TekDoor_C.CheckForDoorOpeners
struct ABase_TekDoor_C_CheckForDoorOpeners_Params
{
};

// Function Base_TekDoor.Base_TekDoor_C.OnComponentBeginOverlap_Event
struct ABase_TekDoor_C_OnComponentBeginOverlap_Event_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Base_TekDoor.Base_TekDoor_C.SetCollisionEvent
struct ABase_TekDoor_C_SetCollisionEvent_Params
{
};

// Function Base_TekDoor.Base_TekDoor_C.ExecuteUbergraph_Base_TekDoor
struct ABase_TekDoor_C_ExecuteUbergraph_Base_TekDoor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
