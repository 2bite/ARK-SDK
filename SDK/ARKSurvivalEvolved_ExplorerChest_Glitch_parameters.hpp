#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ExplorerChest_Glitch_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.Delay play Reaction Function
struct AExplorerChest_Glitch_C_Delay_play_Reaction_Function_Params
{
	struct FCompanionReactionData                      WithReactionData;                                         // (Parm, OutParm, ReferenceParm)
	class APrimalBuff_Companion*                       HLNA;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.delayed reaction
struct AExplorerChest_Glitch_C_delayed_reaction_Params
{
};

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.UnlockGen2ExplorerNote
struct AExplorerChest_Glitch_C_UnlockGen2ExplorerNote_Params
{
};

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.DrawBasicFloatingHUD
struct AExplorerChest_Glitch_C_DrawBasicFloatingHUD_Params
{
	class AHUD**                                       ForHUD;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.PlayExplorerNoteOnHLNA
struct AExplorerChest_Glitch_C_PlayExplorerNoteOnHLNA_Params
{
	class UPrimalItem*                                 Item;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.UserConstructionScript
struct AExplorerChest_Glitch_C_UserConstructionScript_Params
{
};

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature
struct AExplorerChest_Glitch_C_BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_12_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature
struct AExplorerChest_Glitch_C_BndEvt__TriggerVolume_K2Node_ComponentBoundEvent_15_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class AActor*                                      OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature
struct AExplorerChest_Glitch_C_BndEvt__TriggerSphere_K2Node_ComponentBoundEvent_133_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class AActor**                                     OtherActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               OtherBodyIndex;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bFromSweep;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (Parm, OutParm, ReferenceParm)
};

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.delay play reaction
struct AExplorerChest_Glitch_C_delay_play_reaction_Params
{
	struct FCompanionReactionData                      reaction;                                                 // (Parm)
	class APrimalBuff_Companion*                       HLNA;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ExplorerChest_Glitch.ExplorerChest_Glitch_C.ExecuteUbergraph_ExplorerChest_Glitch
struct AExplorerChest_Glitch_C_ExecuteUbergraph_ExplorerChest_Glitch_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
