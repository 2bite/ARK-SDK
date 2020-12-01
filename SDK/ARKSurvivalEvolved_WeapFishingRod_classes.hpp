#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFishingRod_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFishingRod.WeapFishingRod_C
// 0x0374 (0x109C - 0x0D28)
class AWeapFishingRod_C : public AShooterWeapon
{
public:
	class USceneComponent*                             CableStart3P;                                             // 0x0D28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             CableEnd3P;                                               // 0x0D30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsReeling;                                               // 0x0D38(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCableExtended;                                         // 0x0D39(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0D3A(0x0006) MISSED OFFSET
	class UPrimalCableComponent*                       FishingCable;                                             // 0x0D40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          FishingCableMaterial;                                     // 0x0D48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FishingCableWidth;                                        // 0x0D50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CableDefaultOffset;                                       // 0x0D54(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UObject*                                     LastFiredRodProjectile;                                   // 0x0D60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             CableAttach3P;                                            // 0x0D68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CableIdleLength;                                          // 0x0D70(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FishingStartPosition;                                     // 0x0D74(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAllowedMovementWhileFishing;                           // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0D84(0x0004) MISSED OFFSET
	class APrimalDinoCharacter*                        LastReeledFish;                                           // 0x0D88(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ReelingGameTemplate;                                      // 0x0D90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UUserWidget*                                 CurrentReelingGame;                                       // 0x0D98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKey>                                ReelingGameKeys;                                          // 0x0DA0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxReelingGameDuration;                                   // 0x0DB0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0DB4(0x0004) MISSED OFFSET
	struct FWeaponAnim                                 ReelingAnim;                                              // 0x0DB8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 IdleNotCastedAnim;                                        // 0x0DC8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponAnim                                 IdleCastedAnim;                                           // 0x0DD8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FisihingRodEndPointOffset;                                // 0x0DE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaitTargetLocation;                                       // 0x0DF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowCableDraw;                                           // 0x0E00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0E01(0x0003) MISSED OFFSET
	float                                              SnareStartTime;                                           // 0x0E04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanSnare;                                                 // 0x0E08(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E09(0x0003) MISSED OFFSET
	float                                              BaitMinSnareTime;                                         // 0x0E0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FFishSnareData>                      FishSnareTimes;                                           // 0x0E10(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              BaitAttractRadius;                                        // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0E24(0x0004) MISSED OFFSET
	class USoundCue*                                   CastSound;                                                // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   ReelingSound;                                             // 0x0E30(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SuccessSound;                                             // 0x0E38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class USoundCue*                                   SnappedSound;                                             // 0x0E40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAudioComponent*                             AudioComponent;                                           // 0x0E48(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaitMaxWeight;                                            // 0x0E50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0E54(0x0004) MISSED OFFSET
	TArray<class UClass*>                              AllowedFishingDinos;                                      // 0x0E58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                MaxNumberOfRGSets;                                        // 0x0E68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinReelingGameDuration;                                   // 0x0E6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class APrimalDinoCharacter*                        ToBeSnaredFish;                                           // 0x0E70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SnaredAcceptanceRadius;                                   // 0x0E78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxTimeToSnare;                                           // 0x0E7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LastSnaringTime;                                          // 0x0E80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceMaxLength;                                           // 0x0E84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCableReachedBaitTarget;                                  // 0x0E88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0E89(0x0003) MISSED OFFSET
	int                                                BaitMeshCounter;                                          // 0x0E8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SnaredFishSpeedMultiplier;                                // 0x0E90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxWildRandomScale;                                       // 0x0E94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               ReelingIdle;                                              // 0x0E98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SnaringIde;                                               // 0x0EA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSnaring;                                               // 0x0EA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0EA9(0x0007) MISSED OFFSET
	class UAnimSequence*                               SeatingIdle;                                              // 0x0EB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaitMaxSnareTime;                                         // 0x0EB8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CableSegmentLength;                                       // 0x0EBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       SnareFishSocketName;                                      // 0x0EC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     WorldEndPoint;                                            // 0x0EC8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CableTimeToReachTarget;                                   // 0x0ED4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CableIV;                                                  // 0x0ED8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CableInitialPoint;                                        // 0x0EE4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             TimeStartedInterp;                                        // 0x0EF0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RopeFallingGravity;                                       // 0x0EF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x0EFC(0x0004) MISSED OFFSET
	class UAnimSequence*                               ReelingIdleFemale;                                        // 0x0F00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SeatingIdleFemale;                                        // 0x0F08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequence*                               SnaringIdeFemale;                                         // 0x0F10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaitTargetWaterSurface;                                   // 0x0F18(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0F24(0x0004) MISSED OFFSET
	class USoundCue*                                   BaitHitTargetSound;                                       // 0x0F28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    ReeledFishTargetRotation;                                 // 0x0F30(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetBaitReeledLocation;                                 // 0x0F3C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TugMaxLengthFactor;                                       // 0x0F48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0F4C(0x0004) MISSED OFFSET
	class UParticleSystem*                             SplashEffect;                                             // 0x0F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FKey>                                ReelingGameKeysGamepad;                                   // 0x0F58(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UStaticMeshComponent*                        SMMyBaitComponent;                                        // 0x0F68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UStaticMesh*                                 SMFishingBaitMesh;                                        // 0x0F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BaitMeshScale;                                            // 0x0F78(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0F84(0x0004) MISSED OFFSET
	TArray<class UClass*>                              CaughtFishLootInventoryClasses;                           // 0x0F88(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              ExtraLootQualityMultiplier;                               // 0x0F98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraLootPowerWeightMultiplier;                           // 0x0F9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ExtraLootQuantityMultiplier;                              // 0x0FA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BaitAbsoluteMaxWeight;                                    // 0x0FA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FishWeightQuantityQualityPower;                           // 0x0FA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x4];                                       // 0x0FAC(0x0004) MISSED OFFSET
	TArray<class UClass*>                              BaseMeatCaughtFishLootInventoryClasses;                   // 0x0FB0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      CaughtString;                                             // 0x0FC0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      WithQualityString;                                        // 0x0FD0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              FishLevelQualityBase;                                     // 0x0FE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LastPreventExitingWater;                                  // 0x0FE4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0FE5(0x0003) MISSED OFFSET
	float                                              GlobalFinalQualityMultiplier;                             // 0x0FE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugFishingRod;                                         // 0x0FEC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               K2Node_CustomEvent_releaseFish2;                          // 0x0FED(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x0FEE(0x0002) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_ReeledInFish;                          // 0x0FF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_bSuccess;                              // 0x0FF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0FF9(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_CustomEvent_Fish2;                                 // 0x1000(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_CustomEvent_fish;                                  // 0x1008(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_Event_CustomEventName;                             // 0x1010(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USkeletalMeshComponent*                      K2Node_Event_MeshComp;                                    // 0x1018(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UAnimSequenceBase*                           K2Node_Event_Animation;                                   // 0x1020(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_TotalDuration;                               // 0x1028(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x4];                                       // 0x102C(0x0004) MISSED OFFSET
	class UAnimNotifyState*                            K2Node_Event_AnimNotifyObject;                            // 0x1030(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_NameName_ReturnValue;                   // 0x1038(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x1039(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x103A(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_BaitTargetLocation2;                   // 0x103C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_BaitWaterSurfaceLocation2;             // 0x1048(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_releaseFish;                           // 0x1054(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsPointInWater_return;                           // 0x1055(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x2];                                       // 0x1056(0x0002) MISSED OFFSET
	int                                                K2Node_CustomEvent_RemainingMoves2;                       // 0x1058(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_RemainingMoves;                        // 0x105C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_BaitTargetLocation;                    // 0x1060(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_BaitWaterSurfaceLocation;              // 0x106C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x1078(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x1080(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsLocallyControlled_ReturnValue;                 // 0x1081(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1082(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x1083(0x0001) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_NewParam;                              // 0x1084(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_NewParam1;                             // 0x1090(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFishingRod.WeapFishingRod_C");
		return ptr;
	}


	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason);
	void Draw_Crosshair_While_Riding_Dino(bool shouldDraw);
	void AllowFishing(bool* Result);
	void IsOwnerInCaveVolume(bool* Ret);
	void GiveFishLoot(class UClass* Class, class APrimalDinoCharacter* Outer, float* OutQuality);
	void GetNum_Remaining_Reel_Keys(int* Count);
	void CalculateDistanceToCover(bool UnderWater, float* DistanceToCover);
	void Get_Reeled_Fish_Target_Location(struct FVector* TargetLocation);
	void UpdateBaitMeshLocation();
	void PlayFishAttackAnimation();
	void IsPointInWater(const struct FVector& Point, bool* _return);
	void HandleReleasingFish();
	void OnInstigatorPlayDyingEvent();
	void StartUnequipEvent();
	class UAnimSequence* BPGetSeatingAnimation();
	void UpdateToBeSnaredFish();
	void Finish_SnaringFish();
	void OnRGKeySuccess();
	void TugFishingCable(int RemainingMoves);
	void GetReelingGameDuration(class APrimalDinoCharacter* ReeledFish, float* Duration);
	void OnStartPlayAnimation();
	void StartSecondaryActionEvent();
	void CanSnareFish(class APrimalDinoCharacter* Fish, bool* CanSnare);
	void GenerateRandomKeys(int NumSets, int NumSetKeys, TArray<struct FKey>* Keys);
	void FishSnared(class APrimalDinoCharacter* Fish);
	void STATIC_UpdateSurroundingPrey();
	void GetCableEndPoint(float DeltaTime, struct FVector* EndPoint);
	void StartFishing(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation);
	void OnFishReleased(class APrimalDinoCharacter* Fish);
	void OnFishSnared(class APrimalDinoCharacter* Fish);
	void ReleaseReeledFish();
	void STATIC_CaughtFish(class APrimalDinoCharacter* CaughtFish);
	void ReelingGameFinished(bool bSuccess);
	void StartReelingGame(class APrimalDinoCharacter* ReeledFish);
	void End_Fishing(bool releaseFish);
	void CheckFishingConditions(bool* retCanFish);
	void ReceiveBeginPlay();
	void GetCableAttachComponent(class USceneComponent** Comp);
	void UpdateCableComponent(float DeltaTime);
	void ReceiveTick(float* DeltaSeconds);
	bool STATIC_BPWeaponCanFire();
	void UserConstructionScript();
	void EndFishingEvent(bool releaseFish);
	void StartReelingGameEvent(class APrimalDinoCharacter* ReeledInFish);
	void ReelingGameFinishedEvent(bool bSuccess);
	void OnFishSnaredEvent(class APrimalDinoCharacter* Fish);
	void OnFishReleasedEvent(class APrimalDinoCharacter* Fish);
	void BPAnimNotifyCustomState_Begin(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration, class UAnimNotifyState** AnimNotifyObject);
	void ServerStartFishing(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation);
	void ServerEndFishing(bool releaseFish);
	void ServerTugCable(int RemainingMoves);
	void TugCableEvent(int RemainingMoves);
	void StartFishingEventMulti(const struct FVector& BaitTargetLocation, const struct FVector& BaitWaterSurfaceLocation);
	void DrawRotation(const struct FVector& NewParam, const struct FVector& NewParam1);
	void ExecuteUbergraph_WeapFishingRod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
