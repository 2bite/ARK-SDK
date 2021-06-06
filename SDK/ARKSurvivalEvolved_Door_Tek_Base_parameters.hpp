#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Door_Tek_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Door_Tek_Base.Door_Tek_Base_C.BPClientDoMultiUse
struct ADoor_Tek_Base_C_BPClientDoMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               ClientUseIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Door_Tek_Base.Door_Tek_Base_C.BPTryMultiUse
struct ADoor_Tek_Base_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Door_Tek_Base.Door_Tek_Base_C.BPGetMultiUseEntries
struct ADoor_Tek_Base_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Door_Tek_Base.Door_Tek_Base_C.IsValidSnapPointFrom
struct ADoor_Tek_Base_C_IsValidSnapPointFrom_Params
{
	class APrimalStructure**                           ParentStructure;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               MySnapPointFromIndex;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Door_Tek_Base.Door_Tek_Base_C.IsValidDoorOpener
struct ADoor_Tek_Base_C_IsValidDoorOpener_Params
{
	class APrimalCharacter*                            DoorOpener;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Door_Tek_Base.Door_Tek_Base_C.DoAutoCloseCheck
struct ADoor_Tek_Base_C_DoAutoCloseCheck_Params
{
};

// Function Door_Tek_Base.Door_Tek_Base_C.BPPostSetStructureCollisionChannels
struct ADoor_Tek_Base_C_BPPostSetStructureCollisionChannels_Params
{
};

// Function Door_Tek_Base.Door_Tek_Base_C.BPGotoDoorState
struct ADoor_Tek_Base_C_BPGotoDoorState_Params
{
	int*                                               NewDoorState;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Door_Tek_Base.Door_Tek_Base_C.UserConstructionScript
struct ADoor_Tek_Base_C_UserConstructionScript_Params
{
};

// Function Door_Tek_Base.Door_Tek_Base_C.StartDoorInterp
struct ADoor_Tek_Base_C_StartDoorInterp_Params
{
	float                                              InterpDest;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Door_Tek_Base.Door_Tek_Base_C.UpdateDoorInterp
struct ADoor_Tek_Base_C_UpdateDoorInterp_Params
{
};

// Function Door_Tek_Base.Door_Tek_Base_C.CheckForDoorOpeners
struct ADoor_Tek_Base_C_CheckForDoorOpeners_Params
{
};

// Function Door_Tek_Base.Door_Tek_Base_C.OnComponentBeginOverlap_Event
struct ADoor_Tek_Base_C_OnComponentBeginOverlap_Event_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function Door_Tek_Base.Door_Tek_Base_C.ReceiveBeginPlay
struct ADoor_Tek_Base_C_ReceiveBeginPlay_Params
{
};

// Function Door_Tek_Base.Door_Tek_Base_C.ExecuteUbergraph_Door_Tek_Base
struct ADoor_Tek_Base_C_ExecuteUbergraph_Door_Tek_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
