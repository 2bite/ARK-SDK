#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Base_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ExplorerChest_Base.ExplorerChest_Base_C.BPGetExtraSpecialBlueprintInt
struct AExplorerChest_Base_C_BPGetExtraSpecialBlueprintInt_Params
{
	int*                                               toCheck;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.DrawBasicFloatingHUD
struct AExplorerChest_Base_C_DrawBasicFloatingHUD_Params
{
	class AHUD**                                       ForHUD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveEndPlay
struct AExplorerChest_Base_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.ReceiveBeginPlay
struct AExplorerChest_Base_C_ReceiveBeginPlay_Params
{
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.PlayUnlock
struct AExplorerChest_Base_C_PlayUnlock_Params
{
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.UserConstructionScript
struct AExplorerChest_Base_C_UserConstructionScript_Params
{
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature
struct AExplorerChest_Base_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.CheckForPlayerState
struct AExplorerChest_Base_C_CheckForPlayerState_Params
{
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.DoUnlock
struct AExplorerChest_Base_C_DoUnlock_Params
{
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.ShortRefresh
struct AExplorerChest_Base_C_ShortRefresh_Params
{
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.LongRefresh
struct AExplorerChest_Base_C_LongRefresh_Params
{
};

// Function ExplorerChest_Base.ExplorerChest_Base_C.ExecuteUbergraph_ExplorerChest_Base
struct AExplorerChest_Base_C_ExecuteUbergraph_ExplorerChest_Base_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
