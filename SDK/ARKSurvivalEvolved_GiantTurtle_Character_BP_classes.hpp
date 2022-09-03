#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GiantTurtle_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GiantTurtle_Character_BP.GiantTurtle_Character_BP_C
// 0x06D8 (0x2960 - 0x2288)
class AGiantTurtle_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UBoxComponent*                               PlatformSaddleBuildArea;                                  // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             BreathSound;                                              // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IdleWake;                                                 // 0x2298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Submerage;                                                // 0x22A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem1;                                          // 0x22A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    Wake;                                                     // 0x22B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    AirCone;                                                  // 0x22B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    BubbleCone;                                               // 0x22C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Right_Back_Leg;                                    // 0x22C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Right_Middle_Leg;                                  // 0x22D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Right_Front_Leg;                                   // 0x22D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Left_Back_Leg;                                     // 0x22E0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Left_Middle_Leg;                                   // 0x22E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Target_Left_Front_Leg;                                    // 0x22F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             FlockRoot;                                                // 0x22F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      InvisibleSaddle;                                          // 0x2300(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_GiantTurtle_C* DinoCharacterStatus_BP_GiantTurtle_C1;                    // 0x2308(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             LastGiveOxygenTime;                                       // 0x2310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMeshComponent*                        CropSMTest;                                               // 0x2318(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGiantTurtle_Crop_Struct>            CropDataStructs;                                          // 0x2320(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<class ACropPlotLarge_SM_C*>                 CropPlots;                                                // 0x2330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TimeintervalToAddOxygen;                                  // 0x2340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OxygenRadius;                                             // 0x2344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TotalGrowthTime;                                          // 0x2348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              GrowthTimeInterval;                                       // 0x234C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentGrowthTime;                                        // 0x2350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlowerGrowthPercentage;                                   // 0x2354(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	float                                              MushroomGrowthPercentage;                                 // 0x2358(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x235C(0x0004) MISSED OFFSET
	class UClass*                                      FlowerToGiveOnGrowth;                                     // 0x2360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      MushroomToGiveOnGrowth;                                   // 0x2368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlowersToGivePerGrowth;                                   // 0x2370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                MushroomToGivePerGrowth;                                  // 0x2374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UStaticMeshComponent*>                CropBaseMeshes;                                           // 0x2378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bIsDebugging;                                             // 0x2388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2389(0x0007) MISSED OFFSET
	double                                             LastAddOxygenVFXTime;                                     // 0x2390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<int>                                        TakenLocationIndex;                                       // 0x2398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastCheckInventoryForSeedTime;                            // 0x23A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AmountOfBubblePerAttack;                                  // 0x23B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBreathing;                                             // 0x23B4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x23B5(0x0003) MISSED OFFSET
	struct FVector                                     TPVCamera;                                                // 0x23B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     KCamera;                                                  // 0x23C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastBubbleTime;                                           // 0x23D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BubbleConeMaxLength;                                      // 0x23D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BreathDirection;                                          // 0x23DC(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BreathViewStartLocation;                                  // 0x23E8(0x000C) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BubbleConeCurrentLength;                                  // 0x23F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BubbleConeFilledTime;                                     // 0x23F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BubbleConeAngleDegree;                                    // 0x23FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 BubbleCooldownHudTemplate;                                // 0x2400(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BubbleCooldownTick;                                       // 0x2550(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BubbleAttackCooldown;                                     // 0x2554(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BubbleAttackMinRequireStamina;                            // 0x2558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BubbleAttackMaxDuration;                                  // 0x255C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BubbleAttackStaminaCostPerSecond;                         // 0x2560(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BubbleAttackDuration;                                     // 0x2564(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFullyInWater;                                          // 0x2568(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2569(0x0003) MISSED OFFSET
	struct FVector                                     InWaterCheckOffset;                                       // 0x256C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeDestroyFlock;                                     // 0x2578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpawnFlockCooldown;                                       // 0x2580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SpawnFlockOffset;                                         // 0x2584(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalCharacter*                            MicrobeSwarm;                                             // 0x2590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                FlockSize;                                                // 0x2598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumLeaderBoids;                                           // 0x259C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FBoid>                               FlockData;                                                // 0x25A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               bHasFlock;                                                // 0x25B0(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x25B1(0x0007) MISSED OFFSET
	class UStaticMesh*                                 BoidStaticMesh;                                           // 0x25B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugFlock;                                               // 0x25C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x25C1(0x0007) MISSED OFFSET
	TArray<class UStaticMeshComponent*>                FlockStaticMeshComps;                                     // 0x25C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData06[0x8];                                       // 0x25D8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CurrentFlockTarget;                                       // 0x25E0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              CurAngle;                                                 // 0x2610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x2614(0x000C) MISSED OFFSET
	struct UObject_FTransform                          CurrentFlockTarget_Smoothed;                              // 0x2620(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FFlockPersistentData                        FlockPersistentData;                                      // 0x2650(0x0038) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FBoidBehavior                               Behavior;                                                 // 0x2688(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TamingProcess;                                            // 0x26C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlockDuration;                                            // 0x26CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlockCooldown;                                            // 0x26D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x26D4(0x0004) MISSED OFFSET
	double                                             LastTimeToggleFlock;                                      // 0x26D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TestFloat;                                                // 0x26E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentDisappearingLocationOffset;                        // 0x26E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentDisapperaingMultiplier;                            // 0x26F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlockFlyingOffset;                                        // 0x26F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              SeedToGiveClass;                                          // 0x2700(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	double                                             LastTamingProcessIncrease;                                // 0x2710(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoCharacter*                        TamingFish;                                               // 0x2718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeTamingFishDie;                                    // 0x2720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTimeDamageMicrobe;                                    // 0x2728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           tamer;                                                    // 0x2730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTimeBetweenOxygenVFX;                                  // 0x2738(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeBetweenOxygenVFX;                                  // 0x273C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MinBubblesToSpawnPerWave;                                 // 0x2740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxBubblesToSpawnPerWave;                                 // 0x2744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WakeThreshold;                                            // 0x2748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x274C(0x0004) MISSED OFFSET
	TArray<class APrimalDinoCharacter*>                TamingFishes;                                             // 0x2750(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class UClass*>                              SpawnFishClasses;                                         // 0x2760(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              SubmergedRotationRate;                                    // 0x2770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnsubmergedRotationRate;                                  // 0x2774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AffinityBasePerSec;                                       // 0x2778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TPVOffsetMultiplier;                                      // 0x277C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TameRate;                                                 // 0x2780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnsubmergeBuoyancy;                                       // 0x2784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SubmergeBuoyancy;                                         // 0x2788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInRaftMode;                                            // 0x278C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	bool                                               UseWidgetHUD;                                             // 0x278D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x278E(0x0002) MISSED OFFSET
	class UClass*                                      HudWidgetClass;                                           // 0x2790(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 HUDWidgetInstance;                                        // 0x2798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloseHUDWidgetDelay;                                      // 0x27A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowMating;                                             // 0x27A4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x27A5(0x0003) MISSED OFFSET
	class FString                                      UnableToMateString;                                       // 0x27A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              TotalGrowthTimeFastGrowth;                                // 0x27B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrowthTimeIntervalFastGrowth;                             // 0x27BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LastTickTime;                                             // 0x27C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TamingFishRespawnTimer;                                   // 0x27C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x27CC(0x0004) MISSED OFFSET
	class APrimalBuff*                                 RaftModeDisplayBuff;                                      // 0x27D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxMushroomsToGiveOnUnstasis;                             // 0x27D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxFlowersToGiveOnUnstasis;                               // 0x27DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSeedsToGiveOnUnstasis;                                 // 0x27E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x27E4(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    BlowedAwayPawns;                                          // 0x27E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UTexture2D*                                  BubbleHUDFillTexture;                                     // 0x27F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UTexture2D*                                  BubbleHUDInUseTexture;                                    // 0x2800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x2808(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x280C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x2810(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x2820(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue2;                 // 0x2830(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x2840(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               K2Node_CustomEvent_bIsBreathing;                          // 0x2850(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x2851(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x2852(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_BreathViewStartLocation;               // 0x2854(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_BreathDirection;                       // 0x2860(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x4];                                       // 0x286C(0x0004) MISSED OFFSET
	class AShooterPlayerController*                    K2Node_CustomEvent_OwnerContoler;                         // 0x2870(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPGetCurrentStatusValue_ReturnValue;             // 0x2878(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_FloatFloat_ReturnValue;             // 0x287C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_LessEqual_FloatFloat_ReturnValue;                // 0x287D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x287E(0x0002) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue;                          // 0x2880(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2884(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x2885(0x0003) MISSED OFFSET
	float                                              CallFunc_PlayAnimEx_ReturnValue2;                         // 0x2888(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x4];                                       // 0x288C(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue;                   // 0x2890(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x2898(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x2899(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x289A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x289B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue3;                         // 0x289C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_PlayAnimEx_ReturnValue4;                         // 0x28A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x28A4(0x0004) MISSED OFFSET
	class UAnimMontage*                                CallFunc_GetCurrentMontage_ReturnValue2;                  // 0x28A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x28B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UGiantTurtle_AnimBlueprintNew_C*             K2Node_DynamicCast_AsGiantTurtle_AnimBlueprintNew_C;      // 0x28B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x28C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x28C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x28C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x1];                                       // 0x28C3(0x0001) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x28C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x28C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x28D4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x28D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x28DC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x28E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue2;                         // 0x28EC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x28F8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x4];                                       // 0x2904(0x0004) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x2908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_Client_GiantTurtleRaftState_C*         K2Node_DynamicCast_AsBuff_Client_GiantTurtleRaftState_C;  // 0x2910(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2918(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x2919(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_BoxOverlapActors_NEW_ActorsToIgnore_RefProperty; // 0x2920(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<int>                                        CallFunc_FlockTickFollowersAndFreeAgents_BoidIndexWhitelist_RefProperty;// 0x2930(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<int>                                        CallFunc_FlockTickLeaders_BoidIndexWhitelist_RefProperty; // 0x2940(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x2950(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GiantTurtle_Character_BP.GiantTurtle_Character_BP_C");
		return ptr;
	}


	bool BPCanBaseOnCharacter(class APrimalCharacter** BaseCharacter);
	void BPBecomeAdult();
	void BPBecomeBaby();
	void BPUnstasis();
	void BPOnDinoCheat(struct FName* CheatName, bool* bSetValue, float* Value);
	void BPNotifyToggleHUD(bool* bHudHidden);
	void OnRep_bAllowMating();
	void ReceiveBeginPlay();
	void GetAllowMating(bool* Allow);
	void BlueprintDrawFloatingHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void UpdateAllowMating();
	void BPTimerServer();
	void ReceiveDestroyed();
	void DestroyHudWidget(bool DestroyNow);
	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPNotifySetRider(class AShooterCharacter** RiderSetting);
	void BPNotifyLevelUp(int* ExtraCharacterLevel);
	bool AllowPlayMontage(class UAnimMontage** AnimMontage);
	bool BP_InterceptMoveForward(float* AxisValue);
	void CheckRaftMode(float DeltaTime);
	void BPPostLoadedFromSaveGame();
	void ClearPreventHurtAnim();
	void AnimBpSetBreathing(bool On);
	void DestroySaddle();
	void BPPlayDying(float* KillingDamage, class APawn** InstigatingPawn, class AActor** DamageCauser, struct FDamageEvent* DamageEvent);
	void TickWake();
	void UpdateMaterial();
	void BubbleAttackToggle(bool On);
	void BlueprintAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	class UAnimMontage* BPOverrideHurtAnim(float* DamageTaken, class APawn** PawnInstigator, class AActor** DamageCauser, bool* bIsLocalPath, bool* bIsPointDamage, struct FVector* PointDamageLocation, struct FVector* PointDamageHitNormal, struct FDamageEvent* DamageEvent);
	void CheckCave();
	void TurnOffFlock();
	float BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController** EventInstigator, class AActor** DamageCauser, bool* bIsPointDamage, struct FHitResult* PointHitInfo);
	void STATIC_Setup_Flock();
	void CheckTurtleTargetForFollowers();
	void TickTaming(float DeltaSeconds);
	void CheckFullyInWater();
	void TickBirdsFlock(float DeltaSeconds);
	void PushBackPawnNotInWater(class APrimalCharacter* Pawn);
	void STATIC_TickBubbleCooldown(float DeltaSeconds);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void UpdateBreath_Rotation();
	void Tick_Breathing(float DeltSeconds);
	float BPGetCrosshairAlpha();
	bool BPHandleControllerInitiatedAttack(int* AttackIndex);
	bool BPHandleOnStopTargeting();
	void GetPlayersOnSeats();
	void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode>* PrevMovementMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* PrevCustomMode, unsigned char* NewCustomMode);
	bool BlueprintCanRiderAttack(int* AttackIndex);
	void SpawnBubble();
	float BP_GetCustomModifier_RotationRate();
	void STATIC_Setup_New_Crop_DataStruct(int LocationIndex, class UPrimalItemConsumableSeed_C* SeedItem);
	void Check_Inventory_for_Seed_Items();
	void GetCropGrowLocation(int* LocationIndex);
	void SpawnOxygenVFX();
	void Update_CropsVisuals();
	void UpdateFlowerAndMushroom(float DeltaSecond);
	void STATIC_UpdateCropStructs(float DeltaSeconds);
	void STATIC_AddOxygenBuff();
	void STATIC_BPNotifyInventoryItemChange(bool* bIsItemAdd, class UPrimalItem** theItem, bool* bEquipItem);
	void GetMovementMontage(TEnumAsByte<ERootMotionMovementMode> Mode, class UAnimMontage** Montage);
	struct FVector BPGetRiderUnboardLocation(class APrimalCharacter** RidingCharacter);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void SpawnBubbles();
	void Server_SetIsBreathing(bool bIsBreathing);
	void Server_SetBreathDirection(const struct FVector& BreathViewStartLocation, const struct FVector& BreathDirection);
	void Server_TryBubbleAttack(class AShooterPlayerController* OwnerContoler);
	void Server_StopBubbleAttack();
	void Multi_StopCurrentMontage();
	void ExecuteUbergraph_GiantTurtle_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
