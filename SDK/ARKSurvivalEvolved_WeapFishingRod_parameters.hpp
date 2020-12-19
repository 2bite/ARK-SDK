#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingRod_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function WeapFishingRod.WeapFishingRod_C.ReceiveEndPlay
struct AWeapFishingRod_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.Draw Crosshair While Riding Dino
struct AWeapFishingRod_C_Draw_Crosshair_While_Riding_Dino_Params
{
	bool                                               shouldDraw;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.AllowFishing
struct AWeapFishingRod_C_AllowFishing_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.IsOwnerInCaveVolume
struct AWeapFishingRod_C_IsOwnerInCaveVolume_Params
{
	bool                                               ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.GiveFishLoot
struct AWeapFishingRod_C_GiveFishLoot_Params
{
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        Outer;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              OutQuality;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.GetNum Remaining Reel Keys
struct AWeapFishingRod_C_GetNum_Remaining_Reel_Keys_Params
{
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.CalculateDistanceToCover
struct AWeapFishingRod_C_CalculateDistanceToCover_Params
{
	bool                                               UnderWater;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              DistanceToCover;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.Get Reeled Fish Target Location
struct AWeapFishingRod_C_Get_Reeled_Fish_Target_Location_Params
{
	struct FVector                                     TargetLocation;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.UpdateBaitMeshLocation
struct AWeapFishingRod_C_UpdateBaitMeshLocation_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.PlayFishAttackAnimation
struct AWeapFishingRod_C_PlayFishAttackAnimation_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.IsPointInWater
struct AWeapFishingRod_C_IsPointInWater_Params
{
	struct FVector                                     Point;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _return;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.HandleReleasingFish
struct AWeapFishingRod_C_HandleReleasingFish_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.OnInstigatorPlayDyingEvent
struct AWeapFishingRod_C_OnInstigatorPlayDyingEvent_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.StartUnequipEvent
struct AWeapFishingRod_C_StartUnequipEvent_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.BPGetSeatingAnimation
struct AWeapFishingRod_C_BPGetSeatingAnimation_Params
{
	class UAnimSequence*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.UpdateToBeSnaredFish
struct AWeapFishingRod_C_UpdateToBeSnaredFish_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.Finish SnaringFish
struct AWeapFishingRod_C_Finish_SnaringFish_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.OnRGKeySuccess
struct AWeapFishingRod_C_OnRGKeySuccess_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.TugFishingCable
struct AWeapFishingRod_C_TugFishingCable_Params
{
	int                                                remainingMoves;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.GetReelingGameDuration
struct AWeapFishingRod_C_GetReelingGameDuration_Params
{
	class APrimalDinoCharacter*                        ReeledFish;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.OnStartPlayAnimation
struct AWeapFishingRod_C_OnStartPlayAnimation_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.StartSecondaryActionEvent
struct AWeapFishingRod_C_StartSecondaryActionEvent_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.CanSnareFish
struct AWeapFishingRod_C_CanSnareFish_Params
{
	class APrimalDinoCharacter*                        fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanSnare;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.GenerateRandomKeys
struct AWeapFishingRod_C_GenerateRandomKeys_Params
{
	int                                                NumSets;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSetKeys;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FKey>                                Keys;                                                     // (Parm, OutParm, ZeroConstructor)
};

// Function WeapFishingRod.WeapFishingRod_C.FishSnared
struct AWeapFishingRod_C_FishSnared_Params
{
	class APrimalDinoCharacter*                        fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.UpdateSurroundingPrey
struct AWeapFishingRod_C_UpdateSurroundingPrey_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.GetCableEndPoint
struct AWeapFishingRod_C_GetCableEndPoint_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndPoint;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.StartFishing
struct AWeapFishingRod_C_StartFishing_Params
{
	struct FVector                                     BaitTargetLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaitWaterSurfaceLocation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.OnFishReleased
struct AWeapFishingRod_C_OnFishReleased_Params
{
	class APrimalDinoCharacter*                        fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.OnFishSnared
struct AWeapFishingRod_C_OnFishSnared_Params
{
	class APrimalDinoCharacter*                        fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.ReleaseReeledFish
struct AWeapFishingRod_C_ReleaseReeledFish_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.CaughtFish
struct AWeapFishingRod_C_CaughtFish_Params
{
	class APrimalDinoCharacter*                        CaughtFish;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinished
struct AWeapFishingRod_C_ReelingGameFinished_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.StartReelingGame
struct AWeapFishingRod_C_StartReelingGame_Params
{
	class APrimalDinoCharacter*                        ReeledFish;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.End Fishing
struct AWeapFishingRod_C_End_Fishing_Params
{
	bool                                               releaseFish;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.CheckFishingConditions
struct AWeapFishingRod_C_CheckFishingConditions_Params
{
	bool                                               retCanFish;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.ReceiveBeginPlay
struct AWeapFishingRod_C_ReceiveBeginPlay_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.GetCableAttachComponent
struct AWeapFishingRod_C_GetCableAttachComponent_Params
{
	class USceneComponent*                             Comp;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.UpdateCableComponent
struct AWeapFishingRod_C_UpdateCableComponent_Params
{
	float                                              DeltaTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.ReceiveTick
struct AWeapFishingRod_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.BPWeaponCanFire
struct AWeapFishingRod_C_BPWeaponCanFire_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.UserConstructionScript
struct AWeapFishingRod_C_UserConstructionScript_Params
{
};

// Function WeapFishingRod.WeapFishingRod_C.EndFishingEvent
struct AWeapFishingRod_C_EndFishingEvent_Params
{
	bool                                               releaseFish;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.StartReelingGameEvent
struct AWeapFishingRod_C_StartReelingGameEvent_Params
{
	class APrimalDinoCharacter*                        ReeledInFish;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.ReelingGameFinishedEvent
struct AWeapFishingRod_C_ReelingGameFinishedEvent_Params
{
	bool                                               bSuccess;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.OnFishSnaredEvent
struct AWeapFishingRod_C_OnFishSnaredEvent_Params
{
	class APrimalDinoCharacter*                        fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.OnFishReleasedEvent
struct AWeapFishingRod_C_OnFishReleasedEvent_Params
{
	class APrimalDinoCharacter*                        fish;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.BPAnimNotifyCustomState_Begin
struct AWeapFishingRod_C_BPAnimNotifyCustomState_Begin_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             TotalDuration;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotifyState**                           AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.ServerStartFishing
struct AWeapFishingRod_C_ServerStartFishing_Params
{
	struct FVector                                     BaitTargetLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaitWaterSurfaceLocation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.ServerEndFishing
struct AWeapFishingRod_C_ServerEndFishing_Params
{
	bool                                               releaseFish;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.ServerTugCable
struct AWeapFishingRod_C_ServerTugCable_Params
{
	int                                                remainingMoves;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.TugCableEvent
struct AWeapFishingRod_C_TugCableEvent_Params
{
	int                                                remainingMoves;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.StartFishingEventMulti
struct AWeapFishingRod_C_StartFishingEventMulti_Params
{
	struct FVector                                     BaitTargetLocation;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaitWaterSurfaceLocation;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.DrawRotation
struct AWeapFishingRod_C_DrawRotation_Params
{
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewParam1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.ServerStartDeathHarvest
struct AWeapFishingRod_C_ServerStartDeathHarvest_Params
{
	class APrimalDinoCharacter*                        PrimalDinoChar;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.ExecuteUbergraph_WeapFishingRod
struct AWeapFishingRod_C_ExecuteUbergraph_WeapFishingRod_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function WeapFishingRod.WeapFishingRod_C.FishCaughtDispatcherSingle__DelegateSignature
struct AWeapFishingRod_C_FishCaughtDispatcherSingle__DelegateSignature_Params
{
	float                                              Caught_Fish_Wild_Scale;                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Net_Owner;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Fish_Class;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     Fish_Reference;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
