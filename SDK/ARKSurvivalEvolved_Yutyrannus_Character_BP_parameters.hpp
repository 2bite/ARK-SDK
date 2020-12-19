#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Yutyrannus_Character_BP_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerNonDedicated
struct AYutyrannus_Character_BP_C_BPTimerNonDedicated_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.SetAutoCourage
struct AYutyrannus_Character_BP_C_SetAutoCourage_Params
{
	bool                                               autoCourageValue;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintDrawFloatingHUD
struct AYutyrannus_Character_BP_C_BlueprintDrawFloatingHUD_Params
{
	class AShooterHUD**                                HUD;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterX;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             CenterY;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DrawScale;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPGetMultiUseEntries
struct AYutyrannus_Character_BP_C_BPGetMultiUseEntries_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FMultiUseEntry>                      MultiUseEntries;                                          // (Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FMultiUseEntry>                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTryMultiUse
struct AYutyrannus_Character_BP_C_BPTryMultiUse_Params
{
	class APlayerController**                          ForPC;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int*                                               UseIndex;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPAdjustDamage
struct AYutyrannus_Character_BP_C_BPAdjustDamage_Params
{
	float*                                             IncomingDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageEvent*                               TheDamageEvent;                                           // (Parm)
	class AController**                                EventInstigator;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bIsPointDamage;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 PointHitInfo;                                             // (Parm)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPShouldCancelDoAttack
struct AYutyrannus_Character_BP_C_BPShouldCancelDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.All WildFollowers Attack Target
struct AYutyrannus_Character_BP_C_All_WildFollowers_Attack_Target_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Cone Check Custom
struct AYutyrannus_Character_BP_C_Cone_Check_Custom_Params
{
	float                                              coneRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewParam;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NewParam1;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isInCone;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanRiderAttack
struct AYutyrannus_Character_BP_C_BlueprintCanRiderAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsOfFollowerClass
struct AYutyrannus_Character_BP_C_IsOfFollowerClass_Params
{
	class UClass*                                      classToCheck;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hasFollowerClass;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.CanAddFearCommonChecks
struct AYutyrannus_Character_BP_C_CanAddFearCommonChecks_Params
{
	class APrimalCharacter*                            OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canAddFear;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ConeCheck
struct AYutyrannus_Character_BP_C_ConeCheck_Params
{
	float                                              coneRadius;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalCharacter*                            OtherCharacter;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useHeadSocketForReference;                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isInCone;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorA;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorB;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAdjustOutputDamage
struct AYutyrannus_Character_BP_C_BlueprintAdjustOutputDamage_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             OriginalDamageAmount;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     HitActor;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      OutDamageType;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              OutDamageImpulse;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.IsFromSameTeamOrAlliedTribe
struct AYutyrannus_Character_BP_C_IsFromSameTeamOrAlliedTribe_Params
{
	int                                                otherTargetingTeam;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isAllyOrSameTeam;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveAnyDamage
struct AYutyrannus_Character_BP_C_ReceiveAnyDamage_Params
{
	float*                                             Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType**                                DamageType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.GetFearCourageBuffClass
struct AYutyrannus_Character_BP_C_GetFearCourageBuffClass_Params
{
	bool                                               isFear;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      BuffClass;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               isTrustBuff;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintCanAttack
struct AYutyrannus_Character_BP_C_BlueprintCanAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             Distance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             attackRangeOffset;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     OtherTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Fear
struct AYutyrannus_Character_BP_C_Add_Fear_Params
{
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.FindNearbyDinosForFear
struct AYutyrannus_Character_BP_C_FindNearbyDinosForFear_Params
{
	TArray<class APrimalDinoCharacter*>                dinosFound;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildYuty Can Add Fear
struct AYutyrannus_Character_BP_C_WildYuty_Can_Add_Fear_Params
{
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canScare;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildOrderFollowersAttackTarget
struct AYutyrannus_Character_BP_C_WildOrderFollowersAttackTarget_Params
{
	class AActor*                                      NewTarget;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToWild
struct AYutyrannus_Character_BP_C_Can_Add_Courage_TamedToWild_Params
{
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canAddConfidenceToDino;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Add Courage
struct AYutyrannus_Character_BP_C_Add_Courage_Params
{
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class APrimalBuff*                                 Buff;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPOnTamedProcessOrder
struct AYutyrannus_Character_BP_C_BPOnTamedProcessOrder_Params
{
	class APrimalCharacter**                           FromCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDinoTamedOrder>*                      OrderType;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     enemyTarget;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              orderNotExecuted;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileTamed
struct AYutyrannus_Character_BP_C_Can_AddFollowerWhileTamed_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canBeFollower;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Follower WhileTamed
struct AYutyrannus_Character_BP_C_Try_Add_Follower_WhileTamed_Params
{
	class APrimalDinoCharacter*                        follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage WildToWild
struct AYutyrannus_Character_BP_C_Can_Add_Courage_WildToWild_Params
{
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canAddConfidenceToDino;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add Courage
struct AYutyrannus_Character_BP_C_Try_Add_Courage_Params
{
	class APrimalDinoCharacter*                        PotentialTarget;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               tamedToTamed;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               wildToWild;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               tamedToWild;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Add Courage TamedToTamed
struct AYutyrannus_Character_BP_C_Can_Add_Courage_TamedToTamed_Params
{
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canAddConfidenceToDino;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedAdd CourageTo Nearby Dinos
struct AYutyrannus_Character_BP_C_TamedAdd_CourageTo_Nearby_Dinos_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.TamedYuty Can Add Fear
struct AYutyrannus_Character_BP_C_TamedYuty_Can_Add_Fear_Params
{
	class APrimalDinoCharacter*                        DinoCharacter;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canScare;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPDoAttack
struct AYutyrannus_Character_BP_C_BPDoAttack_Params
{
	int*                                               AttackIndex;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can AddFollowerWhileWild
struct AYutyrannus_Character_BP_C_Can_AddFollowerWhileWild_Params
{
	class APrimalDinoCharacter*                        Dino;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreTerrorCheck;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               canBeFollower;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Try Add FollowerWhileWild
struct AYutyrannus_Character_BP_C_Try_Add_FollowerWhileWild_Params
{
	class APrimalDinoCharacter*                        follower;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ignoreTerrorCheck;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               followerAdded;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UpdateCurrentFollowers
struct AYutyrannus_Character_BP_C_UpdateCurrentFollowers_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Can Look for New Followers
struct AYutyrannus_Character_BP_C_Can_Look_for_New_Followers_Params
{
	bool                                               canLook;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPTimerServer
struct AYutyrannus_Character_BP_C_BPTimerServer_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.Wild Find New Followers
struct AYutyrannus_Character_BP_C_Wild_Find_New_Followers_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.UserConstructionScript
struct AYutyrannus_Character_BP_C_UserConstructionScript_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.AddFearToNearbyDinos
struct AYutyrannus_Character_BP_C_AddFearToNearbyDinos_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.WildTryAddCourageToFollowers
struct AYutyrannus_Character_BP_C_WildTryAddCourageToFollowers_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BlueprintAnimNotifyCustomEvent
struct AYutyrannus_Character_BP_C_BlueprintAnimNotifyCustomEvent_Params
{
	struct FName*                                      CustomEventName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent**                     MeshComp;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UAnimNotify**                                AnimNotifyObject;                                         // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoFearAfterDelay
struct AYutyrannus_Character_BP_C_DoFearAfterDelay_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawCone_Multicast
struct AYutyrannus_Character_BP_C_DrawCone_Multicast_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageAfterDelay
struct AYutyrannus_Character_BP_C_DoCourageAfterDelay_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DoCourageToFollowersAfterDelay
struct AYutyrannus_Character_BP_C_DoCourageToFollowersAfterDelay_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DisableFollowerDistanceCheckForSeconds
struct AYutyrannus_Character_BP_C_DisableFollowerDistanceCheckForSeconds_Params
{
	float                                              Seconds;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.DrawArrow_Multicast
struct AYutyrannus_Character_BP_C_DrawArrow_Multicast_Params
{
	struct FVector                                     Origin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Direction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ReceiveBeginPlay
struct AYutyrannus_Character_BP_C_ReceiveBeginPlay_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.BPUnstasis
struct AYutyrannus_Character_BP_C_BPUnstasis_Params
{
};

// Function Yutyrannus_Character_BP.Yutyrannus_Character_BP_C.ExecuteUbergraph_Yutyrannus_Character_BP
struct AYutyrannus_Character_BP_C_ExecuteUbergraph_Yutyrannus_Character_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
