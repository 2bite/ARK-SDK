#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EX_BossArenaManager_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EX_BossArenaManager.EX_BossArenaManager_C
// 0x0340 (0x07A8 - 0x0468)
class AEX_BossArenaManager_C : public ASaveGameActorTickable
{
public:
	class UParticleSystemComponent*                    AscensionVFX;                                             // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Scene1;                                                   // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastArenaActivatedTime;                                   // 0x0478(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      BossTeleporterType;                                       // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      PlayerTeleportPos;                                        // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      BossSpawnPos;                                             // 0x0490(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     PlayerReturnPos;                                          // 0x0498(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x04A4(0x0004) MISSED OFFSET
	class UClass*                                      BossClass;                                                // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bArenaActive;                                             // 0x04B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBossSpawned;                                             // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x04B2(0x0006) MISSED OFFSET
	class APrimalDinoCharacter*                        TheBoss;                                                  // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              TeleportActorsGatherRadius;                               // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	double                                             LastTimeWarning;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      BossArenaCenterLoc;                                       // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              ZeroDifficultyBossLevel;                                  // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FourDifficultyBossLevel;                                  // 0x04DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ReturnTeleportPosOffset;                                  // 0x04E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              bossSpawnDelay;                                           // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastBossArenaActiveTime;                                  // 0x04F0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SummonCooldown;                                           // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TeleportToHomeTime;                                       // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bResetOnBeginPlay;                                        // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0501(0x0007) MISSED OFFSET
	TArray<class ABiomeZoneVolume*>                    BiomeZonesToPlayMusic;                                    // 0x0508(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	class USoundBase*                                  KaijuIntro;                                               // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             TeleportToHomeStartedAtTime;                              // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNotifyPlayersOfReturn;                                   // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0529(0x0007) MISSED OFFSET
	double                                             LastTimeActivePlayers;                                    // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimeToResetWhenNoActivePlayers;                           // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FiveDifficultyHealthAndDamageAddition;                    // 0x053C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSpawnWithoutCapsuleOffset;                               // 0x0540(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0541(0x0007) MISSED OFFSET
	TArray<class UClass*>                              PreventDeletionStructureClasses;                          // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               UseAscension;                                             // 0x0558(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	class UStaticMesh*                                 AscensionPlatformMesh;                                    // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PreviewAscensionEffect;                                   // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0569(0x0007) MISSED OFFSET
	struct UObject_FTransform                          AscensionPlatformTransform;                               // 0x0570(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AscensionGatherRadius;                                    // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x05A4(0x0004) MISSED OFFSET
	TArray<class UClass*>                              BossClassDifficultyMap;                                   // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<bool>                                       CurrentTamedKaijus;                                       // 0x05B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData09[0x8];                                       // 0x05C8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          TitanInfoVolumeTrans;                                     // 0x05D0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	class UBoxComponent*                               TitanInfoVolume;                                          // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class FString                                      LastTPResponse;                                           // 0x0608(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BossDespawned;                                            // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	class USoundBase*                                  KaijuLoop;                                                // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  KaijuLoop2;                                               // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  KaijuDeath;                                               // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BossPhase2;                                               // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x0639(0x0007) MISSED OFFSET
	class UParticleSystem*                             AscensionGatherPS;                                        // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0648(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0649(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x064A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x5];                                       // 0x064B(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0650(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x0658(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0664(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0670(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x0674(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0675(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0676(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0677(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x0678(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0679(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        CallFunc_SpawnDino_ReturnValue;                           // 0x0680(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x0688(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_ComponentBoundEvent_OtherActor;                    // 0x0690(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimitiveComponent*                         K2Node_ComponentBoundEvent_OtherComp;                     // 0x0698(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_ComponentBoundEvent_OtherBodyIndex;                // 0x06A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ComponentBoundEvent_bFromSweep;                    // 0x06A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x06A5(0x0003) MISSED OFFSET
	struct FHitResult                                  K2Node_ComponentBoundEvent_SweepResult;                   // 0x06A8(0x0088) (OutParm, Transient, DuplicateTransient, ReferenceParm)
	class FString                                      CallFunc_IsValidForTeleport_InvalidReason;                // 0x0730(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerPawnTest_C*                           K2Node_DynamicCast_AsPlayerPawnTest_C;                    // 0x0740(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0748(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StriStri_ReturnValue;                 // 0x0749(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x074A(0x0006) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_Event_Kaiju2;                                      // 0x0750(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x0758(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0759(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x075C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x0760(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x0764(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_Event_Kaiju;                                       // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x0770(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue3;            // 0x0771(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x6];                                       // 0x0772(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x0778(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_DoubleDouble_ReturnValue;             // 0x0780(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue4;                           // 0x0781(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0782(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue4;            // 0x0783(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x0784(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x0788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue4;                        // 0x0790(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_SphereOverlapActorsSimple_ActorsToIgnore_RefProperty;// 0x0798(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EX_BossArenaManager.EX_BossArenaManager_C");
		return ptr;
	}


	void SendAscensionPreload();
	void SetMusicInBiomes(class USoundBase* MusicToPlay);
	void PlayStartingAscensionMatinee();
	void SendAscension();
	void Spawn_Ascension_FVX();
	void SpawnedBoss(class APrimalDinoCharacter* Boss);
	void SFXBack_to_Home();
	void IssueReturnWarning();
	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void KillMinions();
	void CheckForActivePlayers();
	void GetAllActorsOnAscensionPlatform(bool bIncludeUnconscious, bool bIncludeUntamedCreatures, bool bIncludeDead, bool bIgnorePlayers, bool bIgnoreDinos, bool bIgnoreAttached, TArray<class AActor*>* TheActors);
	void IssueTimeWarning();
	void KillAllOccupants();
	void TeleportBackToHome();
	void DidTeleport(const struct FVector& ReturnPosition, class UClass* OverrideBossClass);
	void IsValidForTeleport(class FString* InvalidReason);
	void STATIC_UserConstructionScript();
	void StartBoss();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void KaijuKilled();
	void BndEvt__TitanInfoVolume_K2Node_ComponentBoundEvent_349_ComponentBeginOverlapSignature__DelegateSignature(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, struct FHitResult* SweepResult);
	void Call_Event_Kaiju_Despawned(class APrimalDinoCharacter* Kaiju);
	void CallEvent_PlayKaijuSecondPhaseMusic(class APrimalDinoCharacter* Kaiju);
	void ExecuteUbergraph_EX_BossArenaManager(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
